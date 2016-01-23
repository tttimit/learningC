/* ex1.c -- �޸ĳ����嵥17.2��ʹ��������������������ʾ�б�һ�ַ��������б�
�ܹ���˫���������һ����ʹ�õݹ� */

/* ������ֱ�Ӱ�17.2�ĳ���films2.c�����ƹ����������ַ����ֱ���һ��
��������Ҿ�ʹ��ʵ��˫����� */
#include <stdio.h>
#include <stdlib.h>     //malloc()
#include <string.h>     //strcpy()
#define TSIZE 45
struct film{
	char title[TSIZE];
	int rating;
	struct film * next;
	struct film * prev;
};

int main(void)
{
	struct film * head = NULL;
	struct film * rear = NULL;
	struct film * prev, * current, * next;
	char input[TSIZE];

	puts("Enter first movei title: ");
	while(gets(input) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		if(head == NULL)
		{
			head = current;
			rear = current;
		}
		else
		{
			prev->next = current;
			rear = current;
			current->prev = prev;
		}
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>: ");
		scanf("%d", &current->rating);
		while(getchar() != '\n')
			continue;
		puts("Enter next movie title (empty to quit) :");
		prev = current;
	}

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
	puts("----reverse order-----");
	current = rear;
	while(current != NULL)
	{
		printf("Movie: %s Rating: %d\n", current->title, current->rating);
		current = current->prev;
	}

	current = head;
	while(current != NULL)
	{
		free(current);
		current = current->next;
	}
	printf("Bye!\n");

	return 0;
}


