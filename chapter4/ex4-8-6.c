/* ex4-8-6.c -- 浮点数的各种显示 */
#include <stdio.h>
#include <float.h>
int main(void)
{
	double d  = 1.0 / 3.0;
	float f = 1.0 / 3.0f;

	printf("4d--%.4f\n", d);
	printf("12d--%.12f\n", d);
	printf("16d--%.16f\n", d);
	printf("4f--%.4f\n",  f);
	printf("12f--%.12f\n", f);
	printf("16f--%.16f\n", f);
	printf("FLT_DIG--%f\n", FLT_DIG);
	printf("DBL_DIG--%f\n", DBL_DIG);
	return 0;
}
