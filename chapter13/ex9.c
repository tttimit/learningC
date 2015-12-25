/* ex9.c -- �޸ĳ����嵥13.3�еĳ��򣬴�1��ʼ�����ݼ����б��˳��Ϊÿ�����ʱ�š�
���ٴ����г���ʱ��ȷ���µĵ��ʱ�Ž���ǰ��ı�ſ�ʼ��
���������嵥13.3 addaword.c 
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
	if(fclose(fp) != 0��
		fprintf(stderr, "Error closing file\n");
	return 0;
}   */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int getnumber(FILE *);  //���Ի�ȡ֮ǰ�ĵ��ʱ��
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
    rewind(fp);                     //�����������Ҫ
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

