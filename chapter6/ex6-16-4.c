/* ex6-16-4.c -- 这次是真的一个金字塔 */
#include <stdio.h>
int main(void)
{
	int i, space, up, down;
	char ch;

	printf("请输入塔尖字符：\n");
	scanf("%c", &ch);

	for(i = 1; i < 6; i++)	//处理行数
	{
		for(space = 5 - i; space > 0 ; space-- ) //处理空格
		{
			printf(" ");
		}

		for(up = 0; up < i; up++)	//处理升序字符
		{
			printf("%c", ch + up);
		}

		for(down = 1; down < i ; down++) //处理降序字符
		{
			printf("%c", ch + up - 1 - down);
		}
		printf("\n");	//换行
	}
	return 0;
}
	
