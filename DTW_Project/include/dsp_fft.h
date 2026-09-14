#ifndef SRC_DSP_FFT_H_
#define SRC_DSP_FFT_H_

#include <stdint.h>

// Inicializa estruturas da RFFT e calcula a janela
void DSP_Init(void);

// Aplica a janela e roda a FFT
void DSP_Execute_FFT(uint16_t* cpu_buffer);

// Calcula a energia na banda de interesse
float DSP_Calcular_Energia_Banda(void);

#endif /* SRC_DSP_FFT_H_ */
