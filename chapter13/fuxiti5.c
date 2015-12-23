/* fuxiti5.c -- ��дһ�γ������������������в�������һ����һ���ַ����ڶ�����
�ļ�����Ҫ�����ֻ��ӡ�ļ��а��������ַ�����Щ�С� */
#include <stdio.h>  //Ϊfprintf�����ṩԭ��
#include <stdlib.h> //Ϊexit�����ṩԭ��.
#include <string.h> //Ϊstrchr�����ṩԭ��
_Bool isgood(char *);   //�жϸ��ַ����Ƿ�ֻ��һ���ַ�
#define MAXLENGTH 256
int main(int argc, char * argv[])
{
    FILE * fp;
    char str[MAXLENGTH];
    char * pta;
    
    if(argc > 3)
    {
        fprintf(stderr, "Too many arguments.\n");
        exit(2);
    }
    else if(!isgood(argv[1]))
    {
        fprintf(stderr, "The first argument must and only be an character.\n");
        exit(1);
    }
    else if((fp = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Cannot open the file %s.\n", argv[2]);
        exit(3);
    }
    printf("All good, start to go!\n");
    while((pta = fgets(str, MAXLENGTH, fp)) != NULL)
    {
//        printf("check a new line.\n");
        if(strchr(pta, *argv[1]) != NULL)
        {
//            printf("got a new line!\n");
            fputs(pta, stdout);
        }
    }
    return 0;
}

_Bool isgood(char * str)
{
    int count = 0;
    int i = 0;
    
    while(str[i++] != '\0')
    {
        count++;
    }
    
    if(count>1)
        return 0;
    else
        return 1;
    
}
