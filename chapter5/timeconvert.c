/* timeconvert.c -- 将输入的天数转化为周天 */
#include <stdio.h>
const int DAY_PER_WEEK = 7;
int main(void)
{
	int ori_day, week, day;

	printf("请输入要转换的天数（输入0或者负数来结束程序）：\n");
	scanf("%d", &ori_day);
	while(ori_day > 0)
	{
		week = ori_day / DAY_PER_WEEK;
		day = ori_day % DAY_PER_WEEK;
		printf("%d days are %d weeks, %d days.\n", ori_day, week, day);
		printf("请输入要转换的天数，输入0或者负数结束程序：\n");
		scanf("%d", &ori_day);
	}
	return 0;
}
