/* ex7-12-10.c -- 根据纳税等级来选择税率，循环等待输入并输出结果。*/
#include <stdio.h>
#define TAX_RATE1 0.15
#define TAX_RATE2 0.28
#define BASE TAX_RATE1 * grade

void printchoice(void);
int main(void)
{
	int choice, grade;
	_Bool quit;
	float total_income, tax, income_after_tax;
	
	printchoice();
	scanf("%d", &choice);
	while(choice != 5)
	{
		quit = 0;
		switch(choice)
		{
			case 1:
				grade = 17850;
				break;
			case 2:
				grade = 23900;
				break;
			case 3:
				grade = 29750;
				break;
			case 4:
				grade = 14875;
				break;
			case 5:
				quit = 1;
				break;
			default:
				printf("您的输入有误，请重新输入。\n");
				quit = 1;
		}
		if(!quit)
		{
			printf("请输入您的年收入：$");
			scanf("%f", &total_income);
			if(total_income <= grade)
			{
				tax = TAX_RATE1 * total_income;
			}
			else
			{
				tax = BASE + TAX_RATE2 * (total_income - grade);
			}
			income_after_tax = total_income - tax;
			printf("您的应缴税金为$%.2f，税后收入为$%.2f。\n", tax, income_after_tax);
		}
		printchoice();
		scanf("%d", &choice);
	}
	return 0;
}

void printchoice(void)
{
	printf("***************************************\n");
	printf("1)单身\t\t\t 2)户主\n");
	printf("3)已婚，共有\t\t 4)已婚，离异\n");
	printf("5)quit\n");
	printf("***************************************\n");
}

	
