/* ex6.c -- �Լ�ʵ��strncpy(s1, s2, n)���� */
#include <stdio.h>
#include <string.h>
#define N 10
char * strncpy1(char *, char *, int);
int get_input(char *);
int main(void)
{
    char str1[N];
    char str2[N];
    int n = N;
    char * ptr;
    
    while(get_input(str2) == 1)
    {
        printf("�������Ҫ���Ƶ��ַ���Ϊ��%s\n", str2);
        ptr = strncpy1(str1, str2, n);
        puts(str1);
    }
    
    return 0;
}

int get_input(char *str2)
{
//    int res;
    
    printf("������Ҫ���и��Ƶ��ַ���(��������˳�)��\n");
    gets(str2);
//    res = scanf("%s", str2);
    if(*str2 == '\0')
        return 0;
    return 1;
    
//    if(getchar() == '\n')
//        continue;
//    return 1;
}

char * strncpy1(char *str1, char *str2, int n)
{
    int i;
    int str2len;
    
    str2len = strlen(str2);
    for(i=0; i < (str2len>n?n:str2len); i++)
    {
        *(str1 + i) = *(str2 + i);
    }
    if(str2len < n)
    {
        for(i = str2len ; i < strlen(str1); i++)
        {
            *(str1 + i) = '\0';
        }
    }
//    puts("������ɣ�\n");
    return str1;
}
