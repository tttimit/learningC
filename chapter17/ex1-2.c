/* ex1.c -- �޸ĳ����嵥17.2��ʹ��������������������ʾ�б�һ�ַ��������б�
�ܹ���˫���������һ����ʹ�õݹ� */

/* ������ֱ�Ӱ�17.2�ĳ���films2.c�����ƹ����������ַ����ֱ���һ��
����ʹ�õݹ������ */
#include <stdio.h>
#include <stdlib.h>     //malloc()
#include <string.h>     //strcpy()
#define TSIZE 45
struct film{
	char title[TSIZE];
	int rating;
	struct film * next;
};

void GetFilm(struct film * pf);

int main(void)
{
	struct film * head = NULL;
	struct film * prev, * current;
	char input[TSIZE];

	puts("Enter first movei title: ");
	while(gets(input) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		if(head == NULL)
			head = current;
		else
			prev->next = current;
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>: ");
		scanf("%d", &current->rating);
		while(getchar() != '\n')
			continue;
		puts("Enter next movie title (empty to quit) :");
		prev = current;
	}

	/* չʾ���ݮ� */
	if(head == NULL)
		printf("No data entered. ");
	else
		printf("Here is the movie list:\n");
	current = head;
	while(current != NULL)
	{
		printf("Movei: %s Rating: %d\n", current->title, current->rating);
		current = current->next;
	}
	puts("--reverse order---");
	GetFilm(head);

	/* �ͷſռ� */
	while(current != NULL)
	{
		free(current);
		current = current->next;
	}
	printf("Bye!\n");

	return 0;
}

void GetFilm(struct film * pf)
{
	if(pf->next != NULL)
		GetFilm(pf->next);
	printf("Movie: %s Rating: %d\n", pf->title, pf->rating);
}


