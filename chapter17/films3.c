/* films3.c -- example17-4.c -- ʹ��ADT�������� */
/* Ҫ��list.cһ�����*/
#include <stdio.h>
#include <stdlib.h> //exit()
#include "list.h"   //List, Item
void showmoveis(Item item);

int main(void)
{
	List movies;
	Item temp;
	/* ��ʼ��*/
	InitializeList(&movies);
	if(ListIsFull(&movies))
	{
		fprintf(stderr, "No momory available! Bye!\n");
		exit(1);
	}
	
	/* �ռ����洢*/
	puts("Enter first movie title: ");
	while(gets(temp.title) != NULL && temp.title[0] != '\0')
	{
		puts("Enter your rating <0-10>: ");
		scanf("%d", &temp.rating);
		while(getchar() != '\n')
			continue;
		if(AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}
		if(ListIsFull(&movies))
		{
			puts("The list is now full.");
			break;
		}
		puts("Enter next movie title (empty line to stop): ");
	}
	
	/* ��ʾ */
	if(ListIsEmpty(&movies))
		printf("No data entered.");
	else
	{
		printf("Here is the movie list: \n");
		Traverse(&movie, showmovies);
	}
	printf("You entered %d movies.\n", ListItemCount(&movies));
	
	/* ���*/
	EmptyTheList(&movies);
	printf("Bye!\n");
	return 0;
}

void showmovies(Item item)
{
	printf("Movie: %s Rating: %d\n", item.title, item.rating);
}
