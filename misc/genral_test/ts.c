#include <stdio.h>

int main(void)
{
	char c;
	unsigned char uc;
	unsigned int ui;
	int i ;
	printf("Size of char is: %ld %ld %ld %ld\n", 
			sizeof(c), sizeof(uc), sizeof(ui),sizeof(i));
	uc = 0xff;
	for (int a = 0; a < 8; a++)
	{
	uc <<= 1;
	printf("%x\n", uc);
	}

	uc = 0xff;
	for (int a = 0; a < 8; a++)
	{
	uc >>= 1;
	printf("%x\n", uc);
	}

	return 0;
}
