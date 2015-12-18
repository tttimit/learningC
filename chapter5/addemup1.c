/* addemup1.c -- 对天数进行控制，比如第一天拿到1块钱，第二天拿到2块钱。。。*/
#include <stdio.h>
int main(void)
{
	int money = 0;
	int day;
	int today_money = 1;

	printf("您要计算到哪一天？\n");
	scanf("%d", &day);
	while(day >  0)
	{
		money = money + today_money;
		printf("今天是第%d天，获得了%d块钱，现在一共%d有块钱。\n", today_money, today_money, money);
		today_money++;
		day--;
	}
	return 0;
}
				
