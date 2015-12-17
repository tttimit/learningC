// strlen1.c -- 自己编写一个实现strlen（）功能的函数
#include <stdio.h>
#define MAX 81
int strlen1(char *);
int main(void)
{
    char name[MAX];
    int length;
    
    printf("Enter a string(empty line to quit):\n");
    gets(name);
    while(*name != '\0')
    {
        length = strlen1(name);
        printf("您输入的字符串 %s 长度为 %d.\n", name, length);
        puts("请输入下一个字符串（输入空行退出）：\n");
        gets(name);
    }

    return 0;
}

int strlen1(char * ptr)
{
    int length = 0;
    
    while(*ptr++ != '\0')
    {
        length++;
    }
    return length;
}
