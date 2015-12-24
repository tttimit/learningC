/* ex4.c -- �����ϰ4 ��дһ�γ�����������Ļ����ʾ���������г���ȫ���ļ���ʹ��
argc����ѭ�� */
#include <stdio.h>
#include <stdlib.h>
#define MAX 256
int main(int argc, char * argv[])
{
    int i;
    FILE * fp;
    char str[MAX];
    char * ptr;

    if(argc == 1)
    {
        fprintf(stdout, "ʹ��ʾ����%s �ļ���1 �ļ���2 ...\n", argv[0]);
        exit(1);
    }
    for(i = 1; i >= 1 && i < argc; i++)
    {
        if((fp = fopen(argv[i], "r")) != NULL)
        {
            fprintf(stdout, "open file %s: \n", argv[i]);
            while((ptr = fgets(str, MAX, fp)) != NULL)
            {
                fputs(ptr, stdout);
            }
            fclose(fp);
            putchar('\n');
            puts("------------------------");
        }
        else
        {
            printf("�޷����ļ���Ϊ%s���ļ���\n", argv[i]);
        }
    }

    fprintf(stdout, "��ȡ��������лʹ�ã�\n");
}
