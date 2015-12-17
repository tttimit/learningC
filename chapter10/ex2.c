/* ex2.c -- 定义一个double数组，并使用数组和指针的方式复制2份出来 */
#include <stdio.h>
void copy_arr(double[], double[], int);
void copy_prr(double *, double *, int);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    copy_arr(source, target1, 5);
    copy_prr(source, target2, 5);
    return 0;
}

void copy_arr(double[] src, double[] tar, int len)
{
    
}

void copy_prr(double * src, double * tar, int len)
{
    
}


