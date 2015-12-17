/* ex9-11-5.c -- 将2个double类型数中较大的重新赋值给这两个数 */
#include <stdio.h>
void larger_of(double *, double *);
int main(void)
{
    double a, b;
    
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("The original x = %lf and y = %lf.\n", a, b);
    larger_of(&a, &b);
    printf("Now a = %lf and b = %lf.\n", a, b);
    return 0;
}

void larger_of(double * a, double * b)
{
    if(*a > *b)
        *b = *a;
    else
        *a = *b;
}

