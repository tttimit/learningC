/* example16-11.c --  doubincl.c -- ���ΰ���ͬһͷ�ļ� */
#include <stdio.h>
#include "example16-10.h"
#include "example16-10.h"   //��С�����ΰ���ͬһͷ�ļ�

int main(void)
{
	names winner = {"Less", "Ismoor"};
	printf("The winner is %s %s.\n", winner.first, winner.last);
	
	return 0;
}



