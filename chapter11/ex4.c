/* ex4.c -- ��дһ������������2���ַ��������صڶ����ַ����ڵ�һ���ַ����еĵ�ַ */
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
    printf("ԭ�������ַΪ��%p\n", str1);
    printf("���Ϊ��%p.\n", result);
    
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
