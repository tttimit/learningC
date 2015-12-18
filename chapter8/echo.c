/* echo.c -- 重复输入，即回显输入 */
#include <stdio.h>
int main(void)
{
	char ch;

	while((ch = getchar()) != '#')
		putchar(ch);
	return 0;
}
