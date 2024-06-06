ARCH = arm64
CC = 
TARGET = 
FLAGS =
TARGET = demo.out

OS:= $(shell uname)

ifeq ($(ARCH),arm64)
	CC = gcc
	FLAGS = -std=c99 \
			-Wall
	
else ifeq ($(ARCH),cortex)
	CC = arm-none-eabi-gcc
	FLAGS = -std=c89 \
			-mcpu=cortex-m0plus \
			-mthumb \
			--specs=nosys.specs 
endif


SRC =  main.c \
		memory.c

# The pattern substitution $(SRCS:.c=.o) means "for each file in SRCS, replace the .c extension with .o".
OBJS :=$(SRC:.c=.o) 

%.o:%.c
	$(CC) -c $< $(FLAGS) -o $@
.PHONY: all
all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $@

# app: memory.o
# 	gcc -o main.out main.c memory.o $(FLAGS)

# main.o:
# 	CC -c -o main.o main.c

# dep: 
# 	CC -c -o memory.o memory.c

.PHONY:clean
clean:
	rm -f $(OBJS) $(TARGET)

