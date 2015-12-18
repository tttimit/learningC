/* ex6-16-6.c -- 将一个字符串读入一个字符数组，并以反向打印 */
#include <stdio.h>
int main(void)
{
	int len, i;
	char str[40];

	printf("请输入一个单词：");
	scanf("%s", str);
	len = strlen(str);
	for(i = len-1 ; i >= 0 ; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
