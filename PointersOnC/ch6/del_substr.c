#include "moonlib.h"

int del_substr(char *str, char const *subStr)
{
    char *scStr = str;
    char const *sbStr = subStr;

    unsigned int strLength = 0;
    unsigned int subLength = 0;

    /*先测试两个字符串长度 
      如果子串长度大则返回0
    */
    while(*scStr++) {
        strLength++;
    }
    while(*sbStr++) {
        subLength++;
    }
    if (subLength > strLength) {
        return 0;
    }

    /*将指针从新定位到字符串头部*/
    scStr = str;
    sbStr = subStr;

    /*删除子字符串*/
    do {
        if(*scStr == *sbStr) {
            sbStr++;
        } else if ('\0' != *sbStr) {
            sbStr = subStr;
        }else if ('\0' == *sbStr) {
            *(scStr - subLength) = *scStr;
        }
    } while(*scStr++);

    if ('\0' == *sbStr) {
        return 1;
    }

    return 0;
}