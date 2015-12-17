/* ex8.c -- 编写一个函数，使输入字符串反序。 */
#include <stdio.h>
#include <string.h>
#define MAX 81
char * reverse_str(char *);
int get_input(char *);
int main(void)
{
    char *ptr;
    char str[MAX];

    while(get_input(str) == 1)
    {
        ptr = reverse_str(str);
        printf("原字符串为：");
        puts(str);
        printf("结果为：");
        puts(ptr);
    }
    
    return 0;
}

int get_input(char * str)
{
    printf("请输入要转换的字符串（输入空行退出）：\n");
    gets(str);
    if(*str == '\0')
        return 0;
    return 1;
}

char * reverse_str(char * str)
{
    char * ptr;
    char tmp;
    int i;
    
    ptr = str;
    for(i=0; i < strlen(str) / 2; i++)
    {
        tmp = *(ptr + i);
        *(ptr + i) = * (ptr + (strlen(str) - 1) - i);
        * (ptr + (strlen(str) - 1) - i) = tmp;
    }
    
    return ptr;
}
