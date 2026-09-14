#include "f28x_project.h"
#include "driverlib.h"
#include "device.h"
#include "hal.h"
#include "dsp.h"
#include <string.h> 

volatile uint16_t adc_ready = 0;
uint16_t* dma_buffer_pronto;

#pragma CODE_SECTION(dma_ch1_isr, ".TI.ramfunc");
__interrupt void dma_ch1_isr(void) {
    dma_buffer_pronto = HAL_Troca_DMA_Buffers();
    
    adc_ready = 1;
    HAL_Limpa_Flags_de_Interrupcao();
}

#pragma CODE_SECTION(timer0_isr, ".TI.ramfunc");
__interrupt void timer0_isr(void) {
    GPIO_writePin(11, 0);
    CPUTimer_stopTimer(CPUTIMER0_BASE);
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

int main(void) {

    InitSysCtrl();  

    #ifdef _FLASH
        // Copia as funções alocadas em .TI.ramfunc da Flash para a RAM
        #if defined(__TI_EABI__)
            memcpy(&RamfuncsRunStart, &RamfuncsLoadStart, (size_t)&RamfuncsLoadSize);
        #else
            memcpy(&_RamfuncsRunStart, &_RamfuncsLoadStart, (size_t)&_RamfuncsLoadSize);
        #endif
    #endif
    
    InitPieCtrl();       
    IER = 0x0000;
    IFR = 0x0000;
    InitPieVectTable();  

    EALLOW;
    PieVectTable.DMA_CH1_INT = &dma_ch1_isr;
    PieVectTable.TIMER0_INT = &timer0_isr;
    EDIS;

    GPIO_setPinConfig(GPIO_11_GPIO11);
    GPIO_setDirectionMode(11, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(11, GPIO_PIN_TYPE_STD);
    GPIO_writePin(11, 0);

    HAL_Configurar_ADC();
    HAL_Configurar_DMA();
    HAL_Configurar_ePWM_Trigger();
    HAL_Configurar_Timer_Arco();              
    DSP_Init_FFT();

    PieCtrlRegs.PIEIER7.bit.INTx1 = 1;
    PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
    
    IER |= M_INT1;
    IER |= M_INT7;

    EINT;
    ERTM;

    while(1) {
        if (adc_ready == 1) {
            adc_ready = 0;

            Executar_Pipeline_DSP(dma_buffer_pronto);
        } else {
            asm(" IDLE"); 
        }
    }
}
