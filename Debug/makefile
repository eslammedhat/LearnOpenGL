################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include glad/subdir.mk
-include Miscellaneous/subdir.mk
-include 11_LightingMaps/subdir.mk
-include 10_Materials/subdir.mk
-include 09_BasicLighting/subdir.mk
-include 08_LightingColor/subdir.mk
-include 07_Camera/subdir.mk
-include 06_Coordinate_Systems/subdir.mk
-include 05_Transformations/subdir.mk
-include 04_Textures/subdir.mk
-include 03_Shaders/subdir.mk
-include 02_HelloTriangle/subdir.mk
-include 01_HelloWindow/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: OpenGl_GettingStarted

# Tool invocations
OpenGl_GettingStarted: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++  -o "OpenGl_GettingStarted" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CPP_DEPS)$(C_DEPS) OpenGl_GettingStarted
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
