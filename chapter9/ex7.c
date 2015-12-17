/* ex7.c -- 改进power（）函数，使其能够计算负幂。同时，用该函数实现0
的任何次幂为0，并且任何数值的0次幂为1。使用循环的方法实现该函数。*/
#include <stdio.h>
double power(double, int); 
int main(void)
{
	double base;
	int mi;

	printf("请输入基数: \n");
	scanf("%lf", &base);
	printf("请输入幂：\n");
	scanf("%d", &mi);
	printf("%.2lf的%d次幂为：%.2lf\n", base, mi, power(base, mi));
	return 0;
}

double power(double base, int mi)
{
	int i;

	if(base == 0)
	{
		return 0;
	}
	else if(mi == 0)
	{
		return 1;
	}
	else if(mi < 0)
	{
		for(i=1 ; i < -mi; i++)
		{
			base *= base;
		}
		return 1/base;
	}
	else if( mi > 0)
	{
		for(i = 1; i < mi; i++)
		{
			base *= base;
		}
		return base;
	}
}
