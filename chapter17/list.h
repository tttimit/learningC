/* list.h -- example17-3.c -- 简单列表类型的头文件 */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

#define TSIZE 45
struct film     //真正要保存的数据
{
	char title[TSIZE];
	int rating;
};

typedef struct film Item;   //使用Item来强化概念，如需修改数据其他部分可以不变
							//只修改film部分即可，Item就是struct film

typedef struct node         //对List来说，每一个元素是一个node
{
	Item item;              //要保存的数据项
	struct node * next;     //指向下一个节点的指针
} Node;                     //Node是struct node

typedef Node * List;        //指向Node序列的指针，也就是指向struct node的指针

/*  初始化一个列表，
	plist指向一个列表，
	该列表被初始化为空列表*/
void InitializeList(List * plist);

/* 确定列表是否为空列表，
	plist指向一个已初始化的列表，
	为空返回true，否则返回false*/
bool ListIsEmpty(const List * plist);

/* 	确定列表是否已满，
	plist指向一个已初始化的列表，
	为满返回true，否则返回false*/
bool ListIsFull(const List * plist);

/* 确定列表中项目的个数，
	plist指向一个已初始化的列表，
	返回列表中项目的个数*/
unsigned int ListItemCount(const List * plist);

/* 在列表尾添加一个项目，
	item是要添加的项目，plist指向一个已初始化的列表，
	如果可以添加，则添加，并返回true，否则返回flase*/
bool AddItem(Item item, List * plist);

/* 把一个函数作用于列表中的每个项目，
	plist指向一个已初始化的列表，pfun指向一个函数，
	该函数接收一个Item并且无返回值，pfun指向的函数作用到列表中的每个项目一次*/
void Traverse(const List * plist, void (*pfun)(Item item));

/* 	释放已分配的内存（如果有），
	plist指向一个已初始化的列表，
	操作后，为该列表分配的内存被释放，并且该列表被置为空列表*/
void EmptyTheList(List * plist);

#endif
