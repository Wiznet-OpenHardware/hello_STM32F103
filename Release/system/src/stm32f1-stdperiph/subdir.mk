################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/stm32f1-stdperiph/misc.c \
../system/src/stm32f1-stdperiph/stm32f10x_flash.c \
../system/src/stm32f1-stdperiph/stm32f10x_fsmc.c \
../system/src/stm32f1-stdperiph/stm32f10x_gpio.c \
../system/src/stm32f1-stdperiph/stm32f10x_rcc.c \
../system/src/stm32f1-stdperiph/stm32f10x_tim.c \
../system/src/stm32f1-stdperiph/stm32f10x_usart.c 

OBJS += \
./system/src/stm32f1-stdperiph/misc.o \
./system/src/stm32f1-stdperiph/stm32f10x_flash.o \
./system/src/stm32f1-stdperiph/stm32f10x_fsmc.o \
./system/src/stm32f1-stdperiph/stm32f10x_gpio.o \
./system/src/stm32f1-stdperiph/stm32f10x_rcc.o \
./system/src/stm32f1-stdperiph/stm32f10x_tim.o \
./system/src/stm32f1-stdperiph/stm32f10x_usart.o 

C_DEPS += \
./system/src/stm32f1-stdperiph/misc.d \
./system/src/stm32f1-stdperiph/stm32f10x_flash.d \
./system/src/stm32f1-stdperiph/stm32f10x_fsmc.d \
./system/src/stm32f1-stdperiph/stm32f10x_gpio.d \
./system/src/stm32f1-stdperiph/stm32f10x_rcc.d \
./system/src/stm32f1-stdperiph/stm32f10x_tim.d \
./system/src/stm32f1-stdperiph/stm32f10x_usart.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/stm32f1-stdperiph/%.o: ../system/src/stm32f1-stdperiph/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g -DNDEBUG -DSTM32F10X_HD -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I"F:\github_repo\hello_STM32F103\include" -I"F:\github_repo\hello_STM32F103\system\include" -I"F:\github_repo\hello_STM32F103\system\include\cmsis" -I"F:\github_repo\hello_STM32F103\system\include\stm32f1-stdperiph" -I"F:\github_repo\hello_STM32F103\src\PlatformHandler" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


