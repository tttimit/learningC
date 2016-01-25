/* list.c -- example17-5.c -- ��ͷ�ļ���ʵ�� */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* �ֲ�����ԭ�� */
static void CopyToNode(Item item, Node * pnode);

/* �ӿں��� */
/* ���б�����Ϊ���б� */
void InitializeList(List * plist)
{
	plist->head = NULL;
	// plist->end = NULL;
}

/* ����б�Ϊ���򷵻��� */
bool ListIsEmpty(const List * plist)
{
	if(plist == NULL)
		return true;
	else
		return false;
}

/* ����б������򷵻��� */
bool ListIsFull(const List * plist)
{
	/* �������뵽�ռ�ʱ��˵�����ǿգ������뵽�Ŀռ䷵����NULL����˵��û�пռ���
	Ҳ����List������ */
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

/* ���ؽڵ��� */
unsigned int ListItemCount(const List * plist)
{
	unsigned int count = 0;
	Node * pnode = plist;  /*���õ��б�Ŀ�ʼ��*/

	while(pnode != NULL)
	{
		++count;
		pnode = pnode->next;  /* ��pnode����Ϊ��һ���ڵ� */
	}
	return count;
}

/* ���������Ŀ�Ľڵ㣬��������ӵ� */
/* ��plistָ����б�������ʵ�ַ�����β�� */
/* ����ӵ��޸ģ�������������ָ��β����ָ�룬����ֱ�����*/
bool AddItem(Item item, List * plist)
{
	Node * pnew;
	Node * scan = plist;
	// Node * end = plist->end;
	pnew = (Node *)malloc(sizeof(Node));
	if(pnew == NULL)
		return false;       /* ʧ��ʱ�˳����� */
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
	
//	if(scan == NULL)        /* ���б� */
//		* plist = pnew;     /*��˰�pnew�����б�ͷ�� */
//	else
//	{
//		while(scan->next != NULL)
//			scan = scan->next;  /* �ҵ��б��β */
//		scan->next = pnew;      /* ��pnew��ӵ�ĩβ�� */
//	}
//	return true;
}

/* ����ÿ���ڵ㲢�����Ƿֱ�ִ����pfunָ��ĺ��� */
void Traverse(const List * plist, void (* pfun)(Item item))
{
	Node * pnode = plist;
	while(pnode != NULL)
	{
		(* pfun)(pnode->item);
		pnode = pnode->next;
	}
}

/* �ͷ���malloc����������ڴ�*/
/* ���б�ָ������ΪNULL */
void EmptyTheList(List * plist)
{
	Node * psave;
	while(plist != NULL)
	{
		psave = (plist)->next;    /*������һ���ڵ�*/
		free(plist);     		  /*�ͷŵ�ǰ�ڵ�*/
		plist = psave;             /*ǰ������һ�ڵ�*/
	}
}

/* �ֲ��������� */
/* ��һ����Ŀ���Ƶ�һ���ڵ��� */
static void CopyToNode(Item item, Node * pnode)
{
	pnode-> item = item;     /* �ṹ���� */
}
