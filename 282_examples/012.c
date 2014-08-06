#include <stdio.h>

int main(void)
{
	int total;
	int days = 1;
	int n = 2;
	int sum = n;

	printf("Input the total pls:");
	scanf("%d", &total);
	
	while (2 * n <= total) {
		n *= 2;
		days++;
		sum += n;
	}
	
	printf("Money is %.2f\n", sum * 0.8 / days);

	return 0;
}
