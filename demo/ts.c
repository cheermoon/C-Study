#include <stdio.h>

int main(void)
{
	int num;
	do {
		scanf("%d", &num);
		printf("0x%04x\n", num);
	} while(num);

	return 0;
}
