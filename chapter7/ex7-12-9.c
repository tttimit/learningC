/* ex7-12-9.c -- 输入一个整数，然后显示所有小于该整数的素数。*/
#include <stdio.h>
int main(void)
{
	int num, i, j;
	
	printf("请输入一个整数作为上界： ");
	scanf("%d", &num);
	for(i = 1; i < num; i++)
	{
		for(j = 2; j <= i; j++)
		{
			if(i % j == 0 && j < i)
			{
				break;
			}
			if(j == i)
				printf("%d,", i);
		}
	}
	return 0;
}
