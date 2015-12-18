/* file_eof.c -- 打开一个文件并显示其内容 */
#include <stdio.h>
#include <stdlib.h>		//为了使用exit()
int main()
{
	int ch;
	FILE * fp;
	char fname[50];		//存放文件名

	printf("Enter the name of the file:");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if(fp == NULL)
	{
		printf("Failed to open file. Byte\n");
		exit(1);	//终止程序
	}
	//getc(fp) 从打开的文件中获取一个字符
	while((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);			
	return 0;
}
