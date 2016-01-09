/* ex2.c -- ��дһ�����򣬸ó���ʹ�������в�����ȡ�����������ַ���������ӡ��
ÿ����ʹ�� ~ ������Ľ�����Լ�����������ʹ��&��|�� ^ ������Ľ����ʹ�ö�����
�ַ�����ʽ��ʾ����� */
/*
    ֱ��ȡ���ᰴ 00000000 00000000 00000000 00000000����32λȫ��ȡ�����ҵ�ת��
    �����Ƶķ����������������ã�����9ȡ����-10,10ȡ����-11,25ȡ����-26
    ����ʹ�����ķ�����^ 255���൱�ں�8λȫȡ����
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 81

int pp(int, int);   //������������
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
