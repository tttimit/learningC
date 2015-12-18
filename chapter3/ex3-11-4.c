/* 编写一个程序，读入一个浮点数，并分别以小数形式和指数形式打印。*/
#include <stdio.h>
int main(void)
{
	float num;

	printf("Please enter the float number: ");
	scanf("%f", &num);
	printf("The input is %f or %e.\n", num, num);
	return 0;
}
