/* ex12.c -- ��Ŀ�Ƚϸ��ӣ�����˵���ǣ�����һ��20*30�ĵ������ַ���0-9������
����һ���ļ�������һ��������Զ�������ļ�����ÿһ�����Ŵ���һ�����֣�����Ӧ��
�����÷��Ŵ�ӡ����������һ��ͼƬ�� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 81
void create(FILE *);      //����һ���ļ���������20*30�ĵ������ַ����󲢱�����ļ�

int main(void)
{
    char fname1[MAX], fname2[MAX];
    char *ptr2;
    FILE * fsrc, * fimg;
    int ch;
    
    printf("please choose a name for the file: ");
    scanf("%s", fname1);
    if((fsrc = fopen(fname1, "w+")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot open or create the file \"%s\".\n", fname1);
        exit(EXIT_FAILURE);
    }
    create(fsrc);       //����ļ�д��������ɵ�����
    rewind(fsrc);
    ptr2 = strcpy(fname2, fname1);
    ptr2 = strcat(fname2, ".blue");
    if((fimg = fopen(fname2, "w+")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot create the img filr for \"%s\".\n", fname1);
        exit(EXIT_FAILURE);
    }
    while(fscanf(fsrc, "%c ", &ch) == 1)
    {
        if(ch == '\n')
            fputc('\n', fimg);
        else
        {
            fprintf(fimg, "%c ", ch - 16);
            fprintf(stdout, "%c ", ch - 16);
        }
    }
    fclose(fsrc);
    fclose(fimg);
    printf("Done. Thanks for using!\n");

    return 0;
}

void create(FILE * fptr)
{
    int linenum, count;
    
    for(linenum = 0; linenum < 20; linenum++)
    {
        for(count = 0; count <= 30; count++)
        {
            if(count != 30)
                fprintf(fptr, "%c ", rand() % 10 + 48);
            else
                fprintf(fptr, "\n");
        }
    }
}
