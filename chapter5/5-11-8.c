/* ex5-11-8.c -- 输入华氏温度，输出摄氏温度和绝对温度 */
#include <stdio.h>
void Temperatures(double tem);
int main(void)
{
	double tem;
	char str[20];
	int res;
	
	printf("请输入华氏温度（浮点类型），输入q或其它非数字值退出：\n");
	res = scanf("%lf", &tem);
	printf("res=%d\n", res);
	while(res != 0)
	{
		Temperatures(tem);	
		printf("请输入话是问题（浮点类型），输入q或其他非数字值退出：\n");
		res = scanf("%lf", &tem);
	}
	return 0;
}

void Temperatures(double tem)
{
	const float YIDIANBA = 1.8;
	const float SANSHIER = 32.0;
	const float ERQISANDIANYILIU = 273.16;
	double cel, kel;
	
	cel = YIDIANBA * tem + SANSHIER;
	kel = cel + ERQISANDIANYILIU;	
	printf("您输入的是%.2lf华氏度，对应于%.2lf摄氏度，对应于%.2lf绝对温度。\n", tem, cel, kel);
}
