/* name2.c -- ��ȡһ������ */
#include <stdio.h>
#define MAX 81
int main(void)
{
    char name[MAX];
    char * ptr;
    
    printf("Hi, what's your name?\n");
    ptr = gets(name);
    printf("%s? Ah! %s!\n", name, ptr);
    return 0;
    
    /* ����gets()������ʹ��gets(name)ʱ���Ὣ��ȡ�����ַ����ĵ�ַ��ֵ��name
    ʹ��ptr = gets(name)ʱ����������ֵ��һ��ָ���ȡ�����ַ����ĵ�ַ����Ȼ�Ϳ���
    ��ֵ��ָ���ˡ�*/
}
