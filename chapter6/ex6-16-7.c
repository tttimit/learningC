/* ex6-16-7.c -- 处理浮点数相关的东西 */
#include <stdio.h>
int main(void)
{
	float f1, f2;
	int res;

	printf("请输入要计算的2个浮点数（输入非数字以退出）：\n");
	res = scanf("%f %f", &f1, &f2);
	while(res != 0)
	{
		printf("这2个浮点数的差值除以二者的乘积为 %.3f.\n", (f1 - f2) / (f1 * f2));
		printf("请输入要计算的2个浮点数（输入非数字以退出）:\n");
		res = scanf("%f %f", &f1, &f2);
	}
	return 0;
}
