/* ex10.c -- ��дһ��������ָ������ָ������ִ�в˵������磬�ڲ˵���ѡ��a��
�����������һ��Ԫ��ָ��ĺ����� */
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int add(int, int);
int minus(int, int);

int main(void)
{
	int choice, a, b;
	int (*pt[2])(int, int);	//����2��ָ�룬ָ�������Ǹú��������� 
	
	pt[0] = add;
	pt[1] = minus;
	a = 5;
	b = 2;
	printf("Please enter a choice.\n");
	printf("1) add\t2) minus\n");
	scanf("%d", &choice);
	if(choice == 1)
	{
		printf("result is: %d\n",pt[0](a, b));
	}
	else if(choice == 2)
	{
		printf("result is : %d\n", pt[1](a, b));
	}
	
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}


