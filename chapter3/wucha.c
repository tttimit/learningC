/* wucha.c -- 将一个数加上1再减去原数，结果为1.但是如果使用浮点计算，可能会有其他结果。 */
#include <stdio.h>
int main(void)
{
	float a, b;
	
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);
	return 0;
}
