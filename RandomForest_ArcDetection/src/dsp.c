#include "dsp.h"
#include "rf_model.h"
#include "hal.h"
#include "fpu_rfft.h"
#include <math.h>
#include <stddef.h>

#define X_MIN             0.028000f
#define X_MAX             1.016000f
#define Z_MIN             0.004991f
#define Z_MAX             0.231700f

#define W_PTP             0.52702871f
#define W_STD             0.47297129f

#define X_RANGE_INV       (1.0f / (X_MAX - X_MIN))
#define Z_RANGE_INV       (1.0f / (Z_MAX - Z_MIN))
#define INV_ADC_BUFFER    0.00390625f
#define INV_FFT_BINS      0.00826446f

RFFT_F32_STRUCT rfft;

#pragma DATA_SECTION(adc_buffer, "dsp_buf_adc")
#pragma DATA_ALIGN(adc_buffer, 512)
float adc_buffer[ADC_BUFFER_SIZE];

#pragma DATA_SECTION(fft_output, "dsp_buf_fft")
#pragma DATA_ALIGN(fft_output, 512)
float fft_output[ADC_BUFFER_SIZE];

#pragma DATA_SECTION(fft_mag_buffer, "dsp_buf_mag")
float fft_mag_buffer[ADC_BUFFER_SIZE/2 + 1];

#pragma DATA_SECTION(hanning_window, "dsp_buf_win")
float hanning_window[ADC_BUFFER_SIZE];

void DSP_Init_FFT(void) {
    rfft.FFTSize = ADC_BUFFER_SIZE;
    rfft.FFTStages = 8;
    rfft.InBuf = &adc_buffer[0];
    rfft.OutBuf = &fft_output[0];
    rfft.MagBuf = &fft_mag_buffer[0];
    rfft.PhaseBuf = NULL;
    rfft.CosSinBuf = RFFT_f32_twiddleFactors;

    int i;
    for(i = 0; i < ADC_BUFFER_SIZE; i++) {
        hanning_window[i] = 0.5f * (1.0f - cosf(6.283185307f * i / (ADC_BUFFER_SIZE - 1)));
    }
}

void Processar_e_Inferir(float ptp_calc, float std_calc, float spec_mean_calc, float spec_std_calc) {
    float norm_ptp = (ptp_calc - X_MIN) * X_RANGE_INV;
    float norm_std = (std_calc - Z_MIN) * Z_RANGE_INV;

    float valor_G = (norm_ptp * W_PTP) + (norm_std * W_STD);

    float features_para_ia[3] = {valor_G, spec_mean_calc, spec_std_calc};

    uint16_t falha = Run_RandomForest_Inference(features_para_ia);

    if (falha == 1) {
        HAL_Aciona_Falha_de_Arco(); 
    }
}

void Executar_Pipeline_DSP(uint16_t* buffer_bruto) {
    uint16_t max_val = buffer_bruto[0];
    uint16_t min_val = buffer_bruto[0];
    uint32_t soma_tempo = 0;
    uint32_t soma_sq_tempo = 0;

    int i;
    for(i = 0; i < ADC_BUFFER_SIZE; i++) {
        uint16_t val = buffer_bruto[i];
        if(val > max_val) max_val = val;
        if(val < min_val) min_val = val;
        
        soma_tempo += val;
        soma_sq_tempo += (uint32_t)val * val; 
        
        adc_buffer[i] = ((float)val) * hanning_window[i];
    }

    float ptp = (float)(max_val - min_val);
    float media_tempo = (float)soma_tempo * INV_ADC_BUFFER;
    float media_sq_tempo = (float)soma_sq_tempo * INV_ADC_BUFFER;
    
    float var_tempo = media_sq_tempo - (media_tempo * media_tempo);
    if(var_tempo < 0.0f) var_tempo = 0.0f; 
    float std_tempo = sqrtf(var_tempo);

    RFFT_f32(&rfft);
    RFFT_f32_mag(&rfft);

    float soma_fft = 0.0f;
    float soma_sq_fft = 0.0f;

    for(i = 2; i <= 122; i++) {
        float val = fft_mag_buffer[i];
        soma_fft += val;
        soma_sq_fft += val * val;
    }

    float spec_mean = soma_fft * INV_FFT_BINS;
    float spec_media_sq = soma_sq_fft * INV_FFT_BINS;

    float var_fft = spec_media_sq - (spec_mean * spec_mean);
    if(var_fft < 0.0f) var_fft = 0.0f;
    float spec_std = sqrtf(var_fft);

    Processar_e_Inferir(ptp, std_tempo, spec_mean, spec_std);
}
