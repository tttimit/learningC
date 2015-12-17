/* ex7-12-5.c -- 使用switch语句统计输入的整数中奇数和偶数的个数，
并分别计算奇数的平均数和偶数的平均数并报告。*/
#include <stdio.h>
int main(void)
{
	int num;
	int odd_count = 0, even_count = 0;
	int odd_sum = 0, even_sum = 0;

	printf("请输入整数，输入0结束程序：\n");
	scanf("%d", &num);
	while(num != 0)
	{
		switch(num % 2 == 0) //这里，当num%2==0成立时，该式子为真，即1
		{
			case 1:
				even_count++;
				even_sum += num;
				printf("偶数个数：%d，偶数和：%d\n", even_count, even_sum);
				break;
			default:
				odd_count++;
				odd_sum += num;
				printf("奇数个数：%d，奇数和：%d\n", odd_count, odd_sum);
		}
		printf("请输入下个整数，输入0结束程序：\n");
		scanf("%d", &num);
	}
	printf("奇数个数：%d，平均数：%.2f。\n", odd_count, (float)odd_sum / odd_count);
	printf("偶数个数：%d，平均数：%.2f。\n", even_count, (float)even_sum/ even_count);
	return 0;
}
