#include <stddef.h>
#include "moonlib.h"

char *find_char(char const *source, char const *chars)
{
    char const *chs = NULL;

   do {
       chs = chars;
       do {
           if (*source == *chs) {
               return (char*)(source);
           }
       }while(*chs++);
   } while(*source++);

   return NULL;
}

