#include "device.h"
#include "driverlib.h"
#include "hal_c2000.h"
#include "dsp_fft.h"
#include "arc_detection.h"

__interrupt void dma_isr_handler(void) {
    uint16_t* active_buffer = HAL_Troca_DMA_Buffers();

    DSP_Execute_FFT(active_buffer);

    float energia_atual = DSP_Calcular_Energia_Banda();

    if (ArcDetection_Is_Calibrating()) {
        ArcDetection_Calibrate(energia_atual);
    }
    else {
        int status_arco = Process_Arc_Detection_Pipeline(energia_atual);
        if(status_arco == 1) {
            HAL_Aciona_Falha_de_Arco();
        }
    }

    HAL_Limpa_Flags_de_Interrupcao();
}

__interrupt void timer0_arco_isr(void) {
    GPIO_writePin(11, 0);
    CPUTimer_stopTimer(CPUTIMER0_BASE);
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}


void main(void) {
    Device_init();
    Device_initGPIO();
    Interrupt_initModule();
    Interrupt_initVectorTable();

    Interrupt_register(INT_DMA_CH1, &dma_isr_handler);

    Interrupt_register(INT_TIMER0, &timer0_arco_isr);
    Interrupt_enable(INT_TIMER0);

    // Inicializa��o da parte de processamento de sinal
    DSP_Init();

    // Configura��es de Hardware
    HAL_Configurar_ADC();
    HAL_Configurar_ePWM_Trigger();
    HAL_Configurar_DMA();

    // Libera a CPU para iniciar
    Interrupt_enable(INT_DMA_CH1);
    EINT;
    ERTM;

    while(1) {}
}
