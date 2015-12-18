/* convert.c -- 自动类型转换 */
#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'A'; //line 9
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);	//line 10
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 * ch + i;
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
	ch = 5212205.17;
	printf("Now ch = %c\n", ch);
	return 0;
}
