/* ex6-16-3.c -- 打印题目要求的结果 */
#include <stdio.h>
int main(void)
{
	int i, j;

	for(i = 1; i <= 6; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%c", 'F' - j);
		}
		printf("\n");
	}
	return 0;
}
