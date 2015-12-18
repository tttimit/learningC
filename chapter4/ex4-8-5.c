/* ex4-8-5.c -- 要求输入名字和姓氏，在下一行打印出对应的字符数 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char lname[40], fname[40];
	int len1, len2;

	printf("Please enter you name.\n");
	scanf("%s %s", fname, lname);
	len1 = strlen(fname);
	len2 = strlen(lname);
	printf("%*s %*s\n", len1, fname, len2, lname);
	printf("%-*d %-*d\n", len1, len1, len2, len2);
	return 0;
}
