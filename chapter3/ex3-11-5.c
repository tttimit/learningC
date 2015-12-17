/* 一年大约有3.156E7s。编写一个程序，要求输入您的年龄，然后显示该年龄合多少秒。*/
#include <stdio.h>
int main(void)
{
 	int age;

	printf("Please enter your age:");
	scanf("%d", &age);
	printf("You have lived %e seconds.\n", 3.156e7 * age);
	return 0;
}
