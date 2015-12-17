/* ex9.c -- 写一个函数，能够讲给定的十进制数转化为指定进制的数，也就是to_base_n(),
该函数接受2个参数，第一个是待转化的十进制数，另一个参数是要转化成的进制。*/
#include <stdio.h>
void to_base_n(long, int);
int main(void)
{
	long num;
	int base;

	printf("请输入您要转化的数和指定的进制：\n");
	scanf("%ld", &num);	
	scanf("%d", &base);
	printf("您的输入为: %ld, %d\n", num, base);
	to_base_n(num, base);
	putchar('\n');
	return 0;
}

void to_base_n(long num, int base)
{
	if(num > 0)
	{
//		printf("this time: %ld\n", num / base);
		to_base_n(num/base, base);
		printf("%ld", (num % base));
	}
}
	

