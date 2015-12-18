/* ex6-16-9.c -- 第九题，计算用户输入整数上下限中所有整数的
平方和，退出条件是下限大于等于上限*/
#include <stdio.h>
int main(void)
{
	int start, stop, res, temp, sum;

	printf("Enter lower and upper integer limits:\n");
	scanf("%d %d", &start, &stop);
	while(start < stop)
	{
		sum = 0;
		for(temp = start; temp <= stop; temp++)
			sum = sum + temp * temp;
		printf("The sums of the squares form %d to %d is %d\n", start * start, stop * stop, sum);
		printf("Enter next set of limist:\n");
		scanf("%d %d", &start, &stop);
	}
	printf("Done\n");
	return 0;
}
