/* put1.c -- 不添加换行符打印一个字符串 */
#include <stdio.h>
void put1(const char * string)
{
    while(*string != '\0')
        putchar(*string++);
}
