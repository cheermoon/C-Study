#include <scocket_lib.h>
#include <string.h>
#include <stdio.h>

static void request(int fd)
{
	char str[20] = "this is a test program";
	int len = strlen(str);
	
	if (write(fd, str, len) != len) {
		perror("write");
	}
	
	read(fd, str, 20);
	len = strlen(str);
	write(1, str, len);
}

int main(void)
{
	int fd;
	
	fd = connect_to_server(conmix, 30000)
	if (-1 == fd)
		exit(1);
	
	printf("Connected!\n");	
	request(fd);
	
	close(fd);	
		
}