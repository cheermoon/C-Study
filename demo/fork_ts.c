#include <stdio.h>
#include <unistd.h>
/*
void main(void)
{
	printf("I will generate a child process\n");

	if (fork() == 0) {
		printf("I'm the generated process\nmy pid = %d\nmy ppid = %d\n", 
				getpid(), getppid());
		sleep(10);
		printf("child\n");
	} else {
		printf("I'm the parent process\nmy pid = %d\nmy ppid = %d\n",
				getpid(), getppid());
		sleep(10);
		printf("parent\n");
	}
}
*/
/*
void child_code(void)
{
	printf("In Child\n");
	sleep(1);
	printf("Leave Child\n");
}

void parent_code()
{
	wait();
	printf("In Parent\n");
	printf("Leave Parent\n");
}

void main(void)
{
	printf("Fork Test:\n");

	if (fork() == 0) {
		child_code();
	} else {
		parent_code();
	}
}
*/

void main(void)
{
	printf("pid = %d\n", getpid());
	fork();
	wait();
	fork();
	wait();
	fork();
	wait();
	printf("pid = %d ppid = %d\n", getpid(), getppid());
}
