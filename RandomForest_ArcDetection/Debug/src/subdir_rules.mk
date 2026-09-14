################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
src/%.obj: ../src/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'C2000 Compiler - building file: "$<"'
	"/home/mati23b/Apps_folders/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --fp_mode=relaxed --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection" --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection/include" --include_path="/home/mati23b/Apps_folders/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/driverlib/f28p55x/driverlib" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="src/$(basename $(<F)).d_raw" --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection/Debug/syscfg" --obj_directory="src" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

src/%.obj: ../src/%.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'C2000 Compiler - building file: "$<"'
	"/home/mati23b/Apps_folders/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --fp_mode=relaxed --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection" --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection/include" --include_path="/home/mati23b/Apps_folders/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/driverlib/f28p55x/driverlib" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="src/$(basename $(<F)).d_raw" --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection/Debug/syscfg" --obj_directory="src" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

src/main.obj: ../src/main.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'C2000 Compiler - building file: "$<"'
	"/home/mati23b/Apps_folders/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc --fp_mode=relaxed --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection" --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection/include" --include_path="/home/mati23b/Apps_folders/ccs/tools/compiler/ti-cgt-c2000_25.11.1.LTS/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/libraries/dsp/FPU/c28/include/fpu32" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/device_support/f28p55x/common/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/device_support/f28p55x/headers/include" --include_path="/home/mati23b/ti/C2000Ware_26_01_00_00/driverlib/f28p55x/driverlib" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="src/$(basename $(<F)).d_raw" --include_path="/home/mati23b/workspace_ccstheia/RandomForest_ArcDetection/Debug/syscfg" --obj_directory="src" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


