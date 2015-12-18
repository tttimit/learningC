/* ex4-8-3.c -- 读取一个浮点数，线以小数点计数法，再以指数计数法打印。*/
#include <stdio.h>
int main(void)
{
	float num;

	printf("Please enter a float number.\n");
	scanf("%f", &num);
	printf("The input is %.1f or %.1e.\n", num, num);
	printf("The input is %+.3f or %.3E.\n", num, num);
	return 0;
}
