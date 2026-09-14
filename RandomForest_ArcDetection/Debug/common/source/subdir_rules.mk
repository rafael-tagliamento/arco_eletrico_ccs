################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
common/source/device.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/device.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_adc.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_adc.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_codestartbranch.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_codestartbranch.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_cputimers.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_cputimers.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_dbgier.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_dbgier.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_defaultisr.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_defaultisr.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_dma.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_dma.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_epwm.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_epwm.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_gpio.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_gpio.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_npu.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_npu.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_piectrl.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_piectrl.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_pievect.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_pievect.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_sysctrl.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_sysctrl.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_tempsensorconv.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_tempsensorconv.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

common/source/f28p55x_usdelay.obj: C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/source/f28p55x_usdelay.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="common/source/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="common/source" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


