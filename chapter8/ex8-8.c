/* ex8-8.c -- 简单的计算器，用户可以选择需要进行哪种四则运算，
该程序能够进行输入检查并对用户进行提示*/
#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'
#include <stdio.h>
int get_choice(void); // 显示菜单并读取输入、处理输入合法性
float get_input(void); // 处理用户输入的数字合法性问题
int main(void)
{
	float num1, num2, result;
	int ch;

	ch = get_choice();
	while(ch != 'q')
	{
		printf("Enter the first number: ");
		num1 = get_input();
		printf("Enter second number: ");
		num2 = get_input();
		switch(ch)
		{
			case 'a':
				printf("%f %c %f = %f\n", num1, ADD, num2, num1 + num2);
				break;
			case 's':
				printf("%f %c %f = %f\n", num1, SUB, num2, num1 - num2);
				break;
			case 'm':
				printf("%f %c %f = %f\n", num1, SUB, num2, num1 * num2);
				break;
			case 'd':
				printf("%f %c %f = %f\n", num1, SUB, num2, num1 / num2);
				break;
			defalut:
				printf("程序出现未知错误\n");
		}
		ch = get_choice();
	}
	return 0;
}

int get_choice(void)
{
	int ch;

	printf("Enter the operation of your choice:\n");
	printf("a.add \t s.subtrach\n");
	printf("m.multiply \t d.divide\n");
	printf("q.quit\n");
	ch = scanf("%c", &ch);
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("您的输入有误，请重新输入！\n");
		ch = scanf("%c", &ch);
	}
	return ch;
}

float get_input(void)
{	
	float num;
	int res;

	res = scanf("%f", &num);
	while(res == 0)
	{
		printf("%s is not a number.\n", num);
		printf("Please enter a number, such as 2.5, -1.7E8, or 3: ");
		res = scanf("%f", &num);
	}
	return num;
}	
