/* ex8-2.c -- 读取输入字符，EOF结束。对每个输入的字符打印其ASCII编码
的十进制值。空格字符前面的字符是非打印字符，额外处理一下。*/
//程序每次按下回车或者EOF就会输出一次打印，这是由于行缓冲输入的机制决定
#include <stdio.h>
int main(void)
{
	int ch, count = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch < ' ')
		{
			switch(ch)
			{
				case '\n':
					printf("-\n:\\n\t", ch, ch);
					break;
				case '\t':
					printf("-\t:\\t\t");
					break;
				default:
					printf("-%c:^%c\t", ch, ch + 64); 
			}
		}
		else
		{
			printf("-%c:%d\t", ch, ch);
		}
		count++;
		if(count % 10 == 0)
			printf("\n");
	}
	return 0;
}
