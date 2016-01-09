/* ex3.c -- 编写一个函数，该函数接受一个int参数，并返回这个参数中打开位的数量。
在程序中测试该函数。 */
#include <stdio.h>
int countopen(int);
int main(void)
{
	int num, count;
	
	printf("Please enter a num.\n");
	while(scanf("%d", &num) == 1 && getchar() == '\n')
	{
		count = countopen(num);
		printf("%d has %d open bit.\n", num, count);
		printf("Please enter a num to test, enter any characters to quit.\n");
	}
	
	return 0;
}

int countopen(int num)
{
	int count = 0;
	int remain;
	
	while(num != 0)
	{
		remain = num % 2;
		if(remain == 1)
			count++;
		num /= 2;
	}

	return count;
}
