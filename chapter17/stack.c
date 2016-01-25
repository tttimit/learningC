/* stack.c -- ��stack.h��ʵ�� */
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


void InitializeStack(Stack * ps)
{
	ps->top = NULL;
	ps->size = 0;
}

bool StackIsFull(Stack * ps)
{
	return ps->size == MAXSIZE;
}

bool StackIsEmpty(Stack * ps)
{
	return ps->size == 0;
}

int StackItemCount(Stack * ps)
{
	return ps->size;
}

//��ջһ��Ԫ��
bool PopStack(Item * item, Stack * ps)
{
	Node * node;
		
	if(StackIsEmpty(ps))
	{
		return false;
	}
	* item = ps->top->item;   //����ǰջ����Ԫ���ó���
	node = ps->top;
	ps->top = ps->top->next;    //��ջ��ָ��ԭջ������һ��Ԫ��
	free(node);
	ps->size--;

	return true;
}

bool PushStack(Item item, Stack * ps)
{
	if(StackIsFull(ps))
	{
//		fprintf(stderr, "Stack is full, cannot put an element in.\n");
		return false;
	}
	Node * new_node;
	new_node = (Node *)malloc(sizeof(Node));
	if(new_node == NULL)
	{
		fprintf(stderr, "Unable to allocate memory.\n");
		return false;
	}
	new_node->item = item;
	if(!StackIsEmpty(ps))
		new_node->next = ps->top;
	else
		new_node->next = NULL;
	ps->top = new_node;
	ps->size++;

	return true;
}

void EmptyStack(Stack * ps)
{
	Item item;
	if(StackIsEmpty(ps))
		fprintf(stderr, "The stack is already empty.\n");
	while(!StackIsEmpty(ps))
		PopStack(&item, ps);
}

