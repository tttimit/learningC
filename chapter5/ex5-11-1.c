/* ex5-11-1.c -- 将分钟转换为小时加分钟 用#define或者const来创建符号常量 ，要用到while来循环接收用户的输入，当键入一个小于等于0的时间时终止循环*/
#include <stdio.h>
const int MIN_PER_HOUR = 60;
int main(void)
{
	int ori_min;
	int hour, min;

	printf("请输入要转换的分钟数，输入0来终止程序：\n");
	scanf("%d", &ori_min);
	while(ori_min > 0)
	{
		hour = ori_min / MIN_PER_HOUR;
		min = ori_min % MIN_PER_HOUR;
		printf("您输入的%d分钟，等于%d小时%d分钟.\n", ori_min, hour, min);
		printf("请输入要转换的分钟数，输入0来终止程序：\n");
		scanf("%d", &ori_min);
	}
	return 0;
}
		
