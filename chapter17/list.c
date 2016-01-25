/* list.c -- example17-5.c -- 对头文件的实现 */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* 局部函数原型 */
static void CopyToNode(Item item, Node * pnode);

/* 接口函数 */
/* 把列表设置为空列表 */
void InitializeList(List * plist)
{
	plist->head = NULL;
	// plist->end = NULL;
}

/* 如果列表为空则返回真 */
bool ListIsEmpty(const List * plist)
{
	if(plist == NULL)
		return true;
	else
		return false;
}

/* 如果列表已满则返回真 */
bool ListIsFull(const List * plist)
{
	/* 当能申请到空间时，说明不是空；当申请到的空间返回了NULL，则说明没有空间了
	也就是List已满？ */
	Node * pt;
	bool full;

	pt = (Node *) malloc(sizeof(Node));
	if(pt == NULL)
		full = true;
	else
		full = false;
	free(pt);
	return full;
}

/* 返回节点数 */
unsigned int ListItemCount(const List * plist)
{
	unsigned int count = 0;
	Node * pnode = plist;  /*设置到列表的开始处*/

	while(pnode != NULL)
	{
		++count;
		pnode = pnode->next;  /* 把pnode设置为下一个节点 */
	}
	return count;
}

/* 创建存放项目的节点，并把它添加到 */
/* 由plist指向的列表（较慢的实现方法）尾部 */
/* 新添加的修改，由于现在有了指向尾部的指针，所以直接添加*/
bool AddItem(Item item, List * plist)
{
	Node * pnew;
	Node * scan = plist;
	// Node * end = plist->end;
	pnew = (Node *)malloc(sizeof(Node));
	if(pnew == NULL)
		return false;       /* 失败时退出函数 */
	CopyToNode(item, pnew);
	pnew->next = NULL;
	if(plist == NULL)
    {
        plist = pnew;
        // plist->end = pnew;
    }
	// else
	// {
	// 	end->next = pnew;
	// 	end = pnew;
	// }
    else
    {
        while(scan != NULL)
            scan = scan->next;
        scan->next = pnew;            
    }
	return true;
	
//	if(scan == NULL)        /* 空列表 */
//		* plist = pnew;     /*因此把pnew放在列表头部 */
//	else
//	{
//		while(scan->next != NULL)
//			scan = scan->next;  /* 找到列表结尾 */
//		scan->next = pnew;      /* 把pnew添加到末尾处 */
//	}
//	return true;
}

/* 访问每个节点并对它们分别执行由pfun指向的函数 */
void Traverse(const List * plist, void (* pfun)(Item item))
{
	Node * pnode = plist;
	while(pnode != NULL)
	{
		(* pfun)(pnode->item);
		pnode = pnode->next;
	}
}

/* 释放由malloc（）分配的内存*/
/* 把列表指针设置为NULL */
void EmptyTheList(List * plist)
{
	Node * psave;
	while(plist != NULL)
	{
		psave = (plist)->next;    /*保存下一个节点*/
		free(plist);     		  /*释放当前节点*/
		plist = psave;             /*前进到下一节点*/
	}
}

/* 局部函数定义 */
/* 把一个项目复制到一个节点中 */
static void CopyToNode(Item item, Node * pnode)
{
	pnode-> item = item;     /* 结构复制 */
}
