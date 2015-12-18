/* addemup3.c -- 每天添加平方数这样 */
#include <stdio.h>
int main(void)
{
	int total = 0;
	int day;
	int today_money = 1;

	printf("您要计算到第几天呢？\n");
	scanf("%d", &day);
        while(day > 0)
	{
		total = total + today_money * today_money;
		printf("今天是第%d天，得到%d块钱，现在一共有%d块钱。\n", today_money, today_money * today_money, total);
		today_money++;
		day--;
	}
	return 0;
}
