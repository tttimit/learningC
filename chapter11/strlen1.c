// strlen1.c -- �Լ���дһ��ʵ��strlen�������ܵĺ���
#include <stdio.h>
#define MAX 81
int strlen1(char *);
int main(void)
{
    char name[MAX];
    int length;
    
    printf("Enter a string(empty line to quit):\n");
    gets(name);
    while(*name != '\0')
    {
        length = strlen1(name);
        printf("��������ַ��� %s ����Ϊ %d.\n", name, length);
        puts("��������һ���ַ�������������˳�����\n");
        gets(name);
    }

    return 0;
}

int strlen1(char * ptr)
{
    int length = 0;
    
    while(*ptr++ != '\0')
    {
        length++;
    }
    return length;
}
