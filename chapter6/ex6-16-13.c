/* ex6-15-13.c -- 定义一个函数，接受一个int参数，以long类型返回该数的平方值 */
#include <stdio.h>
long sq(int n);
int main(void)
{
	int num;
	long result;

	printf("请输入要计算平方的int值：\n");
	scanf("%d", &num);
	result = sq(num);
	printf("%d的平方为%ld.\n", num, result);
	return 0;
}

long sq(int n)
{
	long result = n * n;
	return result;
}
	
