/* ex6-16-12.c -- 创建一个8位的int数组，把元素设置为2的前八次幂，然后打印
出它们的值。使用for循环来设置值；为了变化，使用do while循环来显示这些值*/
#include <stdio.h>
int main(void)
{
	int i, value, arr[8];
	value = 1;
	for( i = 0; i < 8; i++)
	{
		if(i != 0)
		{
			value *= 2;
		}
		arr[i] = value;
	}
	i=0;
	printf("数组内容为：\n");
	do
	{
		printf("%d ", arr[i]);
		i++;
	}while(i < 8);
	printf("\n");
	return 0;
}
