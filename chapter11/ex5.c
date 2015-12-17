/* ex5.c -- 编写一个函数，2个参数。第一个参数是字符，第二个是字符串指针，若字符
在字符串中，则返回非零值（真），字符不在字符串中则返回0值（假）。 */
#include <stdio.h>
#define MAX 81
int is_within(char, char *);
int get_input(char *, char *);
int main(void)
{
    char ch;
    char str[MAX];
    int result;
    
    while(get_input(&ch, str)!= 0)
    {
        printf("您的输入字符为：%c 字符串为：%s\n", ch, str);
        result = is_within(ch, str);
        if(result != 0)
            printf("该字符存在于字符串中");
        else
            printf("该字符不存在于字符串中");
    }
    
    return 0;
}

int get_input(char * ch, char * str)
{
    printf("请输入要测试的字符（输入空行退出）：\n");
    scanf("%c", ch);
    if(*ch == '\n')
        return 0;
//    while(getchar() == '\n')
//    {
//        printf("读取到了一个换行符！");
//    }
    printf("请再输入要测试的字符串（输入空行退出）：\n");
//    while(getchar() == '\n')
//        continue;
    scanf("%s", str);
    if(*str == '\0')
        return 0;

    return 1;
}


int is_within(char ch, char * str)
{
    char * ptr;
    int result;
    int i;
    
    printf("is_within拿到的ch为%c, str为%s.\n", ch, str);
    ptr = str;
    result = 0;
    i = 0;
    while(*(ptr + i))
    {
        if(*(ptr + i) == ch)
            result = 1;
        i++;
    }
    
    return result;
}
