/* printchar.c -- 打印a-z */
#include <stdio.h>
int main(void)
{
	char a;

	a = 'a' - 1;
	while(++a <= 'z')
	{
		printf("%c", a);
	}
	printf("\n");
	return 0;
}
