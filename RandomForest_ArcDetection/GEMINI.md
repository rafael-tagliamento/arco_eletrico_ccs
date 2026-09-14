# GEMINI.md - RandomForest Arc Detection Project Context & Guidelines

Welcome to the **RandomForest_ArcDetection** project. This is a highly optimized, real-time embedded system application designed for Texas Instruments (TI) C2000 microcontrollers (specifically the **F28P55x** series). It detects electrical arc faults in real-time by combining hardware-driven signal acquisition, digital signal processing (DSP), and an embedded Machine Learning (Random Forest) classifier.

---

## 1. Project Overview & Target Architecture

- **Target MCU:** Texas Instruments C2000 F28P55x Microcontroller.
- **Development Toolchain:** TI Code Composer Studio (CCS) utilizing the `ti-cgt-c2000_25.11.1.LTS` (or compatible) EABI compiler.
- **Linked Libraries:**
  - `driverlib.lib` (TI C2000 Driver Library)
  - `c28x_fpu_dsp_library_eabi.lib` (FPU DSP Library for highly optimized floating-point FFT)
  - `libc.a` (Standard C Runtime library)

### System Signal & Control Flow
```
[Analog Signal]
       │ (ADCIN0)
       ▼
 [ADC (12.5 kHz)]  <── Triggered by ── [ePWM1 (SOCA at Counter Zero)]
       │
       ▼ (DMA Channel 1 transfers)
 [Ping-Pong Buffer] (256-word raw sample buffers: raw_ping / raw_pong)
       │
       ▼ (DMA Interrupt triggers buffer swap & notifies CPU)
 [Hanning Windowing] (Applies window function to input buffer)
       │
       ▼
 [256-Point Real FFT] (Uses TI's FPU RFFT engine)
       │
       ▼
 [Feature Engineering] (Calculates time & spectral features, G composite feature)
       │
       ▼
 [Random Forest Model] (Inlines 250 decision trees inside RAM)
       │
       ▼
 [Arc Fault Decision] (If > 125 votes, drives GPIO 11 High for 10ms via CPU TIMER0)
```

---

## 2. Deep Dive: Pipeline & Module Architecture

### 2.1 Hardware Abstraction Layer (`hal.c`, `hal.h`)
- **Sampling Trigger:** configured via `ePWM1` running at **12.5 kHz**.
  - Clock frequency $DEVICE\_SYSCLK\_FREQ = 75\text{ MHz}$.
  - Timer period set to $5999$ ticks (TBCTR = UP mode, trigger generated when counter reaches 0: $\frac{75,000,000}{6000} = 12.5\text{ kHz}$).
- **ADC Configuration:** `ADCA` SOC0 maps to `ADCIN0`. Interrupt source `ADC_INT_NUMBER1` fires on conversion completion, serving as the trigger for the DMA.
- **DMA (Direct Memory Access):**
  - Uses DMA Channel 1 configured to transfer 16-bit values from `ADCARESULT0` to a RAM target buffer of size 256.
  - Generates an interrupt (`DMA_CH1_INT`) at the end of the 256-sample transfer.
- **Ping-Pong Buffer Mechanism:**
  - Solves CPU-DMA race conditions.
  - Maintains `adc_raw_ping` and `adc_raw_pong` static raw buffers.
  - When the DMA finishes filling one buffer, `HAL_Troca_DMA_Buffers()` shifts the active destination of the DMA to the other buffer in the background and returns the pointer of the newly filled buffer to the CPU for immediate processing.
- **Actuation & Timer Reset:**
  - On detection of an arc fault, `HAL_Aciona_Falha_de_Arco()` sets `GPIO 11` to high.
  - Starts `CPUTIMER0` configured for a 10 ms delay (calculated via $75\text{ MHz} \times 10\text{ ms} = 750,000$ clock cycles).
  - When CPUTIMER0 overflows, `timer0_isr` clears GPIO 11 back to low, resetting the trip/alarm signal.

### 2.2 DSP Stage & Feature Extraction (`dsp.c`, `dsp.h`)
- **Hanning Windowing:** Applied to avoid spectral leakage during FFT.
  - $hanning\_window[i] = 0.5 \times (1.0 - \cos(2\pi \times \frac{i}{255}))$.
- **Fast Fourier Transform (FFT):**
  - Executes a 256-point float32 real FFT using TI's FPU library structural initialization (`RFFT_F32_STRUCT rfft`).
  - Inputs, outputs, and magnitude calculations are placed in aligned RAM sections.
- **Calculated Features:**
  1. **Peak-to-Peak (`ptp`):** $X_{max} - X_{min}$ in the raw time-domain buffer.
  2. **Standard Deviation (`std_tempo`):** Standard deviation of the raw time-domain buffer.
  3. **Composite Feature (`valor_G`):**
     $$\text{norm\_ptp} = \frac{\text{ptp} - X_{min}}{X_{max} - X_{min}}$$
     $$\text{norm\_std} = \frac{\text{std\_tempo} - Z_{min}}{Z_{max} - Z_{min}}$$
     $$\text{valor\_G} = (\text{norm\_ptp} \times W_{PTP}) + (\text{norm\_std} \times W_{STD})$$
     - Where $W_{PTP} \approx 0.51749$, $W_{STD} \approx 0.48251$.
  4. **Spectral Mean (`spec_mean`):** Mean of magnitude spectrum (`fft_mag_buffer`) from bins 2 to 122.
  5. **Spectral Standard Deviation (`spec_std`):** Standard deviation of magnitude spectrum from bins 2 to 122.

