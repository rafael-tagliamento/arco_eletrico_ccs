################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
FPU/c28/examples/vector/28p55x_maxindex/28P55x_maxindex.obj: C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/examples/vector/28p55x_maxindex/28P55x_maxindex.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --include_path="C:/Users/mati2/workspace_v12/DTW_Project" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="C:/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="FPU/c28/examples/vector/28p55x_maxindex/$(basename $(<F)).d_raw" --include_path="C:/Users/mati2/workspace_v12/DTW_Project/Debug/syscfg" --obj_directory="FPU/c28/examples/vector/28p55x_maxindex" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-360019617: C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/examples/vector/28p55x_maxindex/dsp_MaxIndex.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs1281/ccs/utils/sysconfig_1.21.0/sysconfig_cli.bat" --script "C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/examples/vector/28p55x_maxindex/dsp_MaxIndex.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/error.h: build-360019617 C:/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/examples/vector/28p55x_maxindex/dsp_MaxIndex.syscfg
syscfg: build-360019617


