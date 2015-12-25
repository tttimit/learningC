/* ex11.c -- ��дһ�����򣬽������������в�������һ������Ϊһ���ַ������ڶ���Ϊ
�ļ����������ӡ�ļ��а������ַ����������С���Ϊ��һ�����������ж����������ַ��ģ�
����Ҫʹ��fgets()������getc()��ʹ�ñ�׼C�⺯��strstr()��ÿһ������������ַ�����*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256
int main(int argc, char *argv[])
{
    FILE * fptr;
    char str[MAX];
    
    if(argc != 3)
    {
        fprintf(stderr, "Usage: %s \"string\" \"filename\".\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fptr = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Sorry, Can't open the file \"%s\".\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while(fgets(str, MAX, fptr) != NULL)
    {
        if(strstr(str, argv[1]) != NULL)
        {
            fputs(str, stdout);
        }
    }
    printf("----------\nDone. Thanks for using.\n");
    
    exit(EXIT_SUCCESS);
}
