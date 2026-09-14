#include "rf_model.h"

// Força a execução na RAM para máxima velocidade
#pragma CODE_SECTION(Run_RandomForest_Inference, ".TI.ramfunc");

uint16_t Run_RandomForest_Inference(float* feat_array) {
    
    // O arquivo abaixo já faz as checagens usando feat_array[x] e já contém o return final
    #include "rf_inference.h"
    
}
