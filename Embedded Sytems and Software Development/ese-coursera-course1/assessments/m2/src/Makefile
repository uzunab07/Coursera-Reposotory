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
LINKER_FILE =  msp432p401r.lds
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

TARGET = demo

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

%.o:%.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@ 

.PHONY:build
build:all
.PHONY: all
all: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $(TARGET).out



# Removing all created files
.PHONY:clean
clean:
	rm -f $(OBJS) demo.*