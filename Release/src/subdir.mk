################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/retarget.c \
../src/stm32f10x_it.c 

OBJS += \
./src/main.o \
./src/retarget.o \
./src/stm32f10x_it.o 

C_DEPS += \
./src/main.d \
./src/retarget.d \
./src/stm32f10x_it.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g -DNDEBUG -DSTM32F10X_HD -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I"F:\github_repo\hello_STM32F103\include" -I"F:\github_repo\hello_STM32F103\system\include" -I"F:\github_repo\hello_STM32F103\system\include\cmsis" -I"F:\github_repo\hello_STM32F103\system\include\stm32f1-stdperiph" -I"F:\github_repo\hello_STM32F103\src\PlatformHandler" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


