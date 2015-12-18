#include <stdio.h>
int main(void)
{
	char a = 'T';
	int b = 23123;

	printf("the size of a is %lu.\n", sizeof(a));//%lud 表示long unsigned 整数 的格式。
	printf("the size of b is %lu.\n", sizeof(b));
	return 0;
}
