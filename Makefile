
CC = g++
CFLAGS = -Wall -std=c++11 -pthread -I/usr/local/include -L/usr/local/lib -lprotobuf -pthread
all: sniffer

sniffer: sniffer.cc packet.pb.cc
	$(CC) sniffer.cc packet.pb.cc $(CFLAGS)  -o $@

clean:
	rm -rf sniffer
