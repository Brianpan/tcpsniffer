
CC = g++
CFLAGS = -Wall
all: sniffer

sniffer: sniffer.c
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf sniffer
