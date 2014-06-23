#include <stdio.h>
#include "div_str.h"

int main(int argc, char *argv[])
{
	char str[50];
	char **ws;
	int i;
	printf("Input the line pls:");

	fgets(str, 50, stdin);
	ws = div_str(str);

	for (i = 0; ws[i]; i++) {
		printf("%s\n", ws[i]);
	}

	free_list(ws);

	return 0;
}
