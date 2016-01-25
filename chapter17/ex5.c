/* ex5.c -- exercise 5 -- ��дһ����������һ���ַ������ó��򽫴��ַ����е��ַ�
�����ѹ��һ��ջ��Ȼ�󵯳���Щ�ַ�����ʽ������ǽ��ַ�����������ʾ��*/
#include <stdio.h>
#include <string.h>
#include "stack.h"

int main(void)
{
	char str[MAXSIZE], ch;
	int i;
	Stack stack;
	
	printf("Please enter a string (maximal length is %d).\n", MAXSIZE);
	gets(str);
	InitializeStack(&stack);
	for(i=0; i < strlen(str); i++)
	{
		PushStack(str[i], &stack);
	}
	
	printf("The original string is: %s\n", str);
	puts("---------");
	while(PopStack(&ch, &stack))
	{
		printf("%c", ch);
	}
	printf("\nDone, Bye!\n");

	return 0;
}
