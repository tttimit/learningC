/* loc_stat.c -- 使用一个局部静态变量，函数执行完了，但是该变量仍然存在，下次
执行这个函数的时候，还可以继续使用*/
#include <stdio.h>
void trystat(void);
int main(void)
{
    int count;
    
    for(count = 1; count < 4; count++)
    {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }
    
    return 0;
}

void trystat(void)
{
    int fade = 1;
    static int stay = 1;
    
    printf("fade = %d and stay = %d\n", fade++, stay++);
}
