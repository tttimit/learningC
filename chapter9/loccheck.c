/* loccheck.c -- �鿴�����Ĵ����ַ */
#include <stdio.h> 
void mikado(int p);
int main(void)
{
    int p = 2, b = 5;
    
    printf("In main(), p = %d and &p = %p\n", 
            p, &p);
    printf("In main(), b = %d and &b = %p\n",
            b, &b);
    mikado(p);
    return 0;
}

void mikado(int p)
{
    int b = 10;
    
    printf("In mikado, p = %d and &p = %p\n",
            p, &p);
    printf("In mikado, b = %d and &b = %p\n",
            b, &b);
}
