/* cypher2.c -- 改变输入，只保留非字母字符 */
#include <stdio.h>
#include <ctype.h>  //为isalpha()提供原型，判断一个字符是否是字母
int main(void)
{
	char ch;

	while((ch = getchar()) != '\b')
	{
		if(isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);
	return 0;
}
