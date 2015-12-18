/* ex4-8-4.c -- 要求输入身高和名字，按要求显示 */
#include <stdio.h>
int main(void)
{
	float height;
	char name[30];
	
	printf("enter you body height and name:\n");
	scanf("%f %s", &height, name);
	printf("%s, you are %.3f feet tall\n", name, height);
	return 0;
}
