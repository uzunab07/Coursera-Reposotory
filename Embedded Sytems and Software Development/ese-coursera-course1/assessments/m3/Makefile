.PHONY:clean all build
clean:
	rm -f *.o main.map $(Target) 
LINKER_FILE =  msp432p401r.lds

LDFLAGS =  -Wl,-Map=main.map,-T,$(LINKER_FILE)

# compiler
CC = gcc
# compiler flags
CFLAGS = -std=c99
# Other Flags
INCLUDES = -I.
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) -c $(INCLUDES) $< -o $@


Target = demo.out

all: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(Target)