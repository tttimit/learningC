/* ex8-3.c -- 读取遗传输入流直到遇到EOF，报告其中的大写字母个数
和小写字母个数*/
#include <stdio.h>
#include <ctype.h> //提供大小写判断 islower()  isupper()
int main(void)
{
	int ch;
	int ct_lower = 0, ct_upper = 0;

	while((ch = getchar()) != EOF)
	{
		if(islower(ch))
		{
			ct_lower++;
		}
		else if(isupper(ch))
		{
			ct_upper++;
		}
	}
	printf("大写字母%d个，小写字母%d个。\n", ct_upper, ct_lower);
	return 0;
}
