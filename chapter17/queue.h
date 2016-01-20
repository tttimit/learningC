/* queue.h -- example17-6.c -- 队列接口 */
#pragma c9x on
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

/* 在此处插入Item的类型定义 */
/* 例如： */
//typedef int Item;
/* 或: typedef struct item{
			int gumption;
			int charisma;
		} Item;			*/
typedef struct item{
	long arrive;
	int processtime;
} Item;

#define MAXQUEUE 10

typedef struct node{
	Item item;
	struct node * next;
} Node;

typedef struct queue{
	Node * front;   //指向队列首的指针
	Node * rear;    //指向队列尾的指针
	int items;      //队列中项目的个数
} Queue;

/* 	初始化队列
    pq指向一个队列
    该队列被初始化为空队列*/
void InitializeQueue(Queue * pq);

/*  检查队列是否已满
    pq指向一个已初始化过的队列
    如果该队列已满，返回true；否则返回false */
bool QueueIsFull(const Queue * pq);

/*  检查队列是否为空
    pq指向一个已初始化过的队列
    如果该队列尾空，返回true；否则返回false*/
bool QueueIsEmpty(const Queue * pq);

/*  确定队列中项目的个数
    pq指向一个先前已经初始化过的队列
    返回队列中项目的个数 */
unsigned int QueueItemCount(const Queue * pq);

/*  向队列尾添加项目
    pq指向一个先前已初始化过的队列
    item是要添加到队列尾端的项目
    如果队列未满，item被添加到队列尾部，函数返回true；
    否则，不改变队列，函数返回false */
bool EnQueue(Item item, Queue * pq);

/*  从队列首端删除项目
    pq指向一个先前已初始化过的队列
    如果队列非空，队列手段的项目被复制到*pitem，并被从队列中删除，
    函数返回true；如果这个操作使队列尾空，把队列重置为空队列，如果队列
    开始时为空，不改变队列，函数返回false */
bool DeQueue(Item *pitem, Queue * pq);

/* 清空队列
    pq指向一个先前已初始化的队列
    队列被清空  */
void EmptyTheQueue(Queue * pq);

#endif





















