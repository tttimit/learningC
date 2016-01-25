/* ex7.c -- exercise 7 -- ��дһ�������ܴ򿪡�����һ���ı��ļ���ͳ���ļ���ÿ��
���ʳ��ֵĴ������øĽ��Ķ����������洢���ʼ�����ֵĴ�������������ļ��󣬻��ṩ
һ��������ѡ��Ĳ˵�����һ��ѡ��Ϊ�г����еĵ�����ͬ����ֵĴ������ڶ���ѡ��Ϊ��
������һ�����ʣ����򱨸�õ������ļ��г��ֵĴ�����������ѡ��Ϊ�˳��� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

void ShowItem(Item item);
void ShowMenu(void);
int main(int argc, char * argv[])
{
	FILE * fp;
	Tree tree;
	Item item;
	int ch;
	char str[20];
	
	if(argc != 2)
	{
		fprintf(stderr, "Useage: %s filename\n", argv[0]);
		exit(1);
	}
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open %s.\n", argv[1]);
		exit(1);
	}
	InitializeTree(&tree);
	
	while(fscanf(fp, "%s", str) != EOF)
	{
		strcpy(item.word, str);
		AddItem(&item, &tree);
	}
	ShowMenu();
	while((ch = getchar()) != EOF && ch != 'q')
	{
		while(getchar() != '\n')
		{
			continue;
		}
		if(ch == 's')
		{
			Traverse(&tree, ShowItem);
		}
		else if(ch == 'g')
		{
			printf("Please enter the string you want to search:\n");
			gets(str);
			strcpy(item.word, str);
			if(InTree(&item, &tree))
			{
				printf("There are %d %s in the file.\n",
					GetCount(&item, &tree), str);
			}
			else
			{
				printf("sorry, %s doesn't exist in the file.\n", str);
			}
		}
		ShowMenu();
	}
	puts("Done. Thanks for using!");
	
	return 0;
}

void ShowMenu(void)
{
	printf("s)show all words ant their counts\n");
	printf("g)enter a word and show its counts\n");
	printf("q)quit\n");
}

void ShowItem(Item item)
{
	printf("%s - %d\n", item.word, item.count);
}
