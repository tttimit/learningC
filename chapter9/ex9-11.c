/* ex9-11.c -- min(x, y) ����2��double���н�С���Ǹ� 
 ��ע�⣬scanf�������ܵ�double��˵����Ϊ%lf */
#include <stdio.h>
double min(double, double) ;
int main(void)
{
    double x, y;
    
    printf("Enter the first number.\n");
    scanf("%lf", &x);
    printf("Enter the next number.\n");
    scanf("%lf", &y);
    //printf("first num: %f, second num: %f.\n", x, y);
    printf("The smaller num is: %.2f.\n", min(x, y));
    return 0;
}

double min(double x, double y)
{
    //printf("In min, x: %f, y: %f.\n", x, y);
    return x<y?x:y;
}
