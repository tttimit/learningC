/* ex8-8.c -- ��ը */
#define ADD '+'
#define SUB '-'
#define MUL '*'
#define DIV '/'
#include <stdio.h>
int get_choice(void); // ����˵�ѡ��ͺϷ����ж� 
float get_input(void); // ������������Ϸ����ж� 
int main(void)
{
	float num1, num2, result;
	int ch;
	_Bool quit;

	ch = get_choice();
	while(ch != 'q')
	{
		printf("Enter the first number: ");
		num1 = get_input();
		printf("Enter second number: ");
		num2 = get_input();
		quit = 0;
		switch(ch)
		{
			case 'a':
				printf("%f %c %f = %.2f\n", num1, ADD, num2, num1 + num2);
				break;
			case 's':
				printf("%f %c %f = %.2f\n", num1, SUB, num2, num1 - num2);
				break;
			case 'm':
				printf("%f %c %f = %.2f\n", num1, SUB, num2, num1 * num2);
				break;
			case 'd':
				printf("%f %c %f = %.2f\n", num1, SUB, num2, num1 / num2);
				break;
			case 'q':
			    printf("Bye.\n");
			    quit = 1;
			    break;
			defalut:
				printf("�������쳣��\n");
		}
		if(!quit)
		  ch = get_choice();
	}
	return 0;
}

int get_choice(void)
{
	char ch;

	printf("Enter the operation of your choice:\n");
	printf("a.add \t\t s.subtrach\n");
	printf("m.multiply \t d.divide\n");
	printf("q.quit\n");
	ch = getchar();
	printf("���������%c\n", ch);
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
	    while(getchar() == '\n')
	       continue;
		printf("��ѡ��Ĺ��ܲ����ڣ�����������\n");
		ch = scanf("%c", &ch);
		while(getchar()== '\n')
		    continue;
	}
	return ch;
}

float get_input(void)
{	
	float num;
	int res;
    char str[40];

	while(scanf("%f", &num) != 1)
	{
	    scanf("%s", str);
	    while(getchar() == '\n')
	       continue;
		printf("%s is not a number.\n", str);
		printf("Please enter a number, such as 2.5, -1.7E8, or 3: ");
		res = scanf("%f", &num);
		while(getchar() == '\n')
		    continue;
	}
	return num;
}	
