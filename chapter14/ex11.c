/* ex11.c -- ��Ҫ���дһ������������python�е�map���������ǽ�һ������������
source�����е�ÿ��Ԫ�أ�Ȼ�󽫽������target�����У�����Ϊ�����������ṩ��
ʹ��math.h���ṩ��2���������Լ��Լ���Ƶ�������������������� */
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


