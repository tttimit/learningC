/* ex11.c -- 编写一个程序，接受两个命令行参数。第一个参数为一个字符串；第二个为
文件名。程序打印文件中包含该字符串的所有行。因为这一任务是面向行而不是面向字符的，
所以要使用fgets()而不是getc()。使用标准C库函数strstr()在每一行中搜索这个字符串。*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256
int main(int argc, char *argv[])
{
    FILE * fptr;
    char str[MAX];
    
    if(argc != 3)
    {
        fprintf(stderr, "Usage: %s \"string\" \"filename\".\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fptr = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Sorry, Can't open the file \"%s\".\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while(fgets(str, MAX, fptr) != NULL)
    {
        if(strstr(str, argv[1]) != NULL)
        {
            fputs(str, stdout);
        }
    }
    printf("----------\nDone. Thanks for using.\n");
    
    exit(EXIT_SUCCESS);
}
