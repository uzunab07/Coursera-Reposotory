#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM =

# Architectures Specific Flags
LINKER_FILE =  ../msp432p401r.lds
CPU = cortex-m4
ARCH = thumb
SPECS = nosys.specs

# Compiler Flags and Defines
CC = 
LD = 
LDFLAGS = 
CFLAGS = 
CPPFLAGs = 

# converting all src files into object files

# The rule that should be applied to do it


# Link and creating the executer

CFLAGS = -std=c99 
CPPFLAGS = $(INCLUDES) -D$(PLATFORM)

TARGET = c1m2

ifeq ($(PLATFORM),HOST)

#  Compiler Flags and Defines
	CC = gcc

else
#  Compiler Flags and Defines
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld

	LDFLAGS =  -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)

	CFLAGS = -mcpu=$(CPU) -m$(ARCH)  --specs=$(SPECS) \
			    -march=armv7e-m -mfloat-abi=hard \
				-mfpu=fpv4-sp-d16
	 


endif

OBJS=$(SOURCES:.c=.o)
DEPS=$(SOURCES:.c=.d)
PREP=$(SOURCES:.c=.i)
ASM=$(SOURCES:.c=.asm)


%.o:%.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -MMD -MP -o $@ 

%.i:%.c
	$(CC) -E $< $(CPPFLAGS) -o $@ 

%.asm:%.c
	$(CC) -E $< $(CPPFLAGS) -o $@ 

build: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $(TARGET).out

compile-all: $(OBJS)

# Removing all created files
.PHONY:clean all build compile-all
clean:
	rm -f $(OBJS) $(DEPS) $(PREP) $(ASM) $(TARGET).* 

-include $(DEPS)