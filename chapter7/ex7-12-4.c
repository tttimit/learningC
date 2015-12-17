/* ex7-12-4.c -- 用if else语句读取输入，直到#。用一个感叹号代替句号，
用2个感叹号代替原有的感叹号，最后报告进行了多少次替代*/
#include <stdio.h>
#define G1 '!'
#define G2 "!!"
int main(void)
{
	char ch;
	int count = 0;

	while((ch = getchar()) != '#')
	{
		if(ch == '.')
		{
			ch = '!';
			count++;
		}
		else if(ch == '!')
		{
			ch = '!';
			count++;
		}
	}
	printf("总共进行了%d次替代！\n", count);
	return 0;
}
