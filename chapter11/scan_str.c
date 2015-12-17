/* scan_str.c -- 使用scanf() */
#include <stdio.h>
int main(void)
{
    char name1[11], name2[11];
    int count;
    
    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n", count, name1, name2);
    
    return 0;
    
    /* scanf()函数可以执行读取多少个字符。例如 scanf("%5s", &name)，当读取到第5个
    或者遇到空白字符（空格，制表符，换行符）结束，哪个短就结束在哪里。
    因此，上述程序在输入 Jesse Jukes时，输出为 Jesse Jukes
    当输入为Liza Applebottham时，输出为Liza AppleBotth
    当输入为Portensia Callowit时，输出为 Porte nsia
}
