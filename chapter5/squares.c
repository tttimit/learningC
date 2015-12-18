/* squares.c -- 产生钱20个整数的平方表 */
#include <stdio.h>
int main(void)
{
	int i = 1;
	
	while(i < 20)
	{
		printf("%3d squrance is %3d\n", i, i * i);
		i = i + 1;
	}
	return 0;
}                                                                      
