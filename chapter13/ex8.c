/* ex8.c -- 编写一段程序，将一个字符、零个或者多个文件名作为命令行参数。如果字符后
没有参数跟随，程序读取标准输入文件。否则，程序一次打开每个文件，然后报告每个文件中
该字符出现的次数。文件名和字符本身也与计数值一起报告。程序中包括错误检查，以确定参
数数目是否正确和是否能打开文件。如果不能打开文件，程序要报告这一情况然后继续处理下
一个文件。 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main(int argc, char * argv[])
{
	char fname[MAX];
	FILE *fptr;
	int ch, count;
	int i;

	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s \"a char\" filename1 filename2...\n"
					"or: %s \"a char\"\n", argv[0], argv[0]);
		exit(EXIT_FAILURE);
	}
	else if(argc == 2)
	{
		printf("the char you enter is '%c'\n", *argv[1]);
		printf("Please enter the filename you want to count:\n");
		while(scanf("%s", fname) == 1 && fname[0] != '\0')
		{
			count = 0;
			if((fptr = fopen(fname, "r")) == NULL)
			{			
				fprintf(stderr, "fail to open \"%s\".\n", fname);
			}
			else
			{
				while((ch = fgetc(fptr)) != EOF)
				{
					if(*argv[1] == ch)
						count++;
				}
				printf("The number of %c in file \"%s\" is: %d.\n", *argv[1],
						fname, count);
			}
			printf("Please enter the name of the file.\n");
		}
	}
	else
	{	
		printf("the char you enter is '%c'\n", *argv[1]);
		for(i=2; i < argc; i++)
		{
			count = 0;
			if((fptr = fopen(argv[i], "r")) == NULL)
			{
				fprintf(stderr, "failed to open file \"%s\"\n", argv[i]);
			}
			else
			{
				while((ch = fgetc(fptr)) != EOF)
				{
					if(*argv[1] == ch)
						count++;
				}
				printf("The number of %c in file \"%s\" is: %d.\n", *argv[1],
							argv[i], count);
			}
		}
	}
	printf("Done. Thanks for using.\n");

}
