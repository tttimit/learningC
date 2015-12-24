/* ex4.c -- 编程练习4 编写一段程序，依次在屏幕上显示命令行中列出的全部文件。使用
argc控制循环 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 256
int main(int argc, char * argv[])
{
    int i;
    FILE * fp;
    char str[MAX];
    char * ptr;

    if(argc == 1)
    {
        fprintf(stdout, "使用示例：%s 文件名1 文件名2 ...\n", argv[0]);
        exit(1);
    }
    for(i = 1; i >= 1 && i < argc; i++)
    {
        if((fp = fopen(argv[i], "r")) != NULL)
        {
            fprintf(stdout, "open file %s: \n", argv[i]);
            while((ptr = fgets(str, MAX, fp)) != NULL)
            {
                fputs(ptr, stdout);
            }
            fclose(fp);
            putchar('\n');
            puts("------------------------");
        }
        else
        {
            printf("无法打开文件名为%s的文件。\n", argv[i]);
        }
    }

    fprintf(stdout, "读取结束，感谢使用！\n");
}
