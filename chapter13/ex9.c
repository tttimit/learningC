/* ex9.c -- 修改程序清单13.3中的程序，从1开始，根据加入列表的顺序为每个单词编号。当再次
运行程序时，确保新的单词编号接着前面的编号开始。
附：程序清单13.3 addaword.c 
#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main(void)
{
	FILE * fp;
	char words[MAX];

	if((fp = fopen("words", "a+") == NULL)
	{
		fprintf(stdout, "Can't open \"words\" file.\n");
		exit(1);
	}
	puts("Enter words to add to the file; press the Enter");
	puts("Key at the beginning of a line to terminate.");
	while(gets(words) != NULL && words[0] != '\0')
		fprintf(fp, "%s ", words);
	puts("File contents: ");
	rewind(fp);
	while(fscanf(fp, "%s", words) == 1)
		puts(words);
	if(fclose(fp) != 0）
		fprintf(stderr, "Error closing file\n");
	return 0;
}   */


