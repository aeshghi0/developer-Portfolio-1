################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FIND_AND_OUTPUT_RATE.cpp \
../GET_CHECK_GENDER.cpp \
../GET_CHECK_HEIGHT.cpp \
../GET_CHECK_WEIGHT.cpp \
../main.cpp 

OBJS += \
./FIND_AND_OUTPUT_RATE.o \
./GET_CHECK_GENDER.o \
./GET_CHECK_HEIGHT.o \
./GET_CHECK_WEIGHT.o \
./main.o 

CPP_DEPS += \
./FIND_AND_OUTPUT_RATE.d \
./GET_CHECK_GENDER.d \
./GET_CHECK_HEIGHT.d \
./GET_CHECK_WEIGHT.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


