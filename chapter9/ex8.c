/* ex8.c -- 使用递归做上面那个计算幂的题目。 */
#include <stdio.h>
double power(double, int);
int main(void)
{
	double base;
	int mi;

	printf("请输入基数和幂：\n");
	scanf("%lf", &base);
	scanf("%d", &mi);
	printf("%lf的%d次幂的结果是:%.3lf\n", base, mi,  power(base, mi));
	return 0;
}

double power(double base, int mi)
{
	if(0 == base)
	{
		return 0;
	}
	else if(0 == mi)
	{
		return 1;
	}
	else if(mi < 0)
	{
		return (1 / base) *  power(base, mi + 1);
	}
	else if( mi > 0)
	{
		return base * power(base , mi - 1);
	}
}
