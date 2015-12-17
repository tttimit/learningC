/* ex10.c -- 编写一个fibonacci函数，使用循环替代递归完成计算 */
#include <stdio.h>
unsigned long Fibonacci(int n);
int main(void)
{
	int n;

	printf("要计算到第几个？\n");
	scanf("%d", &n);
	printf("结果为：%ld\n", Fibonacci(n));
	return 0;
}

unsigned long Fibonacci(int n)
{
	unsigned long result, prev = 0, now = 1;
	int i;

	for(i = 0; i < n; i ++)
	{
		result = now + prev;
		prev = now;
		now = result;
	}
	return result;
}
		
