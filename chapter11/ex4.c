/* ex4.c -- 编写一个函数，接收2个字符串，返回第二个字符串在第一个字符串中的地址 */
#include <stdio.h>
#include <string.h>
#define MAX 81
char * strloc(char *, char *);
int main(void)
{
    char str1[] = "abcdefghijdl";
    char str2[] = "ijd";
    char * result;
    
    result = strloc(str1, str2);
    printf("原有数组地址为：%p\n", str1);
    printf("结果为：%p.\n", result);
    
    return 0;
}

char * strloc(char * str1, char * str2)
{
    int i, j;
    char * ptr;
    
    i = 0;
    j = 0;
    ptr = str1;
    while(*ptr++)
    {
//        printf("str1:%c str2:%c\n", *ptr++, *str2++);
        while(*(ptr+i) == *(str2+j))
        {
            if(j == strlen(str2) - 1)
            {
                return ptr;
            }
            i++;
            j++;
        }
        j = 0;
    }
}
