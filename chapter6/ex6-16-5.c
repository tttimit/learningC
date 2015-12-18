/* ex6-16-5.c -- 打印一个表，每一行显示一个整数和其平方、立方，用户可以输入上下限，用for循环 */
#include <stdio.h>
void table(int start, int stop);
int main(void)
{
	int start, stop;

	printf("请输入您需要的上下限（包含）：\n");
	scanf("%d %d", &start, &stop);
	table(start, stop);
	return 0;
}

void table(int start, int stop)
{
	printf("%10s\t%s\t%s\n", "原数", "平方", "立方");
	for(;start <= stop; start++)
	{
		printf("%10d\t%d\t%d\n", start, start * start, start * start * start);
	}
}
