#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int pid;
	int fd;

	if ((pid = fork()) == -1) {
		perror("fork");
		exit(1);
	} else if (pid == 0) {
		close(1);
		fd = creat("ll.txt", 0644);
		execlp("ls", "ls", "-alF", NULL);
		perror("execlp");
		exit(1);
	} else {
		wait(0);
		printf("finish parent\n");
		return 0;
	}
}
