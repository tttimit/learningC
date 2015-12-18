/* ex8-4.c -- 统计平均单词数，直到EOF。 */
#include <stdio.h>
int main(void)
{
	int ch;
	int count = 0, total = 0;

	while((ch = getchar()) != EOF)
	{
		if(ch == ' ' || ispunct(ch))
		{
			if(total > 0)
				count++;
		}
		else
		{
			total++;
		}
	}
	printf("单词%d个，共%d个字母，平均每个单词%.2f个字母。\n", 
			count, total, (float)total/count);
	return 0;
}
