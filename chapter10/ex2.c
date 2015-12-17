/* ex2.c -- 通过数组访问方式和指针访问方式从一个double类型的数组中复制2个数组出来*/
#include <stdio.h>
void copy_arr(double [], double [], int);
void copy_prr(double *, double *, int);
void print_arr(double [], int);
int main(void)
{
	int i;
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5], target2[5];

	copy_arr(source, target1, 5);
	copy_prr(source, target2, 5);
	printf("target1[]: ");
	print_arr(target1, 5);
	putchar('\n');
	printf("target2[]: ");
	print_arr(target2, 5);
	return 0;
}

void copy_arr(double source[], double target[], int length)
{
	int i;

	for(i=0; i < length; i++)
		target[i] = source[i];
}

void copy_prr(double * pt1, double *pt2, int n)
{
	int i;

	for(i=0; i < n; i++)
		*(pt2++) = *(pt1++);
}

void print_arr(double arr[], int length)
{
	int i;
	
	for(i=0; i < length; i++)
		printf("%.2f,", arr[i]);
}
