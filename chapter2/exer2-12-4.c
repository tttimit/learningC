//编写一个有重复输出语句的程序
#include <stdio.h>
void line1(void);
void line2(void);
int main(void)
{
	line1();
	line1();
	line1();
	line2();
	return 0;
}

void line1(void)
{
	printf("For he\'s a jolly good fellow!\n");
}

void line2(void)
{
	printf("Which nobody can deny!\n");
}
