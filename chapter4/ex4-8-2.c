/* ex4-8-2.c -- 按照要求以各种姿势进行打印 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40];
	int len;
	
	printf("Please enter your name\n");
	scanf("%s", name);
	printf("Your name is *\"%s\"*.\n", name);
	printf("Your name is *\"%20s\"*.\n", name);
	printf("Your name is *\"%-20s\"*\n", name);
	
	len = strlen(name) + 3;	
	printf("Your name is *%*s*.\n", len, name);
	return 0;
}
