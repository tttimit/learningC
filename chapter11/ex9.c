/* ex9.c -- 编写一个函数，对用户输入的字符串去掉空格 */
#include <stdio.h>
#define MAX 81
char * eml_space(char *);
int get_input(char *);
int main(void)
{
    char str[MAX];
    char resstr[MAX];
    
    while(get_input(str) == 1)
    {
        printf("您的原字符串为：%s\n", str);
        
        
        /*这里有一点需要注意的问题，函数中的变量为局部变量，当离开函数的时候就
        没有了意义，如果我们在eml_space函数中做了各种处理，返回了一个局部变量
        的地址，从外部来看，是没有意义的。可能理解的不对*/
//        eml_space(str, resstr);
        printf("除去空格后的字符串为：%s\n", eml_space(str));
    }
    
    return 0;
}

int get_input(char * str)
{
    printf("请输入要进行操作的字符串（输入空行以退出）：\n");
    gets(str);
    if(*str == '\0')
        return 0;
    return 1;
}

//char * eml_space(char * str, char * resstr)
char * eml_space(char * str)
{
    char str1[MAX];
    char * ptr;
    
    ptr = str1;
    while(*str)
    {
        if(*str != ' ')
        {
            *ptr = *str;
            ptr++;
        }
        str++;
    }
    *++ptr = '\0';
    printf("eml_space函数中处理的结果%s\n", str1);

//    for(; *str; str++)
//    {
//        if(*str != ' ')
//        {
//            *ptr = *str;
//            ptr++;
//        }
//    }
//    *ptr = '\0';
//    printf("eml_space函数处理后，即将返回的字符串为%s\n", ptr);
    return str1;
}
