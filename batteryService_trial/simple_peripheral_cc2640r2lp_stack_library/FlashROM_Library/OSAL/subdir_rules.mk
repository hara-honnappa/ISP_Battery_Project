################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
OSAL/osal.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/common/osal.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

OSAL/osal_bufmgr.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/common/osal_bufmgr.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

OSAL/osal_cbtimer.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/common/osal_cbtimer.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

OSAL/osal_clock.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/common/osal_clock.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

OSAL/osal_memory_icall.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/common/osal_memory_icall.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

OSAL/osal_pwrmgr.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/common/osal_pwrmgr.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

OSAL/osal_snv_wrapper.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/mcu/cc26xx/osal_snv_wrapper.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

OSAL/osal_timers.obj: C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/common/osal_timers.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/bin/armcl" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/build_components.opt" --cmd_file="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/config/factory_config.opt" --cmd_file="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library/TOOLS/build_config.opt"  -mv7M3 --code_state=16 -me -O4 --opt_for_speed=0 --include_path="D:/batteryService_trial/simple_peripheral_cc2640r2lp_stack_library" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/controller/cc26xx_r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/rom" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/common/cc26xx/npi/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/examples/rtos/CC2640R2_LAUNCHXL/blestack/simple_peripheral/src/stack" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/profiles/roles" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target/_common/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/target" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/hal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/icall/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/npi/src" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/osal/src/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/aes/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv/cc26xx" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/nv" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/blestack/services/src/saddr" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/rf_patches" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source/ti/devices/cc26x0r2/inc" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/source" --include_path="C:/ti/simplelink_cc2640r2_sdk_2_40_00_32/kernel/tirtos/packages" --include_path="C:/ti/xdctools_3_51_01_18_core/packages" --include_path="C:/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.4.LTS/include" --define=CC26XX --define=CC26XX_R2 --define=DeviceFamily_CC26X0R2 --define=EXT_HAL_ASSERT --define=FLASH_ROM_BUILD --define=GATT_NO_CLIENT --define=ICALL_EVENTS --define=ICALL_JT --define=ICALL_LITE --define=OSAL_CBTIMER_NUM_TASKS=1 --define=OSAL_SNV=1 --define=POWER_SAVING --define=STACK_LIBRARY --define=USE_ICALL -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="OSAL/$(basename $(<F)).d_raw" --obj_directory="OSAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


