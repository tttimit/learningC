/* ex2.c -- 编写一个程序，该程序使用命令行参数读取两个二进制字符串，并打印对
每个数使用 ~ 运算符的结果，以及对这两个数使用&、|和 ^ 运算符的结果。使用二进制
字符串形式显示结果。 */
/*
    直接取反会按 00000000 00000000 00000000 00000000这种32位全部取反，我的转化
    二进制的方法对这种数不管用，而且9取反是-10,10取反是-11,25取反是-26
    可以使用异或的方法，^ 255就相当于后8位全取反了
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 81

int pp(int, int);   //计算整数的幂
int bstr2num(char *);
char * num2bstr(char *, int);

int main(int argc, char *argv[])
{
	int a, b;
	char str[LEN];
	
//	while(scanf("%d", &c) == 1)
//	{
//		printf("%d:%s\n", c, num2bstr(str, c));
//	}
	
	if(argc != 3)
	{
		fprintf(stderr, "Usage: %s str1 str2\n", argv[0]);
		exit(1);
	}
	printf("You enter %s %s\n", argv[1], argv[2]);
	a = bstr2num(argv[1]);
	b = bstr2num(argv[2]);
	
	printf("~%s:%08s ~%s:%08s\n", argv[1], num2bstr(str, ~a), argv[2], num2bstr(str, ~b));
	printf("%s & %s: %08s\n", argv[1], argv[2], num2bstr(str, a&b));
	printf("%s | %s: %08s\n", argv[1], argv[2], num2bstr(str, a|b));
	printf("%s ^ %s: %08s\n", argv[1], argv[2], num2bstr(str, a^b));

	return 0;
}

int bstr2num(char * str)
{
	int len, i;
	int value = 0;
	int po;

	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[i] == '1')
		{
			value += pp(2, len-i-1);
		}
	}

	return value;
}

char * num2bstr(char *res_str, int num)
{
	int count = 0;
	char str[81];
	int value, remain;

	remain = num % 2;
	num /= 2;
	str[0] = remain == 1?'1':'0';
//	printf("now is %d: %c\n", count, str[count]);
	while(num > 0)
	{
		remain = num % 2;
		str[++count] = remain == 1?'1':'0';
		num /= 2;
//		printf("now is %d: %c\n", count, str[count]);
	}
	
	int i;
	for(i = 0 ; i <= count; i++)
	{
		res_str[i] = str[count - i];
	}
	res_str[count+1] = '\0';

	return res_str;
}

int pp(int a, int b)
{
	int i, total;

	for(i = 0, total = 1; i < b; i++)
	{
		total *= a;
	}

	return total;
}
