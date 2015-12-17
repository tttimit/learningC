/* quit_chk.c -- 某程序的开始；用来判断一个程序是否应该停止读取输入 */
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 100
#define STOP "quit"
int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;
    
    printf("Enter up to %d lines(type quit to quit): \n", LIM);
    while(ct < LIM && gets(input[ct]) != NULL &&strcmp(input[ct], STOP) != 0)
        //本次输入行数未超过限制
        //获取输入不为NULL，一般遇到EOF会返回NULL
        //strcmp()函数比较输入的字符和quit是否一样，一样则返回0，不一样返回非0
        
        //另外，可以设置为如果遇到了一个空行就退出循环
        //当我们在某一行的末尾按下2次回车后，就会留下一个空行，gets()会把空字符放到行首
        //while(ct < LIM && gets(input[ct]) != NULL && input[ct] != '\0'
        //行数未超，本行能读取到字符，input[ct] 如果是'\0'说明这一行时空行，也就跳出了
        
    {
        ct++;
    }
    printf("%d strings entered\n", ct);
    
    return 0;
}
