#include "dtw_template.h"
#include "arc_detection.h"
#include <stdint.h>
#include <math.h>

#define DTW_THRESHOLD 38.17f
#define DTW_WINDOW 6

// Buffer circular para manter o hist�rico recente das energias calculadas
static float rolling_buffer[TEMPLATE_LENGTH] = {0};

// Buffer normalizado da pilha
static float norm_buffer[TEMPLATE_LENGTH] = {0};

// Refer�ncia de energia calculada pelo pr�prio microcontrolador
float dsp_steady_ref = 0.0f;
uint16_t calib_count = 0;


/*Processo necess�rio para tirar o offset e focar na morfologia,
 * o que � essencial para o caso de m�dulos fotovoltacos */
void Normalizacao_Z(const float* input, float* output, int len) {
    float sum = 0.0f, sq_sum = 0.0f;
    int i;

    for(i = 0; i < len; i++) sum += input[i];
    float mean = sum / len;

    for(i = 0; i < len; i++) {
        float diff = input[i] - mean;
        sq_sum += diff * diff; // Variancia
    }

    // Calcula o inverso do desvio padrao uma unica vez fora do loop
    float inv_std_dev = 1.0f / (sqrtf(sq_sum / len) + 1e-6f);

    // Usa multiplica��o ao inv�s da divis�o para reduzir ciclos da FPU
    for(i = 0; i < len; i++) {
        output[i] = (input[i] - mean) * inv_std_dev;
    }
}

/* Mede a similaridade entre o buffer_atual e template_arr */
float Inferencia_DTW(const float* buffer_atual, const float* template_arr, float max_threshold) {
    static float cost_prev[TEMPLATE_LENGTH];
    static float cost_curr[TEMPLATE_LENGTH];
    int i, j;

    // Inicializa com valor alto para a janela de Sakoe-Chiba
    for(j = 0; j < TEMPLATE_LENGTH; j++) {
        cost_prev[j] = 1e9f;
        cost_curr[j] = 1e9f;
    }

    cost_prev[0] = fabsf(buffer_atual[0] - template_arr[0]);

    // Calcula a primeira linha restrita � janela
    for(j = 1; j <= DTW_WINDOW; j++) {
        cost_prev[j] = cost_prev[j-1] + fabsf(buffer_atual[0] - template_arr[j]);
    }

    for(i = 1; i < TEMPLATE_LENGTH; i++) {
        float min_line_cost = 1e9f;

        // Limites da Janela de Sakoe-Chiba
        int j_start = (i - DTW_WINDOW > 1) ? i - DTW_WINDOW : 1;
        int j_end = (i + DTW_WINDOW < TEMPLATE_LENGTH) ? i + DTW_WINDOW + 1 : TEMPLATE_LENGTH;

        if (i <= DTW_WINDOW) {
            cost_curr[0] = cost_prev[0] + fabsf(buffer_atual[i] - template_arr[0]);
            min_line_cost = cost_curr[0];
        }

        for(j = j_start; j < j_end; j++) {
            float cost = fabsf(buffer_atual[i] - template_arr[j]);

            float min_penalty = cost_prev[j];
            if (cost_curr[j-1] < min_penalty) min_penalty = cost_curr[j-1];
            if (cost_prev[j-1] < min_penalty) min_penalty = cost_prev[j-1];

            cost_curr[j] = cost + min_penalty;

            if (cost_curr[j] < min_line_cost) {
                min_line_cost = cost_curr[j];
            }
        }

        // Se o m�nimo at� o momento passar o limiar, j� abandona
        if (min_line_cost > max_threshold) {
            return max_threshold + 1.0f; // Aborta
        }

        for(j = 0; j < TEMPLATE_LENGTH; j++) {
            cost_prev[j] = cost_curr[j];
            cost_curr[j] = 1e9f; // Reseta
        }
    }
    return cost_prev[TEMPLATE_LENGTH - 1];
}



int Process_Arc_Detection_Pipeline(float new_energy_val) {
    int i;
    // Buffer em FIFO
    for(i = 0; i < TEMPLATE_LENGTH - 1; i++) {
        rolling_buffer[i] = rolling_buffer[i+1];
    }
    rolling_buffer[TEMPLATE_LENGTH - 1] = new_energy_val;

    // Calcula Similaridade com a grava��o em opera��o normal
    float similarity_ratio = dsp_steady_ref / (new_energy_val + 1e-6f);
    if (similarity_ratio > 1.0f) similarity_ratio = 1.0f / similarity_ratio;

    // Se a similaridade cair abaixo de 80%, roda o DTW
    if (similarity_ratio < 0.80f) {

        // Aplica a normaliza��o
        Normalizacao_Z(rolling_buffer, norm_buffer, TEMPLATE_LENGTH);

        float dtw_distance = Inferencia_DTW(norm_buffer, arc_template, DTW_THRESHOLD);

        if (dtw_distance < DTW_THRESHOLD) {
            return 1; // Arco detectado
        }
    }
    return 0;
}

int ArcDetection_Is_Calibrating(void) {
    return (calib_count < 64) ? 1 : 0;
}

void ArcDetection_Calibrate(float energia_atual) {
    dsp_steady_ref += energia_atual;
    int i;

    // Alimenta o buffer mesmo durante a calibra��o
    for(i = 0; i < TEMPLATE_LENGTH - 1; i++) {
        rolling_buffer[i] = rolling_buffer[i+1];
    }
    rolling_buffer[TEMPLATE_LENGTH - 1] = energia_atual;

    calib_count++;

    // Ao atingir 64, finaliza a calibra��o tirando a m�dia
    if (calib_count == 64) {
        dsp_steady_ref /= 64.0f;
    }
}
