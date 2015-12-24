/* ex5.c -- ��ϰ5 �޸ĳ����嵥13.6�еĳ���ʹ�������в����������ǽ���ʽ���棩
����ļ��� 
���� �����嵥13.6 -- �Ѷ���ļ�������׷�ӵ�һ���ļ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024
#define SLEN 81
void append(FILE *source, FILE *dest);

int main(void)
{
    FILE * fa, * fs;
    int files = 0;
    char file_app[SLEN];
    char file_src[SLEN];
    puts("Enter name of destination file: ");
    gets(file_app);
    if((fa = fopen(file_app, "a")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_app);
        exit(3);
    }
    if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(3);
    }
    puts("Enter name of first source file (empty line to quie): ");
    while(gets(file_src) && file_src[0] != '\0')
    {
        if(strcmp(file_src, file_app) == 0)
            fputs("Can't append file to itself\n", stderr);
        else if((fs = fopen(file_src, "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", file_src);
        else
        {
            if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if(ferror(fs) != 0)
                fprintf(stderr, "Error in reading file %s.\n", file_src);
            if(ferror(fa) != 0)
                fprintf(stderr, "Error in writing file %s.'n", file_app);
            fclose(fs);
            files++;
            printf("File %s appended.\n", file_src);
            puts("Next file(empty line to quit):");
        }
    }
    printf("Done. %d files appended.\n", files);
    fclose(fa);
    return 0;
}

void append(FILE * source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];
    
    while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}  */

#include <stdio.h>
#include <stdlib.h>
#define MAX 512
int main(int argc, char * argv[])
{
    FILE *fdest, *fapp; //fd����Ŀ���ļ���fa����ÿ����ӵ��ļ�
    int index;
    char str[MAX];
    int count = 0;
    size_t bytes;
    
    if(argc < 3)
    {
        fprintf(stderr, "ʹ��ʾ����%s Ŀ���ļ��� Ҫ���ӵ��ļ���1"
                        " Ҫ���ӵ��ļ���2 ...\n", argv[0]);
        exit(1);
    }
    if((fdest = fopen(argv[1], "ab")) == NULL)
    {
        fprintf(stderr, "Ŀ���ļ��޷��򿪣������ļ�����\n");
        exit(1);
    }
    for(index = 2; index < argc; index++)
    {
        if((fapp = fopen(argv[index], "rb")) == NULL)
        {
            fprintf(stderr, "�޷����ļ�: %s\n", argv[index]);
            continue;
        }
        while((bytes = fread(str, sizeof(char), MAX, fapp)) > 0)
        {
            fwrite(str, sizeof(char), bytes, fdest);
        }
        fclose(fapp);
        count++;
    }
    fclose(fdest);
    fprintf(stdout, "%d files appended. Thanks for using.\n", count);
    
    return 0;
}



