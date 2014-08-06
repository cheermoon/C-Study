#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z = 1;
	int i;

	printf("Input two number pls[x^y]:");
	scanf("%d%d", &x, &y);

	/*calculate x^y's last 3 number*/
	for (i = 1; i <= y; i++)
		z = z * x % 1000;

	printf("%d|%d|%d\n", z/100, (z % 100) / 10, z%10);

	return 0;
}
