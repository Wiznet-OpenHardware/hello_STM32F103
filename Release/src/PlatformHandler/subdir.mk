################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/PlatformHandler/gpioHandler.c \
../src/PlatformHandler/nvicHandler.c \
../src/PlatformHandler/rccHandler.c \
../src/PlatformHandler/timerHandler.c \
../src/PlatformHandler/uartHandler.c 

OBJS += \
./src/PlatformHandler/gpioHandler.o \
./src/PlatformHandler/nvicHandler.o \
./src/PlatformHandler/rccHandler.o \
./src/PlatformHandler/timerHandler.o \
./src/PlatformHandler/uartHandler.o 

C_DEPS += \
./src/PlatformHandler/gpioHandler.d \
./src/PlatformHandler/nvicHandler.d \
./src/PlatformHandler/rccHandler.d \
./src/PlatformHandler/timerHandler.d \
./src/PlatformHandler/uartHandler.d 


# Each subdirectory must supply rules for building sources it contributes
src/PlatformHandler/%.o: ../src/PlatformHandler/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g -DNDEBUG -DSTM32F10X_HD -DUSE_STDPERIPH_DRIVER -DHSE_VALUE=8000000 -I"F:\github_repo\hello_STM32F103\include" -I"F:\github_repo\hello_STM32F103\system\include" -I"F:\github_repo\hello_STM32F103\system\include\cmsis" -I"F:\github_repo\hello_STM32F103\system\include\stm32f1-stdperiph" -I"F:\github_repo\hello_STM32F103\src\PlatformHandler" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


