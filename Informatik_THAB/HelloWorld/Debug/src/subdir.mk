################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/math.c \
../src/sayHelloWorld.c 

C_DEPS += \
./src/math.d \
./src/sayHelloWorld.d 

OBJS += \
./src/math.o \
./src/sayHelloWorld.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/math.d ./src/math.o ./src/sayHelloWorld.d ./src/sayHelloWorld.o

.PHONY: clean-src

