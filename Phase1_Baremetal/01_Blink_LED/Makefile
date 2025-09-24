TARGET = blink_led
CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb -O0 -g
LDFLAGS = -T stm32f4.ld

SRC = main.c
OBJ = $(SRC:.c=.o)

all: $(TARGET).elf

$(TARGET).elf: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o *.elf
