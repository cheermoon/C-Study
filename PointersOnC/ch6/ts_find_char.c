#include <stddef.h>
#include <stdio.h>
#include "moonlib.h"

void main(void)
{
    char source[10], chars[10];
    char *ch = NULL;

    printf("Input the source strings please:\n");
    scanf("%s", source);

    printf("Input the chars please:\n");
    scanf("%s", chars);

    ch = find_char(source, chars);

    if (*ch) {
        printf("The character is %c \n", *ch);
    } else {
        printf("I cann't find the character!\n");
    }

}