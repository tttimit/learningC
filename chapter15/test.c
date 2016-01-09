#include <stdio.h>
char * num2bstr(char *res_str, int num);
int main(void)
{
	unsigned int a, b;
	char str[33];
	a = 10;
	b = 25;
	
	printf("~a:%d, ~b:%d\n", ~a, ~b);
	printf("~a:%s\n", num2bstr(str, a ^ 255));
//	printf("a & b: %d\n", a&b);
//	printf("a | b: %d\n", a|b);
//	printf("a ^ b: %d\n", a^b);
}

char * num2bstr(char *res_str, int num)
{
	int count = 0;
	char str[81];
	int value, remain;

	remain = num % 2;
	num /= 2;
	str[0] = remain == 1?'1':'0';
	while(num != 0)
	{
		remain = num % 2;
		str[++count] = remain == 1?'1':'0';
		num /= 2;
	}

	int i;
	for(i = 0 ; i <= count; i++)
	{
		res_str[i] = str[count - i];
	}
	res_str[count+1] = '\0';

	printf("original num is: %d\n", num);
	printf("result str is: %s\n", res_str);
	return res_str;
}
