/* ex5.c -- 返回一个double数组中最大数和最小数之间的差值，并测试该函数 */
#include <stdio.h>
double get_diff(double[], int);
int main(void)
{
	double diff;

	double arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	diff = get_diff(arr, 10);
	printf("差值为：%lf", diff);
	return 0;
}

double get_diff(double arr[], int length)
{
	int i;
	double min, max;

	for(i=1, min = max = arr[0]; i<length; i++)
	{
		if(min > arr[i])
			min = arr[i];
		if(max < arr[i])
			max = arr[i];
	}

	return max - min;
}
