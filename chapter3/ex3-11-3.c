/* 编写一个程序，要求输入一个ASCII码值，然后输出对应的字符 */
#include <stdio.h>
int main(void)
{
 	int value;

	printf("Please enter the value: ");
	scanf("%d", &value);
	printf("You enter %d, and the char is %c\n", value, value);
	return 0;
}
