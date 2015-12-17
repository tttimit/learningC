/* ex7-12-6.c -- 编写一个程序读取输入，直到#，并报告序列ei出现的次数*/
#include <stdio.h>
int main(void)
{
	char prev, ch;
	int count = 0;

	printf("请输入字符，输入#结束.\n");
	while((ch = getchar()) != '#')
	{
		if(ch == 'e')
		{
			prev = 'e';
		}
		else if(ch == 'i' && prev == 'e')
		{
			count++;
			prev = 'a';
		}
		else
		{
			prev = 'a';	//置为其它
		}
	}
	printf("ei一共出现了：%d次。\n", count);
	return 0;
}
