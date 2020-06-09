#include <stdio.h>

unsigned int fbnc(unsigned int n)
{
	unsigned int F1, F2, R;

	R = F1 =F2 = 1;
	
	while(n-- > 2) {
		F1 = F2;
		F2 = R;
		R = F1 + F2;
	}

	return R;
}

int 
main(void)
{
	for (int i = 1; i <= 20; i++) {
		printf("%d  ", fbnc(i));
	}
	printf("\n");
	return 1;
}
