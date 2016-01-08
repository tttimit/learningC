/* ex10.c -- 编写一个程序，用指向函数的指针数组执行菜单。例如，在菜单中选择a会
激活由数组第一个元素指向的函数。 */
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int add(int, int);
int minus(int, int);

int main(void)
{
	int choice, a, b;
	int (*pt[2])(int, int);	//包含2个指针，指针类型是该函数的类型 
	
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


