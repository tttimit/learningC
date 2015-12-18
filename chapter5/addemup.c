/* addemup.c -- 4中类型的语句 */
#include <stdio.h>
int main(void) /* 求出前20个整数的和 */
{
	int count, sum; /*  声明语句  */
	
	count = 0; /*  赋值语句 */
	sum = 0;
	while(count++ < 20)  /* while语句*/
		sum = sum + count;
	printf("sum = %d\n", sum);  /* 函数语句 */
	return 0;
}
