/* ex7.c -- 编写一个函数string_in()接收2个字符串指针作为参数，如果第二个字符串被
包含在第一个字符串中，则返回被包含的字符串开始的地址，否则返回空指针 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 81
char *string_in(char *, char *);
int get_input(char *, char *);
int main(void)
{
    char str1[MAX];
    char str2[MAX];
    char * ptr;

    while(get_input(str1, str2) == 1)
    {
        printf("您输入的两个字符串为：%s, %s\n", str1, str2);
        ptr = string_in(str1, str2);
        if(ptr == NULL)
            printf("第二个字符串不在第一个字符串中\n");
        else
            printf("第二个字符串存在于第一个中\n原字符串地址为%p,"
                    "目标地址为%p\n", str1,ptr);
    }
    
    return 0;
}

int get_input(char *str1, char *str2)
{
    printf("请输入第一个字符串（输入空行退出程序）：\n");
    gets(str1);
    if(*str1 == '\0')
        return 0;
    printf("请输入第二个字符串（输入空行退出程序）：\n");
    gets(str2);
    if(*str2 == '\0')
        return 0;
    printf("您输入的两个字符串分别为%s,%s\n", str1, str2);
    return 1;
}

char * string_in(char *str1, char *str2)
{
    int i, j;
    int count;
    bool matched;
    char * ptr;

    i=0;
    j=0;
    ptr = str1;
    matched = false;
    count = strlen(str2);
    while(*ptr++)
    {
        if(*(str1 + i) == *(str2 + j))
        {
            if(matched)
            {
                count--;
                if(count == 0)
                    return ptr - strlen(str2);
            }
            else
            {
                matched = true;
                count--;
            }
            j++;
        }
        else
        {
            if(matched)
            {
                count = strlen(str2);
                matched = false;
                j=0;
            }
        }
        i++;
    }
    return NULL;
}
