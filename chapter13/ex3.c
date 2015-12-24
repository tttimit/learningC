/* ex3.c -- 编程练习3 编写一个文件复制程序，提示用户输入原文件名和输出文件名。
在向输出文件写入时，程序应当使用ctype.h中定义的toupper()函数将所有的文本转换成
大写。使用标准I/O和文本模式 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 81
#define BUFFERLENGTH 1000
int main(void)
{
    char fsrc[MAX];
    char ftar[MAX];
    FILE * fs, * fd;
    char arr[1];
    
    printf("请输入源文件名和目标文件名，以空格隔开：\n");
    while(scanf("%s %s", fsrc, ftar) == 2)
    {
        if((fs = fopen(fsrc, "rb")) == NULL)
        {
            fprintf(stderr, "无法打开文件 %s.\n", fsrc);
            exit(1);
        }
        if((fd = fopen(ftar, "wb")) == NULL)
        {
            fprintf(stderr, "无法打开或者创建目标文件 %s.\n", ftar);
            exit(1);
        }
        while((fread(arr, sizeof(char), 1, fs)) == 1)
        {
            if(islower(arr[0]))
                arr[0] = toupper(arr[0]);
            fwrite(arr, sizeof(char), 1, fd);
        }
        printf("操作完成。\n");
        fclose(fs);
        fclose(fd);
        printf("请输入元文件名和目标文件名，以空格隔开（不按格式输入即退出）：\n");
    }
    printf("程序结束，感谢您的使用！\n");
    
    return 0;
}
