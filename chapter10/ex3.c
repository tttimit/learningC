/* ex3.c -- 编写一个函数，返回一个int数组中的最大值，并在一个程序中测试这个函数 */
#include <stdio.h>
int max_of_arr(int [], int);
int main(void)
{
	int arr[10] = {2, 55, 123, 52, 3125, -231, 4423, 12355, 21312, 3};
	int max;
	
	max = max_of_arr(arr, 10);
	printf("该数组中的最大值为：%d\n", max);
	return 0;
}

int max_of_arr(int arr[], int len)
{
	int i, max;
	
	for(i=1, max = arr[0]; i < len; i++)
	{
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}
