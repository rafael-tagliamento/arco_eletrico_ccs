#ifndef SRC_ARC_DETECTION_H_
#define SRC_ARC_DETECTION_H_

// Retorna 1 se estiver em calibracao, 0 caso contrario
int ArcDetection_Is_Calibrating(void);

// Executa a rotina de calibracao iterativa
void ArcDetection_Calibrate(float energia_atual);

// Executa a pipeline principal de inferencia DTW
int Process_Arc_Detection_Pipeline(float new_energy_val);

#endif /* SRC_ARC_DETECTION_H_ */
