/* ex6-16-10.c -- 编写一个程序把8个整数读入一个数组中，然后以
相反的顺序打印它们*/
#include <stdio.h>
int main(void)
{
	int arr[8], i;

	printf("请输入8个整数，以空格隔开：\n");
	for(i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);//这里就要用地址标识符了！！！
	}
	for(i = 7; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
