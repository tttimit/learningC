/* ex8-5.c -- 二分法猜用户的输入，范围是0-100 */
#include <stdio.h>
int main(void)
{
	int start = 0, end = 100;
	char ch;

	printf("请在心中挑一个0-100之间的数字，我将猜出这个数字。\n");
	printf("如果我猜大了请输入d，如果我猜小了请输入x，如果猜中请输入y。\n");
	printf("您挑选的数字是%d吗？\n", (start + end) / 2);
	scanf("%c", &ch);
	while(ch != 'y')
	{
		if(ch == 'd')
		{	
			end = (start + end) / 2;
			printf("那么，您挑选的数字是%d吗？\n", (start + end) / 2);
		}
		else if(ch == 'x')
		{	
			start = (start + end ) / 2;
			printf("那么，您挑选的数字是%d吗？\n", (start + end) / 2);
		}
		scanf("%c", &ch);
	}
	printf("您选择数字是%d！\n", (start + end) / 2 );
	return 0;
}
