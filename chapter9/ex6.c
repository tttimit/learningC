/* ex6.c -- 读取字符直到文件尾。报告读入的字符是否是字符，如果是
还应通告字母在字母表中的位置，例如c和C都是3.*/
#include <stdio.h>
int loc_char(char);		//接受一个字符参量，如果是字母则返回位置，否则返回-1
int main(void)
{
	int ch, loc;

	printf("请输入要获取位置的字符串：\n");
	while((ch = getchar()) != EOF)
	{
		if((loc = loc_char(ch)) != -1)
		{
			printf("%c:%d\n", ch, loc);
		}
	}
	return 0;
}

int loc_char(char ch)
{
	if(ch>= 'a' && ch <= 'z')
	{
		return ch - 'a' + 1;
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
		return ch - 'A' + 1;
	}
	else
	{
		return -1;
	}
}
