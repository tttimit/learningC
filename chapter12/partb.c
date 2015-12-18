// partb.c -- 程序的其余部分
#include <stdio.h>

extern int count;   //引用一个外部变量

static int total = 0;   //静态存储时期，内部链接，文件作用域
void accumulate(int k);
void accumulate(int k)
{
    static int subtotal = 0;    //静态存储时期，空连接，代码块作用域
    
    if(k <= 0)
    {
        printf("loop cycle: \n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}
