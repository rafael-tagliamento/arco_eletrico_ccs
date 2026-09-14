#ifndef SRC_ARC_DETECTION_H_
#define SRC_ARC_DETECTION_H_

// Retorna 1 se estiver em calibração, 0 caso contrário
int ArcDetection_Is_Calibrating(void);

// Executa a rotina de calibração iterativa
void ArcDetection_Calibrate(float energia_atual);

// Executa a pipeline principal de inferência DTW
int Process_Arc_Detection_Pipeline(float new_energy_val);

#endif /* SRC_ARC_DETECTION_H_ */
