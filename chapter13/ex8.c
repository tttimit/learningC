/* ex8.c -- ��дһ�γ��򣬽�һ���ַ���������߶���ļ�����Ϊ�����в���������ַ���
û�в������棬�����ȡ��׼�����ļ������򣬳���һ�δ�ÿ���ļ���Ȼ�󱨸�ÿ���ļ���
���ַ����ֵĴ������ļ������ַ�����Ҳ�����ֵһ�𱨸档�����а��������飬��ȷ����
����Ŀ�Ƿ���ȷ���Ƿ��ܴ��ļ���������ܴ��ļ�������Ҫ������һ���Ȼ�����������
һ���ļ��� */
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
