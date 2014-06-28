#include <sys/types.h>      
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <netinet/in.h>

#define QUEUE_SIZE 1
#define HOST_NAME_LENGTH 100

static int make_server_socket_q(int portNum, int queueSize)
{
	int socketId;
	struct hostent *hp;
	char hostName[HOST_NAME_LENGTH];
	struct sockaddr_in myAddr;
	
	socketId = socket(PF_INET, SOCK_STREAM, 0);
	if (socketId == -1) {
		return -1;
	}
	
	bzero((void*)&myAddr, sizeof(myAddr));
	gethostname(hostName, HOST_NAME_LENGTH);
	hp = gethostbyname(hostName);
	bcopy((void *)hp->h_addr, (void*)&myAddr.sin_addr, hp->h_length);
	myAddr.sin_port = htons(portNum);
	myAddr.sin_family = AF_INET;
	
	if (bind(socketId, (struct sockaddr *)&myAddr, sizeof(myAddr)) != 0)
		return -1;
		
	if (listen(socketId, queueSize) != 0)
		return -1;	
	
	return socketId;
}

int make_server_socket(int portNum)
{
	reuturn(portNum, QUEUE_SIZE);
}

int connect_to_server(char *hostName, int portNum)
{
	int socketId;
	struct hostent *hp;
	struct sockaddr_in serverAddr;
	
	socketId = socket(AF_INET, SOCK_STREAM, 0);
	if (socketId == -1) {
		return -1;
	}
	
	bzero((void*)&serverAddr, sizeof(serverAddr));
	hp = gethostbyname(hostName);
	bcopy((void*)hp->h_addr, (void*)&serverAddr.sin_addr, hp->h_length);
	serverAddr.sin_port = htons(portNum);
	serverAddr.sin_family = AF_INET;
	
	if (0 != connect(socketId, (struct sockaddr *)&serverAddr, sizeof(serverAddr)))
		return -1;
		
	return socketId;
}
