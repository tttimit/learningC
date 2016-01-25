/* ex5.c -- exercise 5 -- 编写一个程序，输入一个字符串。该程序将此字符串中的字符
逐个地压入一个栈，然后弹出这些字符并显式。结果是将字符串按逆序显示。*/
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
