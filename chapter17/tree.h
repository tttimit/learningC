/* tree.h -- example17-10.c -- ����������*/
/* ���в���������ͬ����Ŀ */
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>
#include "list.h"

/* ���԰�Item���¶���Ϊ���ʵ����� */
typedef struct item
{
	char petname[20];
	/*char petkind[20];*/
    List kindList;
} Item; 

/*Ϊ �����ϰ7��д�Ļ���������
typedef struct item 
{
	char word[20];
	int count;
} Item;	*/

#define MAXITEMS 100

typedef struct node
{
	Item item;
	struct node * left;     //ָ�����֧��ָ��
	struct node * right;    //ָ���ҷ�֧��ָ��
} Node;

typedef struct tree
{
	Node * root;
	int size;
} Tree;

void InitializeTree(Tree * ptree);

bool TreeIsEmpty(const Tree * ptree);

bool TreeIsFull(const Tree * ptree);

int TreeItemCount(const Tree * ptree);

bool AddItem(Item * pi, Tree * ptree);

bool InTree(const Item * pi, const Tree * ptree);

bool DeleteItem(const Item * pi, Tree * ptree);

void Traverse(const Tree * ptree, void (* pfun)(Item item));

void DeleteAll(Tree * ptree);

int GetCount(const Item * pi, Tree * ptree);

#endif
