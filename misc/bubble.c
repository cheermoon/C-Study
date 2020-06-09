#include <stdio.h>
int main(void)
{
	int a[10];
	printf("Input 10 Numbers Please\n");

	for (int i = 0; i != 10; i++)
	{	
		printf("Number %d:", i+1);
		scanf("%d", a+i);
		//a[i]=i+1;	
	}

	//Show the Orinal NUmbers
	printf ("The 10 Number your've Input is:");
	for (int j=0; j < 10; j++) 
	{
		//printf ("%d ", a[j]);
		printf ("%d ", *(a+j));
		//printf ("%d ", *a+j);//a+j attach first 
	}
	printf("\n");

	//Bubble Sorting
	int temp;
	for  (int i = 9 ; i != 0; i--) 
	{
		for (int j = 0 ; j != i; j++) {
			if ( a[j] > a[j+1] )
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("the sorted number is:");
	for (int j=0; j < 10; j++) 
	{
		printf ("%d ", *(a+j));
	}
	printf("\n");
	return 0;
}
