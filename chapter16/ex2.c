/* ex2.c -- ��дһ���������ƽ�����ĺ꣬�����в��� */
#include <stdio.h>
#define TH(X, Y) 1 / ((1/X) + (1/Y))

int main(void)
{
	float a = 5;
	float b = 2;
	
	printf("%f �� %f�ĵ���ƽ����Ϊ��%.4f\n", a, b, TH(a, b));
	
	return 0;
}
