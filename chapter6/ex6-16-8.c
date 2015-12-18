/* ex6-16-8.c -- 使用函数来返回结果 */
#include <stdio.h>
float get_result(float f1, float f2);
int main(void)
{
	float f1, f2, result;
	int res;

	printf("请输入2个浮点数（输入非数字以退出）：\n");
	res = scanf("%f %f", &f1, &f2);
	while(res != 0)
	{
		result = get_result(f1, f2);
		printf("两数的计算结果为：%.3f\n", result);
		printf("请输入2个浮点数（输入非数字以退出）：\n");
		res = scanf("%f %f", &f1, &f2);
	}
	return 0;
}

float get_result(float f1, float f2)
{
	float res;

	res = (f1 - f2) / (f1 * f2);
	return res;
}
