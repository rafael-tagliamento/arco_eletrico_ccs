#include "dsp_fft.h"
#include "fpu_rfft.h"
#include <math.h>
#include <stddef.h>

#define N_FFT 256

RFFT_F32_STRUCT rfft;

// Buffer de entrada onde o DMA irá carregar os dados do ADC
#pragma DATA_SECTION(adc_buffer, "dsp_buf_adc")
#pragma DATA_ALIGN(adc_buffer, 512)
float adc_buffer[N_FFT];

// Buffer das magnitudes após a execução da FFT
#pragma DATA_SECTION(fft_output, "dsp_buf_fft")
#pragma DATA_ALIGN(fft_output, 512)
float fft_output[N_FFT];

// Buffer para a magnitude (mecanismo para evitar sobrescrever o anterior)
#pragma DATA_SECTION(fft_mag, "dsp_buf_mag")
float fft_mag[N_FFT/2 + 1];

// Janela pré-calculada para poupar ciclos da FPU
#pragma DATA_SECTION(hanning_window, "dsp_buf_win")
float hanning_window[N_FFT];

void DSP_Init(void) {
    rfft.FFTSize = N_FFT;
    rfft.FFTStages = 8;
    rfft.InBuf = &adc_buffer[0];
    rfft.OutBuf = &fft_output[0];
    rfft.MagBuf = &fft_mag[0];
    rfft.PhaseBuf = NULL;
    rfft.CosSinBuf = RFFT_f32_twiddleFactors;

    int i;
    for(i = 0; i < N_FFT; i++) {
        hanning_window[i] = 0.5f * (1.0f - cosf(6.283185307f * i / (N_FFT - 1)));
    }
}

void DSP_Execute_FFT(uint16_t* cpu_buffer) {
    int i;
    // Aplicação da Janela de Hanning
    for(i = 0; i < N_FFT; i++) {
        adc_buffer[i] = ((float)cpu_buffer[i]) * hanning_window[i];
    }

    RFFT_f32(&rfft);
    RFFT_f32_mag(&rfft);
}

float DSP_Calcular_Energia_Banda(void) {
    float energia = 0.0f;
    int i;
    //Calcula a energia no espaço de frequência trabalhado (100 e 6000 Hz)
    for(i = 2; i < 122; i++) {
        energia += (fft_mag[i] * fft_mag[i]);
    }
    return energia;
}
