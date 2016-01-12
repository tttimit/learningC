/* example16-11.c --  doubincl.c -- 两次包含同一头文件 */
#include <stdio.h>
#include "example16-10.h"
#include "example16-10.h"   //不小心两次包含同一头文件

int main(void)
{
	names winner = {"Less", "Ismoor"};
	printf("The winner is %s %s.\n", winner.first, winner.last);
	
	return 0;
}



