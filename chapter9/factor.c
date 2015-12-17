/* factor.c -- 使用循环和尾递归计算阶乘 */
#include <stdio.h> 
long fact1(int num); //使用循环计算阶乘 
long fact2(int num); //使用尾递归计算阶乘 
int main(void)
{
    int num;    
    
    printf("请输入要计算阶乘的数：");
    scanf("%d", &num);
    printf("循环计算出的阶乘结果为：%ld\n", fact1(num));
    printf("尾递归计算出的阶乘结果为：%ld\n", fact2(num));
    return 0;
}

long fact1(int num)
{
    unsigned int i;
    long result = 1;
    
    for(i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

long fact2(int num)
{
    long ans;
    
    if(num > 0)
        ans = num * fact2(num - 1);
    else
        ans = 1;
    return ans;
}
