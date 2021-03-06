/* reverse.c -- 反序显式一个文件  */
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'   //DOS文本文件中文件结束的标记
#define SLEN 50
int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;
    
    puts("Enter the name of the file to be processed: ");
    gets(file);
    if((fp = fopen(file, "rb")) == NULL)    //只读二进制模式
    {
        printf("reverse can't open %s\n", file);
        exit(1);
    }
    fseek(fp, 0L, SEEK_END);    //移动到文件末尾
    last = ftell(fp);
    for(count = 1L; count <= last;count++)
    {
        fseek(fp, -count, SEEK_END);    //回退
        ch = getc(fp);
        if(ch != CNTL_Z && ch != '\r')  //针对DOS，UNIX下也可以工作
            putchar(ch);
        //if(ch == '\r')  //针对Macintosh系统
          //  putchar('\n')
    }
    putchar('\n');
    fclose(fp);
    return 0;
}
