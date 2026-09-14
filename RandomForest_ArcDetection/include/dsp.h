#ifndef DSP_H
#define DSP_H

#include <stdint.h>

#define ADC_BUFFER_SIZE   256

// Buffers globais expostos para o main e para rotinas de FFT
extern float adc_buffer[ADC_BUFFER_SIZE];
extern float fft_mag_buffer[ADC_BUFFER_SIZE/2 + 1];

void DSP_Init_FFT(void);
void Executar_Pipeline_DSP(uint16_t* buffer_bruto);
void Processar_e_Inferir(float ptp_calc, float std_calc, float spec_mean_calc, float spec_std_calc);

#endif // DSP_H

