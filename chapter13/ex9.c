/* ex9.c -- �޸ĳ����嵥13.3�еĳ��򣬴�1��ʼ�����ݼ����б��˳��Ϊÿ�����ʱ�š����ٴ�
���г���ʱ��ȷ���µĵ��ʱ�Ž���ǰ��ı�ſ�ʼ��
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


