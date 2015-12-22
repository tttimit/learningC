/* parrot.c -- 使用fgets()和fputs()函数 */
#include <stdio.h>
#define MAXLINE 20
int main(void)
{
    char line[MAXLINE];
    
    while(fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
        fputs(line, stdout);
    return 0;
}
/* 这个程序是有点特别的，数组line只能容纳19个有效字符，最后一个字符是\0，所以
fgets（）函数每次读取19个字符，然后打印这19个字符。如果某一行输入的字符数目大于
19个，函数下次读取会在第20个字符处继续，然后打印下一个19个字符，下次开始的时候
也是从上次读取到的字符的下一个字符处开始。。。直到遇到行尾。 */
