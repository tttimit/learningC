/* ex8-1.c -- 统计一个文件从开始到结束的字符数 */
#include <stdio.h>
int main(void)
{
	int ch, count = 0;

	while((ch = getchar()) != EOF)
		count++;
	printf("该文件共有%d个字符。\n", count);
	return 0;
}
