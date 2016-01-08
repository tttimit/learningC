/* ex11.c -- 按要求编写一个函数，类似python中的map函数，就是将一个函数作用于
source数组中的每个元素，然后将结果存入target数组中，个数为第三个参数提供。
使用math.h中提供的2个函数，以及自己设计的两个函数测试这个函数 */
#include <stdio.h>
#include <math.h>
#define LEN 10
void transform(double *, double *, int, double (*)(double));

int main(void)
{
	int i;
	
	double a[LEN], b[LEN];
	for(i=0; i < 100; i++)
	{
		a[i] = 30 * i;
//		printf("%f")
	}
	
	transform(a, b, LEN, sin);
	
	for(i=0; i < LEN; i++)
	{
		printf("%f\t%f\n", a[i], b[i]);
	}
	
	return 0;
}

void transform(double * a, double * b, int len, double (*pt)(double c))
{
	int i;
	
	for(i=0; i < len; i++)
	{
		b[i] = (*pt)(a[i]);
	}
}


