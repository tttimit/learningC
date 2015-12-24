/* ex7.c -- �����ϰ7 ��дһ���������ļ��ĳ��򡣿���ʹ�������в������������û�
����������ļ�����
a.�ó����ӡ��һ���ļ��ĵ�һ�У��ڶ����ļ��ĵڶ��У���һ���ļ��ĵڶ��У������ӡ��
  ֱ����ӡ�������϶���ļ������һ��
b.�޸ĳ��򣬰��к���ͬ���д�ӡ��ͬһ�� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256
int main(int argc, char * argv[])
{
    char file1[MAX], file2[MAX];    //�����ļ���
    FILE *f1, *f2;
    char line1[MAX], line2[MAX];    //ÿ�ζ�ȡһ�е�����
    char * ptr1, * ptr2;
    
    ptr1 = file1;
    ptr2 = file2;
    if(argc != 1 && argc != 3)
    {
        fprintf(stderr, "ʹ��ʾ����%s �ļ���1 �ļ���2\n"
                "���ߣ�%s\n", argv[0], argv[0]);
        exit(EXIT_FAILURE);
    }
    if(argc == 1)
    {
        fprintf(stdout, "�����������ļ����ļ������ÿո������\n");
        scanf("%s %s", ptr1, ptr2);
    }
    else if(argc == 3)
    {
        ptr1 = argv[1];
        ptr2 = argv[2];
    }
    
    if((f1 = fopen(ptr1, "r")) == NULL)
    {
        fprintf(stderr, "�޷����ļ� \"%s\"\n.", ptr1);
        exit(EXIT_FAILURE);
    }
    if((f2 = fopen(ptr2, "r")) == NULL)
    {
        fprintf(stderr, "�޷����ļ� \"%s\"\n.", ptr2);
        exit(EXIT_FAILURE);
    }
    ptr1 = fgets(line1, MAX, f1);
    ptr2 = fgets(line2, MAX, f2);
    while(ptr1 != NULL || ptr2 != NULL)
    {
        if(ptr1 != NULL && ptr2 != NULL)
        {
			ptr1[strlen(ptr1)-1] = '\0';
			ptr1 = strcat(ptr1, ptr2);
            fputs(ptr1, stdout);
        }
        else if(ptr2 == NULL)
        {
            fputs(ptr1, stdout);
        }
        else if(ptr1 == NULL)
        {
            fputs(ptr2, stdout);
        }
        
        ptr1 = fgets(line1, MAX, f1);
        ptr2 = fgets(line2, MAX, f2);
    }
    fprintf(stdout, "Done. Thanks for using.\n");
    fclose(f1);
    fclose(f2);

    return 0;
}
