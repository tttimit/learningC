/* ex1.c -- ��дһ�����������ַ���ת��Ϊ����ֵ�ĺ�����Ҳ����˵�������������䣺
 char * pbin = "01001001";
 ��ô���Խ�pbin��Ϊ�������ݸ��ú�����ʹ�ú�������һ��intֵ 25�� */
#include <stdio.h>
#include <string.h>
#define LEN 81
int pp(int, int);   //������������
int bstr2num(char *);

int main(void)
{
	char str[LEN];
	
	printf("Please input a binary string.\n");
	while(gets(str) != NULL && str[0] != '\0')
	{
		printf("Your input is: %s.\n", str);
		printf("Your input equals: %d.\n", bstr2num(str));
		printf("Please input a binary string (press [enter] to quit).\n");
	}
	
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

int pp(int a, int b)
{
	int i, total;

	for(i = 0, total = 1; i < b; i++)
	{
		total *= a;
	}
	
	return total;
}