### 2.3 RandomForest Machine Learning Model (`rf_model.c`, `rf_model.h`, `rf_inference.h`)
- **Input Vector:** A float array with 3 features: `[valor_G, spec_mean, spec_std]`.
- **Inference Setup:**
  - Run time-optimized inside RAM.
  - Consists of **250 pre-trained decision trees** evaluated sequentially.
  - The model code is embedded inline by `#include "rf_inference.h"` within the body of `Run_RandomForest_Inference()`.
  - **Majority Vote Threshold:** If `arc_fault_votes` exceeds **125**, an arc fault is registered (returns 1, otherwise returns 0).

---

## 3. Memory Layout & Section Placements (Critical for C2000)

C2000 microcontrollers have specialized non-unified memory buses. Achieving real-time performance requires precise alignment and memory section mapping:

### 3.1 Alignment Requirements
- **TI FPU RFFT Library Constraints:**
  - The real-FFT hardware accelerator requires input (`adc_buffer`) and output (`fft_output`) buffers to be aligned to $2 \times N$ words, where $N$ is the FFT size (256-point FFT $\rightarrow$ **512-word boundary alignment**).
  - Enforced via: `#pragma DATA_ALIGN(adc_buffer, 512)` and `#pragma DATA_ALIGN(fft_output, 512)`.

### 3.2 Specific Data & Code Placements
- **Buffers:**
  - `dsp_buf_adc`: RAM section for aligned floating-point time domain buffer.
  - `dsp_buf_fft`: RAM section for aligned FFT results.
  - `dsp_buf_mag`: RAM section for FFT magnitude spectral output.
  - `dsp_buf_win`: RAM section for the pre-calculated Hanning window coefficients.
  - `dsp_buf_raw_A` / `dsp_buf_raw_B`: RAM sections allocated to ping-pong ADC raw buffers (`adc_raw_ping` and `adc_raw_pong`).
- **Performance RAM Functions (`.TI.ramfunc`):**
  - Performance-critical execution paths are designated to the `.TI.ramfunc` section to load them into Flash but execute them out of RAM for zero wait-states.
  - Target functions:
    - `Run_RandomForest_Inference`
    - `dma_ch1_isr` (DMA Interrupt Service Routine)
    - `timer0_isr` (CPU Timer 0 ISR)
  - At startup, the boot mechanism copies these blocks using standard `memcpy` inside `main()` under `#ifdef _FLASH`.

---

## 4. Building and Running the Project

### 4.1 CCS Workspace Build
1. Import the project folder `RandomForest_ArcDetection` into **Code Composer Studio**.
2. Select your build configuration:
   - **Debug:** For emulation/JTAG execution.
   - **Release:** Optimized code structure.
   - **Flash (Active Configuration):** Configured to run on the standalone MCU.
3. Build the project using the standard hammer icon or via the headless workspace builder.

### 4.2 Local Makefile Build
The system also includes standard makefiles within the `Debug/` directory for continuous integration and command-line compilation.
- **Root Build Directory:** `/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection/Debug/`
- **Compiler Invocation:** `/home/mati23b/Apps_folders/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/bin/cl2000`
- **Clean Project:**
  ```bash
  make clean
  ```
- **Build Project:**
  ```bash
  make all
  ```

---

## 5. Development & Contribution Conventions

When maintaining or extending this codebase, adhere strictly to the following standards:

1. **Avoid Floating Point Divisions:** Floating-point division is slow on the C28x core. Always use multiplication by pre-computed inverses.
   - Example: `INV_ADC_BUFFER` ($1.0 / 256.0$) and `INV_FFT_BINS` ($1.0 / 121.0$).
2. **Strict Memory Mapping Alignment:**
   - If you modify the FFT size or introduce new DSP buffers, ensure alignment constraints match the TI library requirements. Always check `.map` outputs (such as `Debug/RandomForest_ArcDetection.map`) to ensure buffers do not overlap or break alignment.
3. **RAM Execution Allocation (`.TI.ramfunc`):**
   - Keep the Random Forest inference (`Run_RandomForest_Inference`) and low-level interrupt routines allocated to `.TI.ramfunc`.
   - Never use standard blocking operations (`printf`, heavy loops) inside these sections.
4. **Hardware Safety Interlocks:**
   - Any modification to `hal.c` must respect the Ping-Pong DMA transfer mechanism. Never block inside `dma_ch1_isr` as it will drop samples and violate real-time arc detection limits.
5. **Updating the Machine Learning Classifier:**
   - The decision tree structure in `include/rf_inference.h` is auto-generated by training scripts.
   - To replace or tune the RandomForest model, regenerate the `rf_inference.h` structure ensuring that the variables `feat_array` and `arc_fault_votes` match the signature expected by `Run_RandomForest_Inference`.
