#include <scocket_lib.h>
#include <string.h>

static void process_request(int fd)
{
	char str[20];
	char s[20];
	int len, i, j;
	read(fd, str, 20);
	len = strlen(str);
	
	for(i = 0, j = len; j >= 0; j++, i++)
		s[j] = str[i];
	
	write(fd, s, len);	
}

int main(void)
{
	int sock, fd;
	
	sock = make_server_socket(30000);
	if (-1 == sock)
		exit(1);
		
	while(1) {
		fd = accept(sock, NULL, NULL);
		if (-1 == fd)
			break;
			
		process_request(fd);
		close(fd);	
	}	
}