/* swap3.c -- ʹ��ָ����ʵ�������Ľ��� */
#include <stdio.h>
void interchange(int * u, int * y);
int main(void) 
{
    int x = 5, y = 10;
    printf("Original x = 5 and y = 10.\n");
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}

void interchange(int * u, int * v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}
