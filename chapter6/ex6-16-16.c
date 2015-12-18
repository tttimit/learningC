/* ex6-16-16.c -- 第六章最后一道编程题
100万美刀，存入一个每年利息8%的账户，每年年底取10万，啥时候取完*/
#include <stdio.h>
int main(void)
{
	double balance, money;
	int time;
	
	balance = 1000000.00;
	time = 0;
	while(balance > 0)
	{	
		time++;
		balance = balance * (1 + 0.08);
		money = balance > 100000.0? 100000.0:balance;
		printf("第%d年，余额还有$%.2f, Chuckie Lucky取了$%.2f.\n", time, balance, money);
		balance -= money;
	}
	return 0;
}
