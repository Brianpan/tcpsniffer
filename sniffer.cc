#include <stdio.h>
#include <net/ethernet.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netpacket/packet.h>
#include <netinet/if_ether.h>  //For ETH_P_ALL
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include <net/if.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <time.h>
#include <sys/time.h>
#include <fstream>

#include <pthread.h>
#include <mutex>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

#include <google/protobuf/message_lite.h>
#include <google/protobuf/util/delimited_message_util.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include "packet.pb.h"

#define TCP_PROTOCOL 6
#define MYSQL_PORT 3306
#define MYSQL_COM_QUERY 0x3
#define MYSQL_PACKET_OFFSET 4
#define MYSQL_OPCODE_OFFSET 1
#define FLUSH_FREQ 10
#define HOST_SOCKET_PORT 1234
#define MAX_BUFFER_SIZE 12288

using namespace std;
using namespace google::protobuf::io;

struct sockaddr_in src, dest;
mutex mtx;

int rawSocket() {
	int sock;
	sock = socket(PF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
	if(sock < 0) {
		printf("create socket error !\n");
		exit(1);
	}

	printf("create socket success !, %d\n", sock);
	return sock;
}

int streamSocket() {
	int sock;
	int sock_setting = 1;
	struct sockaddr_in haddr;
	string hostname = "127.0.0.1";

	sock = socket(AF_INET, SOCK_STREAM, 0);
	if(sock < 0) {
		printf("create socket error !\n");
		exit(1);
	}
	// set socket opts
	if( setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, (char*) &sock_setting, sizeof(int)) == -1 ||
		setsockopt(sock, SOL_SOCKET, SO_KEEPALIVE, (char*) &sock_setting, sizeof(int)) == -1 ) {
		printf("set socketopts error !\n");
		exit(1);
	}

	haddr.sin_family = AF_INET;
	haddr.sin_port = htons(HOST_SOCKET_PORT);
	memset(&(haddr.sin_zero), 0, 8);
	haddr.sin_addr.s_addr = inet_addr(hostname.c_str());

	if( connect( sock, (struct sockaddr*)&haddr, sizeof(haddr)) == -1 ){
		printf("connect socket error %d\n", errno);
		exit(1);
	}

	printf("create stream socket success !, %d\n", sock);
	return sock;
}

// network interface to promisc mode
void setPromisc(char *iface, int *sock) {
	// to configure network interface
	struct ifreq ifr;
	strcpy(ifr.ifr_name, iface);
	ifr.ifr_flags = IFF_UP | IFF_PROMISC | IFF_BROADCAST | IFF_RUNNING;
	// set active flags for the iface
	if(ioctl(*sock, SIOCSIFFLAGS, &ifr) == -1) {
		printf("failed to set the interface !\n");
		exit(1);
	}

	printf("successfully set up the interface !\n");
}

bool checkMySQLQueryPayload(const unsigned char *data, int size) {
	if(size < MYSQL_PACKET_OFFSET)
		return false;

	uint8_t mysql_opcode = *( (uint8_t *) (data+MYSQL_PACKET_OFFSET) );
	if(mysql_opcode != MYSQL_COM_QUERY)
		return false;

	return true;
}

void printPkt(packet::PackPacket pkt) {
	printf("%s ", pkt.timestamp().c_str());
	printf("src ip : %s | ", pkt.src_ip().c_str());
	printf("dest ip : %s \n", pkt.dest_ip().c_str());
	printf("src port : %u | ", pkt.src_port());
	printf("dest port : %u \n", pkt.dest_port());
	printf("seq number : %u | ", pkt.seq());
	printf("ack number : %u \n", pkt.ack_seq());
	printf("payload: ");
	const char *data = pkt.payload().c_str();
	for(unsigned int i=0;i<pkt.payload_size();i++) {
		if(data[i] >= 32 && data[i] <= 128)
			printf("%c", data[i]);
	}
	printf("\n");
}

void *flush_log(void *data) {
	fstream *fs = (fstream*) data;
	while(1) {
		mtx.lock();
		fs->flush();
		mtx.unlock();
		this_thread::sleep_for(chrono::seconds(FLUSH_FREQ));
	}
}

