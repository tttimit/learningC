/* ex4.c -- 返回一个double数组中最大数的索引，并在一个简单的程序中测试这个函数 */
#include <stdio.h>
int max_index(double [], int);
int main(void)
{
	double arr[10] = {111111.1, 234.23, 423.1, -234.22, 4123, 23.444, 23.456, 22.413, 23.4445, 0.223};
	printf("该数组中最大数的索引为：%d\n", max_index(arr, 10));
	return 0;
}

int max_index(double arr[], int length)
{
	int i, max;

	for(i=1, max = 0; i < length; i++)
		if(arr[max] < arr[i])
			max = i;
	return max;
}
