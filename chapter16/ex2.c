/* ex2.c -- 编写一个计算求和平均数的宏，并进行测试 */
#include <stdio.h>
#define TH(X, Y) 1 / ((1/X) + (1/Y))

int main(void)
{
	float a = 5;
	float b = 2;
	
	printf("%f 和 %f的调和平均数为：%.4f\n", a, b, TH(a, b));
	
	return 0;
}
