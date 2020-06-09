#include <stdio.h>
#include "2_8_1.h"

int main( void )
{
	printf("the orinal number is: %d %d %d\n", 10, 0, -10);
	printf("increment: %d %d %d\n", increment(10), increment(0),increment(-10));
	printf("negate: %d %d %d\n", negate(10), negate(0), negate(-10));
	return 0;
}
