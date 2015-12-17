/* 输入水的夸脱数，计算这么多水中有多少个水分子 */
#include <stdio.h>
int main(void)
{
	int  amount;

	printf("Please enter the kuatuo:\n");
	scanf("%d", &amount);
	printf("%d kuatuo water have %e ge shuifenzi.\n", amount, 950 * amount * 3.0e-23);
	return 0;
}
