#ifndef HAL_H
#define HAL_H

#include <stdint.h>

#define HAL_ADC_BUFFER_SIZE 256

// Funções de Inicialização
void HAL_Configurar_ADC(void);
void HAL_Configurar_ePWM_Trigger(void);
void HAL_Configurar_DMA(void);
void HAL_Configurar_Timer_Arco(void);

// Gerenciamento da ISR
uint16_t* HAL_Troca_DMA_Buffers(void);
void HAL_Limpa_Flags_de_Interrupcao(void);
void HAL_Aciona_Falha_de_Arco(void);

#endif // HAL_H
