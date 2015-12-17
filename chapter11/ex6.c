/* ex6.c -- strncpy(s1, s2, n) 函数从s2复制n个字符给s1，并且在必要的时候截断s2或为其填充额外的空字符。如果s2的长度等于或者大于n，目标字符串就没有标志结束的空字符。函数返回s1。自己编写这个函数，并在一个使用循环语句为这个函数提供输入的完整程序中进行测试。*/
#include <stdio.h>
#define MAX 81
char * strncpy(char *, char *, int);
int get_input(char *， char *, int *);
int main(void)
{
	char str1[MAX];
	char str2[MAX];
	int  len;
    char * ptr;

	while(get_input(str1, str2, &len) != 0)
	{
		printf("您的输入为%s, %s, %d'n", str1, str2, *len);
		ptr = strcpy(str1, str2, &len);
		printf("%s\n", ptr);
	}

	return 0;
}

char * strncpy(char * str1, char * str2, int * length)
{
	int i;

	for(i=0; i <length; i++)
	{
		*(str + i) = * (str2 + i);
	}
	
