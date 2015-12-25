/* ex10.c -- ��дһ�����򣬴�һ���ı��ļ����ļ���ͨ��������ʽ��á�����һ��
ѭ���������û�����һ���ļ�λ�á�Ȼ������ӡ�ļ��дӸ�λ�ÿ�ʼ����һ�����з�
֮��Ĳ��֡��û�ͨ������������ַ�����ֹ����ѭ�� */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(void)
{
    char fname[MAX];
    FILE * fp;
    long int start, currentloc;
    int ch;
    
    printf("Please enter the name of file you want to open:\n");
    scanf("%s", fname);
    if((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "Sorry, cannot open the file \"%s\".\n", fname);
        exit(EXIT_FAILURE);
    }
    printf("Please enter the location you want to start:\n");
    while(scanf("%ld", &start) == 1)
    {
        currentloc = 0;
        while((ch = fgetc(fp)) != EOF && ch != '\n')
        {
            currentloc++;
            if(currentloc >= start)
                putchar(ch);
        }
        printf("\nPlease enter the location you want to start (enter a "
                "non-digit to quit):\n");
    }
    printf("Done. Thanks for using. Good bye!\n");
    
    return 0;
}
