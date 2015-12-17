//  get_space_prt.c -- 参数是一个字符串的指针，返回该指针后第一个空格的位置，找不到
//  空格就返回空指针
#include <stdio.h>
#define MAX 81
char * get_space_ptr(char *);
int main(void)
{
    char str[MAX];
    char * ptr;
    
    printf("Enter a string(empty line to quit):\n");
    gets(str);
    while(*str != '\0')
    {
        ptr = get_space_ptr(str);
        printf("string add is %p, result is %p.\n", str, ptr);
        gets(str);
    }
    
    return 0;
}

char * get_space_ptr(char * str)
{
    char * ptr = '\0';
    
    while(*str++ != '\0')
    {
        if(*str == ' ')
            ptr = str;
    }
    
    return ptr;
}
