/* cubic.c -- 计算一个浮点数的立方值 */
#include <stdio.h>
void count(float n);
int main(void)
{
	float num;
	
	printf("请输入要计算立方值的浮点数：\n");
	scanf("%f", &num);
	count(num);
	return 0;
}

void count(float f)
{
	printf("%f的立方值是：%f\n", f, f*f*f);
}
