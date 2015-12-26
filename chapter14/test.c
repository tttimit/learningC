/* test.c */
#include <stdio.h>
int sum(int, int);

int main(void)
{
    int a, b;
    
    a = 2;
    b = 5;
    
    printf("a + b = %d\n", sum(a, b));
    return 0;
}

int sum(int x, int y)
{
    int total;
    
    total = x + y;
    
    return total;
}
