/* ex1.c --�����ϰ1 �޸�13.1�ĳ���ʹ�䲻���������в��������������û������ļ�
���������û�����Ӧ */
/* 13.1
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    int ch;
    FILE * fp;
    long count = 0;
    
    if(argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(1);
    }
    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %ld characters\n", argv[1], count);
    return 0;
}  */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(void)
{
    char filename[MAX];
    FILE * fp;
    long int count = 0;
    char ch;
    
    printf("Enter the name of the file you want to use:\n");
    scanf("%s", filename);
    if((fp = fopen(filename, "r")) == NULL)
    {
        printf("Cannot open file %s.\n", filename);
        exit(1);
    }
    while((ch = getc(fp)) != EOF)//getc(FILE *)���ļ�ָ���ж�ȡ��һ���ַ�����
                                    //����λ��ָʾ������һ��λ��
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %ld characters.\n", filename, count);

    return 0;
}
