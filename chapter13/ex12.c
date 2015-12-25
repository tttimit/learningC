/* ex12.c -- 题目比较复杂，简单来说就是：创建一个20*30的单数字字符（0-9）矩阵。
存入一个文件。创建一个程序可以读入这个文件，用每一个符号代表一个数字，将对应的
矩阵用符号打印出来并存入一个图片。 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 81
void create(FILE *);      //传入一个文件名，创建20*30的单数字字符矩阵并保存该文件

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
    create(fsrc);       //向该文件写入随机生成的数组
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
