/* ex4.c -- ��дһ���������ú�����������int������һ��ֵ��һ��λ��λ�á����ָ��
��λ�ϵ�ֵ��1����ú�������1�����򷵻�0.�ڳ����в��Ըú����� */
#include <stdio.h>
int checkvalue(int, int);

int main(void)
{
	int num, pos, result;
	
	printf("Please enter a numer.\n");
	scanf("%d", &num);
	printf("Please enter a postion.\n");
	scanf("%d", &pos);
	result = checkvalue(num, pos);
	printf("the value at pos %d in %d is %d.\n", pos, num, result);

	return 0;
}

int checkvalue(int num, int pos)
{
	int remain;
	int index;
	
	index = 31;
	while(num != 0)
	{
		remain = num % 2;
		if(index-- == 31 - pos)
		{
			if(remain == 1)
				return 1;
			else
				return 0;
		}
		num /= 2;
	}

	return 0;
}
