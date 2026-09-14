#include "hal.h"
#include "driverlib.h"
#include "device.h"

// Alocação de seções específicas de RAM para o buffer Ping-Pong
#pragma DATA_SECTION(adc_raw_ping, "dsp_buf_raw_A")
static uint16_t adc_raw_ping[HAL_ADC_BUFFER_SIZE];

#pragma DATA_SECTION(adc_raw_pong, "dsp_buf_raw_B")
static uint16_t adc_raw_pong[HAL_ADC_BUFFER_SIZE];

static volatile uint16_t buffer_ping_pong_flag = 0;


void HAL_Configurar_ePWM_Trigger(void) {
    // Desabilita o clock do ePWM temporariamente para configurar com segurança
    SysCtl_disablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);

    /* Configura o período do timer para atingir 12.5 kHz
     * Em device.h, DEVICE_SYSCLK_FREQ = 75.000 kHz
     * Logo, basta T = 75000/12,5 - 1 */
    uint16_t pwm_period = 5999;
    EPWM_setTimeBasePeriod(EPWM1_BASE, pwm_period);
    EPWM_setTimeBaseCounter(EPWM1_BASE, 0);
    EPWM_setTimeBaseCounterMode(EPWM1_BASE, EPWM_COUNTER_MODE_UP);

    // Configura o ePWM para gerar o pulso quando o contador zerar
    EPWM_enableADCTrigger(EPWM1_BASE, EPWM_SOC_A);
    EPWM_setADCTriggerSource(EPWM1_BASE, EPWM_SOC_A, EPWM_SOC_TBCTR_ZERO);
    EPWM_setADCTriggerEventPrescale(EPWM1_BASE, EPWM_SOC_A, 1);

    // Habilita novamente o clock do ePWM
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);
}


void HAL_Configurar_ADC(void) {
    // Configura o clock do ADC
    ADC_setPrescaler(ADCA_BASE, ADC_CLK_DIV_4_0);

    // Ativa módulo ADCA e espera estabilização
    ADC_enableConverter(ADCA_BASE);
    DEVICE_DELAY_US(1000);

    // Mapeia para ler quando o EPWM1 mandar o trigger
    // '15' é a Janela de Aquisição
    ADC_setupSOC(ADCA_BASE, ADC_SOC_NUMBER0, ADC_TRIGGER_EPWM1_SOCA, ADC_CH_ADCIN0, 15);

    // Pulso de final da conversão aciona o DMA
    ADC_setInterruptSource(ADCA_BASE, ADC_INT_NUMBER1, ADC_SOC_NUMBER0);
    ADC_enableInterrupt(ADCA_BASE, ADC_INT_NUMBER1);
    ADC_enableContinuousMode(ADCA_BASE, ADC_INT_NUMBER1);
    ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1); // Limpeza de segurança inicial
}


// Configuração com Ping-Pong para evitar condição de corrida na CPU
void HAL_Configurar_DMA(void) {
    DMA_initController();

    // Destino ==> array na RAM (começa pelo PING)
    const void *destAddr = (const void *)adc_raw_ping;
    // Origem ==> registrador do ADC que guarda a leitura
    const void *srcAddr = (const void *)(ADCARESULT_BASE + ADC_O_RESULT0);

    DMA_configAddresses(DMA_CH1_BASE, destAddr, srcAddr);
    DMA_configBurst(DMA_CH1_BASE, 1, 0, 0);

    // 256 transferências = 1 buffer cheio
    // Apenas destino avança: 1 posição a cada leitura do ADC
    DMA_configTransfer(DMA_CH1_BASE, HAL_ADC_BUFFER_SIZE, 0, 1);

    // O DMA executa o trigger assim que o ADC termina a conversão
    DMA_configMode(DMA_CH1_BASE, DMA_TRIGGER_ADCA1, DMA_CFG_ONESHOT_DISABLE | DMA_CFG_CONTINUOUS_ENABLE | DMA_CFG_SIZE_16BIT);

    // Ativa a interrupção para avisar a CPU ao transferir o buffer inteiro
    DMA_setInterruptMode(DMA_CH1_BASE, DMA_INT_AT_END);
    DMA_enableInterrupt(DMA_CH1_BASE);
    DMA_enableTrigger(DMA_CH1_BASE);
    DMA_startChannel(DMA_CH1_BASE);
}


void HAL_Configurar_Timer_Arco(void) {
    CPUTimer_clearOverflowFlag(CPUTIMER0_BASE);

    // 0 = clock direto do sistema
    CPUTimer_setPreScaler(CPUTIMER0_BASE, 0);

    // Configura o período para 1 ms
    // Como DEVICE_SYSCLK_FREQ = 75 MHz, 10 ms = 750.000 ciclos de clock
    uint32_t ciclos_para_10ms = (DEVICE_SYSCLK_FREQ / 100);
    CPUTimer_setPeriod(CPUTIMER0_BASE, ciclos_para_10ms);

    CPUTimer_enableInterrupt(CPUTIMER0_BASE);

    // Garante que o timer começa parado
    CPUTimer_stopTimer(CPUTIMER0_BASE);
    CPUTimer_reloadTimerCounter(CPUTIMER0_BASE);
}


uint16_t* HAL_Troca_DMA_Buffers(void) {
    uint16_t* cpu_buffer;

    if (buffer_ping_pong_flag == 0) {
        // DMA acabou de encher o PING.
        // Muda o alvo do DMA para o PONG para a próxima rodada (background).
        DMA_configAddresses(DMA_CH1_BASE,
                            (const void *)adc_raw_pong,
                            (const void *)(ADCARESULT_BASE + ADC_O_RESULT0));

        // A CPU vai processar os dados do PING
        cpu_buffer = adc_raw_ping;
        buffer_ping_pong_flag = 1;
    } else {
        // DMA acabou de encher o PONG.
        // Muda o alvo do DMA para o PING para a próxima rodada (background).
        DMA_configAddresses(DMA_CH1_BASE,
                            (const void *)adc_raw_ping,
                            (const void *)(ADCARESULT_BASE + ADC_O_RESULT0));

        // A CPU vai processar os dados do PONG
        cpu_buffer = adc_raw_pong;
        buffer_ping_pong_flag = 0;
    }

    return cpu_buffer;
}

void HAL_Limpa_Flags_de_Interrupcao(void) {
    // Libera a interrupção do DMA (Grupo 7) e limpa o flag do ADC
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP7);
    ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
}

void HAL_Aciona_Falha_de_Arco(void) {
    // Escreve sinal alto no pino de desarme (GPIO 11)
    GPIO_writePin(11, 1);

    // Dispara o timer de controle, se necessário
    CPUTimer_reloadTimerCounter(CPUTIMER0_BASE);
    CPUTimer_startTimer(CPUTIMER0_BASE);
}

