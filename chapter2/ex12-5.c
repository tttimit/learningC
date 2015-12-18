//创建一个toes的整数变量，让程序把toes设置为10，然后再让程序计算两个toes的和以及toes的平方，程序应该输出这3个值，并分别标识它们
#include <stdio.h>
int main(void)
{
	int toes;
	
	toes = 10;
	printf("toes: %d\n", toes);
	printf("toes + toes : %d\n", toes + toes);
	printf("toes * toes : %d\n", toes * toes);
	return 0;
}
