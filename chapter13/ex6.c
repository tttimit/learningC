/* ex6.c -- 编程练习6 重写程序清单13.2中的程序，不使用命令行参数，而提示用户输入
附： 程序清单13.2 -- 把一个文件压缩为原来的三分之一
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
    
    printf("请输入待压缩的文件名：\n");
    scanf("%s", fsrc);
    if((fin = fopen(fsrc, "r")) == NULL)
    {
        fprintf(stderr, "无法打开文件 \"%s\".\n", fsrc);
        exit(EXIT_FAILURE);
    }
    printf("请输入压缩后的文件的文件名：\n");
    scanf("%s", fdes);
    if((fout = fopen(fdes, "w")) == NULL)
    {
        fprintf(stderr, "无法创建文件：\"%s\\n.", fdes);
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


