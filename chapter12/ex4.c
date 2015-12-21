/* ex4.c -- 编写一个函数，它返回函数自身被调用的次数，并在一个循环中测试 */
#include <stdio.h>
int return_times();
int main(void)
{
    int i;
    
    for(i = 0; i < 10; i ++)
    {
        printf("This is %d times.\n", return_times());
    }
    
    return 0;
}

int return_times(void)
{
    static int times;
    return ++times;
}
