/* paint.c -- 使用条件运算符 */
#include <stdio.h>
#define CONVNERACE 200 // 每罐油漆可喷的平方英尺数
int main(void)
{
	int sq_feet;
	int cans;

	printf("Enter number of square feet to be painted: \n");
	while(scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / CONVNERACE;
		cans +=((sq_feet % CONVNERACE == 0)) ? 0 : 1;
		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can":"cans");
		printf("Enter next value (q to quit):\n");
	}
	return 0;
}
