#include <stdio.h>
#include <net/ethernet.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <string.h>
#include <net/if.h>
#include <netpacket/packet.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <pcap/pcap.h>

#define TCP_PROTOCOL 6
#define MYSQL_PORT 3306
#define MYSQL_COM_QUERY 0x3
struct sockaddr_in src, dest;

int rawSocket() {
	int sock;
	sock = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
	if(sock < 0) {
		printf("create socket error !");
		exit(1);
	}

	return sock;
}

int setPromisc(char *iface, int *sock) {
	// to configure network interface
	struct ifreq ifr;
	strcpy(ifr.ifr_name, iface);
	ifr.ifr_flags = IFF_UP | IFF_PROMISC | IFF_BROADCAST | IFF_RUNNING;
	// set active flags for the iface
	if(ioctl(*sock, SIOCSIFFLAGS, &ifr) == -1) {
		printf("failed to set the interface !");
		exit(1);
	}

	printf("successfully set up the interface !");
}

void processPayload(char *data, int size) {
	int sql_packet_off = 4;
	if(size < 4)
		return;

	uint8_t mysql_opcode = (uint8_t *) (buf+sql_packet_off);
	if(mysql_opcode == MYSQL_COM_QUERY) {
		int off = sql_packet_off + 1;
		for(int i=off;i<size;i++) {
			if(data[i] >= 32 && data[i] <= 128)
				printf("%c", data[i]);
			else
				printf(".");
		}
	}
}

int main(int argc, char **argv) {
	if(argc < 2) {
		printf("please enter iface !");
		exit(1);
	}

	int sock;
	// eth layer
	struct sockaddr saddr;
	int saddr_len = sizeof(saddr);

	int buf_size = 16382;
	unsigned char *buf = (unsigned char *) malloc(buf_size);
	memset(buf, 0, buf_size);

	sock = rawSocket();
	setPromisc(argv[1], &sock);

	// Network layers' header
	struct iphdr *iph;
	struct tcphdr *tcph;

	unsigned short iph_len;
	unsigned short ip_header_size;
	unsigned short tcp_header_size;

	// loop for fetching packets
	while(1) {
		int recv_bytes = recvfrom(sock, buf, buf_size, &saddr, (socketlen_t *) &saddr_len);

		if(recv_bytes > 0) {
			// start getting info from IP layer
			iph = (struct iphdr *)(buf + sizeof(struct ethhdr));
			// check if is TCP Protocol or not
			if(iph->protocol != TCP_PROTOCOL)
				continue;

			// get ip header word to bytes
			iph_len = iph->ihl*4;
			ip_header_size = buf+sizeof(struct ethhdr)+iph_len;
			
			tcph = (struct tcphdr*)(ip_header_size);
			tcp_header_size = ip_header_size + tcph->doff*4;
			
			// dest port not 3306
			if(ntohs(tcph->dest) != MYSQL_PORT)
				continue;

			// get src, dest ip address
			memset(&src, 0, sizeof(src));
			memset(&dest, 0, sizeof(dest));

			src.sin_addr.s_addr = ip->saddr;
			dest.sin_addr.s_addr = ip->daddr;

			printf("src ip : %s \n", inet_ntoa(src.sin_addr));
			printf("dest ip : %s \n", inet_ntoa(dest.sin_addr));

			// process payload
			processPayload(buf + tcp_header_size, recv_bytes - tcp_header_size);
		}
	}
}