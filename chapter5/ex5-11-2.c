/* ex5-11-2.c -- 根据题目要求输出 */
#include <stdio.h>
int main(void)
{
	int input, max;
	
	printf("请输入一个整数：\n");
	scanf("%d", &input);
	max = input + 10;	
	input--;
	while(++input <= max)
	{
		printf("%d ", input);
	}
	printf("\n");
	return 0;
}
