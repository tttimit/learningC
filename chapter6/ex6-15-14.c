/* ex6-15-14.c -- 检查打印 */
#include <stdio.h>
int main(void)
{
	int k;

	for(k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k*k < 26; k += 2, printf("Now k is %d\n", k))
		printf("k is %d in the loop\n", k);
	return 0;
}
