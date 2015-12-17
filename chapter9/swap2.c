/* swap2.c -- ����swap1.c ���� */
#include <stdio.h>
void interchange(int u, int v);
int main(void) 
{
    int x = 5, y = 10;
    printf("Originally x = 5 and y = 10.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}

void interchange(int u, int v)
{
    int temp;
    
    printf("Original u = %d and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}
