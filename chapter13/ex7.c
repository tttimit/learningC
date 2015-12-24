/* ex7.c -- 编程练习7 编写一个打开两个文件的程序。可以使用命令行参数或者请求用户
输入来获得文件名。
a.让程序打印第一个文件的第一行，第二个文件的第二行，第一个文件的第二行，交替打印，
  直到打印完行数较多的文件的最后一行
b.修改程序，把行号相同的行打印到同一行 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256
int main(int argc, char * argv[])
{
    char file1[MAX], file2[MAX];    //保存文件名
    FILE *f1, *f2;
    char line1[MAX], line2[MAX];    //每次读取一行的内容
    char * ptr1, * ptr2;
    
    ptr1 = file1;
    ptr2 = file2;
    if(argc != 1 && argc != 3)
    {
        fprintf(stderr, "使用示例：%s 文件名1 文件名2\n"
                "或者：%s\n", argv[0], argv[0]);
        exit(EXIT_FAILURE);
    }
    if(argc == 1)
    {
        fprintf(stdout, "请输入两个文件的文件名，用空格隔开：\n");
        scanf("%s %s", ptr1, ptr2);
    }
    else if(argc == 3)
    {
        ptr1 = argv[1];
        ptr2 = argv[2];
    }
    
    if((f1 = fopen(ptr1, "r")) == NULL)
    {
        fprintf(stderr, "无法打开文件 \"%s\"\n.", ptr1);
        exit(EXIT_FAILURE);
    }
    if((f2 = fopen(ptr2, "r")) == NULL)
    {
        fprintf(stderr, "无法打开文件 \"%s\"\n.", ptr2);
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
