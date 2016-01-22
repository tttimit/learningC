/* stack.h -- ��ϰ��5 -- ���һ��ջADT��������̽ӿ� */
#pragma c9x on
#ifndef _STACK_H_
#define _STACK_H_
#include <stdbool.h>

typedef int Item;   //���ݲ���

/* �ڵ� */
typdef struct node
{
	Item item;
	struct node * last; //ջ�У���Ԫ�������Ԫ�أ�Զ��ջ���������һ��Ԫ��
} Node;

/* ջ */
typedef struct stack
{
	Node * top; //ջ��Ԫ�صĵ�ַ
	int size;
} Stack;

//��ʼ��stack
void InitializeStack(Stack * ps);

//����
bool StackIsFull(Stack * ps);

//�п�
bool StackIsEmpty(Stack * ps);

//ȷ��Ԫ�ظ���
int StackItemCount(Stack * ps);

//��ջһ��Ԫ��
bool PopStack(Stack * ps);

//��ջԪ��item
bool PushStack(Item item, Stack * ps);

//���ջ
void EmptyTheStack(Stack * ps);

#endif
