#include "hal_c2000.h"
#include "dtw_template.h"
#include "driverlib.h"
#include "device.h"

#pragma DATA_SECTION(adc_raw_ping, "dsp_buf_raw_A")
static uint16_t adc_raw_ping[N_FFT];

#pragma DATA_SECTION(adc_raw_pong, "dsp_buf_raw_B")
static uint16_t adc_raw_pong[N_FFT];

static volatile uint16_t buffer_ping_pong_flag = 0;


void HAL_Configurar_ePWM_Trigger(void) {
    // Desabilita o clock do ePWM temporariamente para configurar com seguran�a
    SysCtl_disablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);

    /* Configura o per�odo do timer para atingir  a FS
     * Em device.h, DEVICE_SYSCLK_FREQ = 75.000 kHz
     * Logo, basta T = 75000/FS - 1 */
    uint16_t pwm_period = 75000/FS - 1;
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

    // Ativa modulo ADCA e espera estabilizacao
    ADC_enableConverter(ADCA_BASE);
    DEVICE_DELAY_US(1000);

    // Mapeia para ler quando o EPWM1 mandar o trigger
    // '15' e a Janela de Aquisicao
    ADC_setupSOC(ADCA_BASE, ADC_SOC_NUMBER0, ADC_TRIGGER_EPWM1_SOCA, ADC_CH_ADCIN0, 15);

    // pulso de final da conversao para o DMA
    ADC_setInterruptSource(ADCA_BASE, ADC_INT_NUMBER1, ADC_SOC_NUMBER0);
    ADC_enableInterrupt(ADCA_BASE, ADC_INT_NUMBER1);
    ADC_enableContinuousMode(ADCA_BASE, ADC_INT_NUMBER1);
    ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1); // Apenas por seguranca (modo continuo nao impede os pulsos)
}


//Com Ping Pong para evitar escrever condicao de corrida
void HAL_Configurar_DMA(void) {
    DMA_initController();

    // Destino ==> array na RAM
    const void *destAddr = (const void *)adc_raw_ping;
    // Origem ==> registrador ADC guarda a leitura
    const void *srcAddr = (const void *)(ADCARESULT_BASE + ADC_O_RESULT0);

    DMA_configAddresses(DMA_CH1_BASE, destAddr, srcAddr);
    DMA_configBurst(DMA_CH1_BASE, 1, 0, 0);

    // 256 transferencias = 1 buffer cheio
    // Apenas destino avan�a: 1 posi��o a cada leitura
    DMA_configTransfer(DMA_CH1_BASE, N_FFT, 0, 1);

    // O DMA se move quando o terminar a conversao
    DMA_configMode(DMA_CH1_BASE, DMA_TRIGGER_ADCA1, DMA_CFG_ONESHOT_DISABLE | DMA_CFG_CONTINUOUS_ENABLE | DMA_CFG_SIZE_16BIT);

    // Ativa a interrupcao para avisar a CPU quando transferir o buffer e inicia
    DMA_setInterruptMode(DMA_CH1_BASE, DMA_INT_AT_END);
    DMA_enableInterrupt(DMA_CH1_BASE);
    DMA_enableTrigger(DMA_CH1_BASE);
    DMA_startChannel(DMA_CH1_BASE);
}


void HAL_Configurar_Timer_Arco(void) {
    CPUTimer_clearOverflowFlag(CPUTIMER0_BASE);

    // 0 = clock direto do sistema
    CPUTimer_setPreScaler(CPUTIMER0_BASE, 0);

    // Configura o periodo para 1 ms
    // Como DEVICE_SYSCLK_FREQ = 75 MHz, 1 ms = 75.000 ciclos de clock
    uint32_t ciclos_para_1ms = (DEVICE_SYSCLK_FREQ / 1000);
    CPUTimer_setPeriod(CPUTIMER0_BASE, ciclos_para_1ms);

    CPUTimer_enableInterrupt(CPUTIMER0_BASE);

    // Garante que ele comeca parado
    CPUTimer_stopTimer(CPUTIMER0_BASE);
    CPUTimer_reloadTimerCounter(CPUTIMER0_BASE);
}


uint16_t* HAL_Troca_DMA_Buffers(void) {
    uint16_t* cpu_buffer;

    if (buffer_ping_pong_flag == 0) {
        // DMA acabou de encher o PING.
        // Muda o alvo do DMA para o PONG para a prxima rodada.
        DMA_configAddresses(DMA_CH1_BASE,
                            (const void *)adc_raw_pong,
                            (const void *)(ADCARESULT_BASE + ADC_O_RESULT0));

        // A CPU vai processar o PING
        cpu_buffer = adc_raw_ping;
        buffer_ping_pong_flag = 1;
    } else {
        // DMA acabou de encher o PONG.
        // Muda o alvo do DMA para o PING para a pr�xima rodada.
        DMA_configAddresses(DMA_CH1_BASE,
                            (const void *)adc_raw_ping,
                            (const void *)(ADCARESULT_BASE + ADC_O_RESULT0));

        // A CPU vai processar o PONG
        cpu_buffer = adc_raw_pong;
        buffer_ping_pong_flag = 0;
    }

    return cpu_buffer;
}

void HAL_Limpa_Flags_de_Interrupcao(void) {
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP7);
    ADC_clearInterruptStatus(ADCA_BASE, ADC_INT_NUMBER1);
}

void HAL_Aciona_Falha_de_Arco(void) {
    GPIO_writePin(11, 1);

    CPUTimer_reloadTimerCounter(CPUTIMER0_BASE);
    CPUTimer_startTimer(CPUTIMER0_BASE);
}
