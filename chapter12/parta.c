/* parta.c -- 各种存储类 */
#include <stdio.h>
void report_count();
void accumulate(int k);
int count = 0;  //静态存储时期，外部链接，文件作用域
int main(void)
{
    int value;  //自动存储时期，空连接，代码块作用域
    register int i; //自动存储时期，空链接， 代码块作用域
    
    printf("Enter a positive integer(0 to quit):");
    while(scanf("%d", &value) == 1 && value > 0)
    {
        ++count;
        for(i=value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer(0 to quit):");
    }
    report_count();
    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}
