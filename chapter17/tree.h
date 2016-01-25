/* tree.h -- example17-10.c -- 二叉搜索树*/
/* 树中不允许有相同的项目 */
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>
#include "list.h"

/* 可以把Item重新定义为合适的类型 */
typedef struct item
{
	char petname[20];
	/*char petkind[20];*/
    List kindList;
} Item; 

/*为 编程练习7改写的基本数据项
typedef struct item 
{
	char word[20];
	int count;
} Item;	*/

#define MAXITEMS 100

typedef struct node
{
	Item item;
	struct node * left;     //指向左分支的指针
	struct node * right;    //指向右分支的指针
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
