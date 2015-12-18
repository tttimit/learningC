/* ex4-8-1.c 要求输入名字和形式，然后以姓名，姓氏的格式打印。 */
#include <stdio.h>
int main(void)
{
	char fname[20], lname[20];

	printf("Please enter your name.\n");
	scanf("%s %s", fname, lname);	
	printf("So, you're %s %s, welcome!\n", fname, lname);
	return 0;
}