int main(int argc, char **argv) {
	if(argc < 2) {
		printf("please enter iface !\n");
		exit(1);
	}

	int sock, ssock;
	// eth layer
	struct sockaddr saddr;
	int saddr_len = sizeof(saddr);

	unsigned char buf[MAX_BUFFER_SIZE];
	memset(buf, 0, MAX_BUFFER_SIZE);

	sock = rawSocket();
	setPromisc(argv[1], &sock);

	ssock = streamSocket();
	int bytecount;
	int recv_bytes;

	// Network layers' header
	struct iphdr *iph;
	struct tcphdr *tcph;

	unsigned short iph_len;
	unsigned short ip_header_size;
	unsigned short tcp_header_size;
	
	// time utils
	char time_buf[32];
	memset(time_buf, 0, 32);
	char curtime[36];
	memset(curtime, 0, 36);

	string LOG_FILE = "packet.log";
	fstream fs(LOG_FILE, ios::out);

	// flush thread
	pthread_t flush_thread;
	int t1 = pthread_create( &flush_thread, NULL, flush_log, (void *) &fs);
	printf("start sniffering \n");

	// loop for fetching packets
	while(1) {
		recv_bytes = recvfrom(sock, buf, MAX_BUFFER_SIZE, 0, &saddr, (socklen_t*) &saddr_len);
		if(recv_bytes > 0) {
			// start getting info from IP layer
			iph = (struct iphdr *)(buf + sizeof(struct ethhdr));
			// check if is TCP Protocol or not
			if(iph->protocol != TCP_PROTOCOL)
				continue;

			// get ip header word to bytes
			iph_len = iph->ihl*4;
			ip_header_size = sizeof(struct ethhdr)+iph_len;
			
			tcph = (struct tcphdr*)(buf+ip_header_size);
			tcp_header_size = ip_header_size + tcph->doff*4;

			// dest port not 3306
			if(ntohs(tcph->dest) != MYSQL_PORT && ntohs(tcph->source) != MYSQL_PORT)
				continue;

			// get src, dest ip address
			memset(&src, 0, sizeof(src));
			memset(&dest, 0, sizeof(dest));

			src.sin_addr.s_addr = iph->saddr;
			dest.sin_addr.s_addr = iph->daddr;

			// setup protobuf object
			timeval curTime;
			gettimeofday(&curTime, NULL);
			int milli = curTime.tv_usec / 1000;
			strftime(time_buf, 32, "%Y-%m-%dT%H:%M:%S", localtime(&curTime.tv_sec));
			sprintf(curtime, "%s.%dZ", time_buf, milli);
			long int timestamp_int = curTime.tv_sec*1000 + milli;

			// pack
			packet::PackPacket pkt;

			pkt.set_timestamp( string(curtime) );
			pkt.set_timestamp_int(timestamp_int);
			pkt.set_src_ip( inet_ntoa(src.sin_addr) );
			pkt.set_dest_ip( inet_ntoa(dest.sin_addr) );
			pkt.set_src_port( ntohs(tcph->source) );
			pkt.set_dest_port( ntohs(tcph->dest) );
			
			// add payload size to match 0ack seq
			pkt.set_seq( ntohl(tcph->seq) + (recv_bytes - tcp_header_size) );
			pkt.set_ack_seq( ntohl(tcph->ack_seq) );

			// check 
			if( checkMySQLQueryPayload(buf+tcp_header_size, recv_bytes - tcp_header_size) ) {
				pkt.set_payload( buf+tcp_header_size, recv_bytes - tcp_header_size );
				pkt.set_is_query(true);
			}
			else
				pkt.set_payload( "resp" );
				// pkt.set_payload(buf+tcp_header_size, recv_bytes - tcp_header_size);

			pkt.set_payload_size( pkt.payload().length() );

			printPkt(pkt);

			// write to log
			mtx.lock();
			if( !google::protobuf::util::SerializeDelimitedToOstream(pkt, &fs) ) {
				google::protobuf::ShutdownProtobufLibrary();
				printf("log packet went wrong !\n");
				exit(1);
			}
			// write to parse socket
			int siz = pkt.ByteSize()+4;
			char output_buf[siz];
			printf("payload_size: %d\n", pkt.ByteSize());

			// create output stream
			google::protobuf::io::ArrayOutputStream aos(output_buf,siz);
			CodedOutputStream *coded_output = new CodedOutputStream(&aos);
			// wirte pkt size at first
			coded_output->WriteVarint32(pkt.ByteSize());
			// write pkt to coded_output
			pkt.SerializeToCodedStream(coded_output);

			if( (bytecount=send(ssock, (void *) output_buf, siz, 0))== -1 )
				printf("sending data error %d\n", errno);

			mtx.unlock();
		}
	}

	fs.close();
	close(sock);
	close(ssock);
	google::protobuf::ShutdownProtobufLibrary();
	return 0;
}