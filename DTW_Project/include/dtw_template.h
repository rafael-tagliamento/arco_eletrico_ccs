/* Arquivo gerado automaticamente - Pipeline DTW Arc Fault */
#ifndef DTW_TEMPLATE_H
#define DTW_TEMPLATE_H

#define FS                  250000.0f
#define N_FFT               1024
#define FFT_STAGES          10

#define BIN_MIN             0
#define BIN_MAX             512

#define TEMPLATE_LENGTH     44
#define DTW_WINDOW          6
#define DTW_THRESHOLD       38.17f

const float arc_template[TEMPLATE_LENGTH] = {
    -1.560537e+00f, 2.236806e-01f, -2.557365e-01f, -8.964577e-01f,
    -1.683525e+00f, -2.818232e-01f, -3.836234e-01f, -6.465795e-01f,
    -2.762121e-01f, -4.578694e-02f, -2.606379e-01f, -1.106380e-01f,
    -4.662644e-01f, -1.447497e-01f, -6.017893e-01f, -7.858879e-01f,
    -3.790539e-01f, -1.063136e+00f, -1.099230e+00f, -1.280739e+00f,
    -1.447480e+00f, -1.321230e+00f, -1.155103e+00f, -1.190565e+00f,
    -9.610762e-01f, -5.100028e-01f, 3.612942e-01f, 5.582980e-01f,
    9.417536e-02f, 1.003921e+00f, 9.736020e-01f, 1.057319e+00f,
    1.301027e+00f, 1.379801e+00f, 3.374393e-01f, 1.574440e+00f,
    6.795315e-01f, 1.082257e+00f, 1.857378e+00f, 9.365888e-01f,
    1.848527e+00f, 1.198658e+00f, 6.106743e-01f, 1.729252e+00f
};

#endif // DTW_TEMPLATE_H
