/* ex8.c -- ��дһ��������ʹ�����ַ������� */
#include <stdio.h>
#include <string.h>
#define MAX 81
char * reverse_str(char *);
int get_input(char *);
int main(void)
{
    char *ptr;
    char str[MAX];

    while(get_input(str) == 1)
    {
        ptr = reverse_str(str);
        printf("ԭ�ַ���Ϊ��");
        puts(str);
        printf("���Ϊ��");
        puts(ptr);
    }
    
    return 0;
}

int get_input(char * str)
{
    printf("������Ҫת�����ַ�������������˳�����\n");
    gets(str);
    if(*str == '\0')
        return 0;
    return 1;
}

char * reverse_str(char * str)
{
    char * ptr;
    char tmp;
    int i;
    
    ptr = str;
    for(i=0; i < strlen(str) / 2; i++)
    {
        tmp = *(ptr + i);
        *(ptr + i) = * (ptr + (strlen(str) - 1) - i);
        * (ptr + (strlen(str) - 1) - i) = tmp;
    }
    
    return ptr;
}
