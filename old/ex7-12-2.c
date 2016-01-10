/* ex7-12-2.c -- 读取字符直到遇到#。使程序打印每个输入的字符以及
它的十进制ASCII码。每行打印8个字符/编码对。利用模运算来进行周期
控制*/
#include <stdio.h>
int main(void)
{
    char ch;
    char arr[40];
    int i, j;
    
    i=0;
    while((ch = getchar()) != '#')
    {
        arr[i++] = ch;
    }   
    
    for(j=0; j < i; j++)
    {   
        if(j % 8 == 0)
            printf("\n");
        printf("%c:%d  ", arr[j], arr[j]);    
    }
    return 0;
} 
