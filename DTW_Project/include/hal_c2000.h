#ifndef HAL_C2000_H
#define HAL_C2000_H

#include <stdint.h>

#define N_FFT 256

// Funções de Inicialização
void HAL_Configurar_ADC(void);
void HAL_Configurar_ePWM_Trigger(void);
void HAL_Configurar_DMA(void);

// Gerenciamento da ISR
uint16_t* HAL_Troca_DMA_Buffers(void);
void HAL_Limpa_Flags_de_Interrupcao(void);
void HAL_Aciona_Falha_de_Arco(void);

#endif // HAL_C2000_H
