#include "dsp_fft.h"
#include "dtw_template.h"
#include "fpu_rfft.h"
#include <math.h>
#include <stddef.h>

#define TWO_PI 6.283185307f;

RFFT_F32_STRUCT rfft;

// Buffer de entrada onde o DMA ira carregar os dados do ADC
#pragma DATA_SECTION(adc_buffer, "dsp_buf_adc")
#pragma DATA_ALIGN(adc_buffer, N_FFT)
float adc_buffer[N_FFT];

// Buffer das magnitudes apos a execucao da FFT
#pragma DATA_SECTION(fft_output, "dsp_buf_fft")
#pragma DATA_ALIGN(fft_output, N_FFT)
float fft_output[N_FFT];        

// Buffer para a magnitude (mecanismo para evitar sobrescrever o anterior)
#pragma DATA_SECTION(fft_mag, "dsp_buf_mag")
float fft_mag[N_FFT/2 + 1];

// Janela pr�-calculada para poupar ciclos da FPU
#pragma DATA_SECTION(hanning_window, "dsp_buf_win")
float hanning_window[N_FFT];

void DSP_Init(void) {
    rfft.FFTSize = N_FFT;
    rfft.FFTStages = FFT_STAGES;
    rfft.InBuf = &adc_buffer[0];
    rfft.OutBuf = &fft_output[0];
    rfft.MagBuf = &fft_mag[0];
    rfft.PhaseBuf = NULL;
    rfft.CosSinBuf = RFFT_f32_twiddleFactors;

    int i;
    for(i = 0; i < N_FFT; i++) {
        hanning_window[i] = 0.5f * (1.0f - cosf(TWO_PI * (float)i / (float)(N_FFT - 1)));
    }
}

void DSP_Execute_FFT(uint16_t* cpu_buffer) {
    int i;
    // Aplicacao da Janela de Hanning
    for(i = 0; i < N_FFT; i++) {
        adc_buffer[i] = ((float)cpu_buffer[i]) * hanning_window[i];
    }

    RFFT_f32(&rfft);
    RFFT_f32_mag(&rfft);
}

float DSP_Calcular_Energia_Banda(void) {
    float energia = 0.0f;
    int i;
    //Calcula a energia no espa�o de frequ�ncia trabalhado (100 e 6000 Hz)
    for(i = BIN_MIN; i < BIN_MAX; i++) {
        energia += (fft_mag[i] * fft_mag[i]);
    }
    return energia;
}
