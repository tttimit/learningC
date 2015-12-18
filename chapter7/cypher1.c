/* cypher1.c -- 改变输入，只保留其中的空格  */
#include <stdio.h>
#define SPACE ' ' //空格字符
int main(void)
{
	char ch;

	ch = getchar();    //读取字符
	while(ch != '\n')
	{
		if(ch == SPACE)	//如果是空格字符
			putchar(ch); //打印
		else 
			putchar(ch + 1); //不是空格字符就打印字符表的后一个字符
		ch = getchar();
	}
	putchar(ch);	//打印字符
	return 0;
}
