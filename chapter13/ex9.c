/* ex9.c -- 修改程序清单13.3中的程序，从1开始，根据加入列表的顺序为每个单词编号。
当再次运行程序时，确保新的单词编号接着前面的编号开始。
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
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int getnumber(FILE *);  //尝试获取之前的单词编号
int main(void)
{
    FILE * fp;
    char words1[MAX];
    int number;
    
    if((fp = fopen("words1", "a+")) == NULL)
    {
        fprintf(stderr, "Can't open file \"words\"!\n");
        exit(EXIT_FAILURE);
    }
    number = getnumber(fp);
    printf("get number %d from file.\n", number);
    fputs("Enter words to add to the file; press the Enter\n", stdout);
    fputs("Key at the beginning of a line to terminate.\n", stdout);
    while(gets(words1) != NULL && words1[0] != '\0')
    {
        fprintf(fp, "%d:%s\n", number++, words1);
    }
    fputs("File contents:\n", stdout);
    rewind(fp);                     //这个函数很重要
    while(fgets(words1, MAX, fp) != NULL)
    {
        fprintf(stdout, "%s", words1);
    }
    printf("Done. Thanks for using.\n");
    fclose(fp);

    return 0;
}

int getnumber(FILE * fp)
{
    char words[MAX];
   int count = 1;
    
    while(fscanf(fp, "%s ", words) == 1)
    {
        count++;
    }

    return count;
}

