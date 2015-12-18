//defines.c -- 使用limit.h 和float.h 中定义的常量
#include <stdio.h> 
#include <limits.h> //整数限制
#include <float.h> // 浮点数限制
int main(void)
{
	printf("Some number limits for this system: \n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest unsigned long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float percision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);
	return 0;
}
/*
Some number limits for this system: 
Biggest int: 2147483647
Smallest unsigned long: -9223372036854775808
One byte = 8 bits on this system.
Largest double: 1.797693e+308
Smallest normal float: 1.175494e-38
float percision = 6 digits
float epsilon = 1.192093e-07
*/
