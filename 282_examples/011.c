#include <stdio.h>

int main(void)
{
	int nDays;
	int n;
	int i;

	printf("Input how many days pls:");
	scanf("%d", &nDays);

	printf("Input how many remained pls:");
	scanf("%d", &n);

	for (i = 1; i < nDays; i++)
		n = (n + 1) * 2;

	printf("the total is %d \n", n);

	return 0;
}
