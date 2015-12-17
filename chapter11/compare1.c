/* compare1.c -- ʹ��ctype.h�еĺ�����д�ú�����ʹ�ò����û������д����Сд
�����������õ���� */
#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define MAX 40
int strcmp1(char *, char *);
int main(void)
{
    char try[MAX];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    while(strcmp1(try, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        gets(try);
    }
    puts("That's right!");

    return 0;
}

int strcmp1(char * str1, char * str2)
{
    //printf("enter function strcmp1()");
    for(; *str1 != '\0' || *str2 != '\0'; str1++, str2++)
    {
        //printf("now *str1=%c, *str2=%c.\n", *str1, *str2);
        if(toupper(*str1) < toupper(*str2))
            return -1;
        else if(toupper(*str1) > toupper(*str2))
            return 1;
    }
    
    return 0;
}
