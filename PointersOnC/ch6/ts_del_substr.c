#include <stddef.h>
#include <stdio.h>
#include "moonlib.h"

int main(void)
{
    char str[50];
    char delStr[50];
    int rt;

    printf("Input your String please[50]:\n");
    scanf("%s", str);
    //gets(str);

    printf("Input your delete String please[50]:\n");
    scanf("%s", delStr);
    //gets(delStr);

    rt = del_substr(str, delStr);

    printf("The New String is %d :\n", rt);
    printf("%s \n", str);

    return 0;
}
