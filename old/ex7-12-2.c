/* ex7-12-2.c -- ��ȡ�ַ�ֱ������#��ʹ�����ӡÿ��������ַ��Լ�
����ʮ����ASCII�롣ÿ�д�ӡ8���ַ�/����ԡ�����ģ��������������
����*/
#include <stdio.h>
int main(void)
{
    char ch;
    char arr[40];
    int i, j;
    
    i=0;
    while((ch = getchar()) != '#')
    {
        arr[i++] = ch;
    }   
    
    for(j=0; j < i; j++)
    {   
        if(j % 8 == 0)
            printf("\n");
        printf("%c:%d  ", arr[j], arr[j]);    
    }
    return 0;
} 
