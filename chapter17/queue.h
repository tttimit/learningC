/* queue.h -- example17-6.c -- ���нӿ� */
#pragma c9x on
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

/* �ڴ˴�����Item�����Ͷ��� */
/* ���磺 */
//typedef int Item;
/* ��: typedef struct item{
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
	Node * front;   //ָ������׵�ָ��
	Node * rear;    //ָ�����β��ָ��
	int items;      //��������Ŀ�ĸ���
} Queue;

/* 	��ʼ������
    pqָ��һ������
    �ö��б���ʼ��Ϊ�ն���*/
void InitializeQueue(Queue * pq);

/*  �������Ƿ�����
    pqָ��һ���ѳ�ʼ�����Ķ���
    ����ö�������������true�����򷵻�false */
bool QueueIsFull(const Queue * pq);

/*  �������Ƿ�Ϊ��
    pqָ��һ���ѳ�ʼ�����Ķ���
    ����ö���β�գ�����true�����򷵻�false*/
bool QueueIsEmpty(const Queue * pq);

/*  ȷ����������Ŀ�ĸ���
    pqָ��һ����ǰ�Ѿ���ʼ�����Ķ���
    ���ض�������Ŀ�ĸ��� */
unsigned int QueueItemCount(const Queue * pq);

/*  �����β�����Ŀ
    pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
    item��Ҫ��ӵ�����β�˵���Ŀ
    �������δ����item����ӵ�����β������������true��
    ���򣬲��ı���У���������false */
bool EnQueue(Item item, Queue * pq);

/*  �Ӷ����׶�ɾ����Ŀ
    pqָ��һ����ǰ�ѳ�ʼ�����Ķ���
    ������зǿգ������ֶε���Ŀ�����Ƶ�*pitem�������Ӷ�����ɾ����
    ��������true������������ʹ����β�գ��Ѷ�������Ϊ�ն��У��������
    ��ʼʱΪ�գ����ı���У���������false */
bool DeQueue(Item *pitem, Queue * pq);

/* ��ն���
    pqָ��һ����ǰ�ѳ�ʼ���Ķ���
    ���б����  */
void EmptyTheQueue(Queue * pq);

#endif





















