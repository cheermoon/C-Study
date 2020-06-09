#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[500], tempChar;
	unsigned int wordsNum, linesNum, charsNum;
	unsigned int i;

	wordsNum = 1;
	linesNum = 1;
	charsNum = 0;
	i = 0;
	
	printf("Input your chars please:\n");

	while((tempChar = getchar()) != EOF)
	{
		c[i] = tempChar;
		i++;
		switch(tempChar)
		{
			case'\n': linesNum++;
			case ' ': wordsNum++;
						break;
			default : charsNum++; 			
		}
	

		if (i == 20) 
		{
			printf("your char array is full\n");
			c[i] = '\0';
			printf("%s \n", c);
			break;
		}
	}

	printf("Your've input %d chars.\n", charsNum);
	printf("Your've input %d words.\n", wordsNum);
	printf("Your've input %d lines.\n", linesNum);
	
	return 0;
}
