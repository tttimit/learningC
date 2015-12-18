/* ex6-16-1.c -- 创建一个长度为26的数组，并存储26个小写字母，并能够显示数组的内容 */
#include <stdio.h>
int main(void)
{
	char alphabet[26];
	int i;

	for(i=0; i < 26; i++)
		alphabet[i]='a'+i;
	
	for(i=0; i<26 ;printf("%c",alphabet[i]),i++);
	printf("\n");
	return 0;
}
