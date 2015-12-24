/* ex6.c -- �����ϰ6 ��д�����嵥13.2�еĳ��򣬲�ʹ�������в���������ʾ�û�����
���� �����嵥13.2 -- ��һ���ļ�ѹ��Ϊԭ��������֮һ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
int main(int argc, char * argv[])
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;
    
    if(argc < 2)
    {
        fprintf(sdterr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(2);
    }
    strcpy(name, argv[1]);
    strcat(name, ".red");
    if((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    while((ch = getc(in)) != EOF)
        if(count++ % 3 == 0)
            putc(ch, out);
    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return 0;
}  */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(void)
{
    char fsrc[MAX], fdes[MAX];
    FILE * fin, * fout;
    int count = 0;
    int ch;
    
    printf("�������ѹ�����ļ�����\n");
    scanf("%s", fsrc);
    if((fin = fopen(fsrc, "r")) == NULL)
    {
        fprintf(stderr, "�޷����ļ� \"%s\".\n", fsrc);
        exit(EXIT_FAILURE);
    }
    printf("������ѹ������ļ����ļ�����\n");
    scanf("%s", fdes);
    if((fout = fopen(fdes, "w")) == NULL)
    {
        fprintf(stderr, "�޷������ļ���\"%s\\n.", fdes);
        exit(EXIT_FAILURE);
    }
    while((ch = fgetc(fin))!= EOF)
    {
        if(count++ % 3 == 0)
            fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    fprintf(stdout, "Done. Thanks for using.\n");
    
    return 0;
}


