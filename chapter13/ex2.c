/* ex2.c -- 编程练习2 编写一个文件复制程序。程序需要从命令行获得源文件名和目的
文件名。尽可能使用标准I/O和二进制模式 */
/*
    目前的问题，没有设置缓冲，每次读取1个字节放到一个长度为1的字符串中，然后从这
    个字符串中拿出来这个字节，写入到文件中，这样速度可能比较慢。或者是本来就有缓
    冲，当关闭文件的时候就会自动刷新并写入文件？
    文件的打开模式是rb和wb，如果不加b的话就不能正常工作。
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE_T 1
int main(int argc, char * argv[])
{
    FILE * fsrc, * fdes;
    char arr[SIZE_T];

    if(argc != 3)
    {
        fprintf(stderr, "Usage: ex2 source_filename dest_filename\n");
        exit(1);
    }
    if((fsrc = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Cannot open source file %s.\n", argv[1]);
        exit(1);
    }
    if((fdes = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Cannot open/create destination file %s.\n", argv[2]);
        exit(1);
    }
    while((fread(arr, sizeof(char), SIZE_T, fsrc)) != 0)
    {
        fwrite(arr, sizeof(char), SIZE_T, fdes);
    }
    fprintf(stdout, "Operation finished.\n");
    fclose(fsrc);
    fclose(fdes);
    return 0;
}
