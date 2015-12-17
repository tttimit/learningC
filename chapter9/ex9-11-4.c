/* ex9-11-4.c -- 计算谐均值，两数字倒数平均值的倒数 */
#include <stdio.h>
double oper1(double, double);
int main(void)
{
    double a, b;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("The xiejunzhi is: %lf\n", oper1(a, b));
    return 0;
} 

double oper1(double a, double b)
{
    return 1 / ((1 / a + 1 / b) / 2);
}
