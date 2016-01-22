/* stack.h -- 复习题5 -- 设计一个栈ADT并完成其编程接口 */
#pragma c9x on
#ifndef _STACK_H_
#define _STACK_H_
#include <stdbool.h>

typedef int Item;   //数据部分

/* 节点 */
typdef struct node
{
	Item item;
	struct node * last; //栈中，本元素下面的元素，远离栈顶方向的下一个元素
} Node;

/* 栈 */
typedef struct stack
{
	Node * top; //栈顶元素的地址
	int size;
} Stack;

//初始化stack
void InitializeStack(Stack * ps);

//判满
bool StackIsFull(Stack * ps);

//判空
bool StackIsEmpty(Stack * ps);

//确定元素个数
int StackItemCount(Stack * ps);

//出栈一个元素
bool PopStack(Stack * ps);

//入栈元素item
bool PushStack(Item item, Stack * ps);

//清空栈
void EmptyTheStack(Stack * ps);

#endif
