/* min_sec.c -- 把秒转换为分钟和秒 */
#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
	int ori_sec, sec;
	int min;
	printf("请输入秒数：(输入0并按回车退出)\n");
	scanf("%d", &ori_sec);
	while(ori_sec != 0)
	{
		min = ori_sec / SEC_PER_MIN;
		sec = ori_sec % min;
		printf("%d seconds is %d min(s) %d sec.\n", ori_sec, min, sec);
		printf("请输入秒数：(输入0并按回车退出)\n");
		scanf("%d", &ori_sec);
	}		
	return 0;
}
