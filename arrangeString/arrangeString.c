#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 30


int main(void)
{
	int input[MAX_LENGTH],output[MAX_LENGTH];
	int i = 0;

	printf("Input %d chars please:\n",MAX_LENGTH);
	while(i != MAX_LENGTH)
	{
		input[i]=getchar();
		if(input[i] == '\n')
		{
			break;
		}
		i++;
	}
	if (i == MAX_LENGTH)
	{
		input[MAX_LENGTH-1] = '\n';	
		printf("Your input is full\n");
	}

	i = 0;
	while(i != MAX_LENGTH && putchar(input[i]) != '\n')
		i++;
	return 0;
}
