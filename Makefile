CC = g++
CFLAGS = -Wall -std=c++11 -pthread -I/usr/local/include -L/usr/local/lib -lprotobuf -pthread
all: sniffer

sniffer: sniffer.cc packet.pb.cc
	$(CC) $^ $(CFLAGS)  -o $@
reader: socket_reader.cc pocket.pb.cc
	$(CC) $^ $(CFLAGS) -O $@
clean:
	rm -rf sniffer
