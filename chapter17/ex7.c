/* ex7.c -- exercise 7 -- 编写一个程序，能打开、读入一个文本文件并统计文件中每个
单词出现的次数。用改进的二叉搜索树存储单词及其出现的次数。程序读入文件后，会提供
一个有三个选项的菜单。第一个选项为列出所有的单词连同其出现的次数。第二个选项为让
您输入一个单词，程序报告该单词在文件中出现的次数。第三个选项为退出。 */
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
