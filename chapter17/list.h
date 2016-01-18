/* list.h -- example17-3.c -- ���б����͵�ͷ�ļ� */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

#define TSIZE 45
struct film     //����Ҫ���������
{
	char title[TSIZE];
	int rating;
};

typedef struct film Item;   //ʹ��Item��ǿ����������޸������������ֿ��Բ���
							//ֻ�޸�film���ּ��ɣ�Item����struct film

typedef struct node         //��List��˵��ÿһ��Ԫ����һ��node
{
	Item item;              //Ҫ�����������
	struct node * next;     //ָ����һ���ڵ��ָ��
} Node;                     //Node��struct node

typedef Node * List;        //ָ��Node���е�ָ�룬Ҳ����ָ��struct node��ָ��

/*  ��ʼ��һ���б�
	plistָ��һ���б�
	���б���ʼ��Ϊ���б�*/
void InitializeList(List * plist);

/* ȷ���б��Ƿ�Ϊ���б�
	plistָ��һ���ѳ�ʼ�����б�
	Ϊ�շ���true�����򷵻�false*/
bool ListIsEmpty(const List * plist);

/* 	ȷ���б��Ƿ�������
	plistָ��һ���ѳ�ʼ�����б�
	Ϊ������true�����򷵻�false*/
bool ListIsFull(const List * plist);

/* ȷ���б�����Ŀ�ĸ�����
	plistָ��һ���ѳ�ʼ�����б�
	�����б�����Ŀ�ĸ���*/
unsigned int ListItemCount(const List * plist);

/* ���б�β���һ����Ŀ��
	item��Ҫ��ӵ���Ŀ��plistָ��һ���ѳ�ʼ�����б�
	���������ӣ�����ӣ�������true�����򷵻�flase*/
bool AddItem(Item item, List * plist);

/* ��һ�������������б��е�ÿ����Ŀ��
	plistָ��һ���ѳ�ʼ�����б�pfunָ��һ��������
	�ú�������һ��Item�����޷���ֵ��pfunָ��ĺ������õ��б��е�ÿ����Ŀһ��*/
void Traverse(const List * plist, void (*pfun)(Item item));

/* 	�ͷ��ѷ�����ڴ棨����У���
	plistָ��һ���ѳ�ʼ�����б�
	������Ϊ���б������ڴ汻�ͷţ����Ҹ��б���Ϊ���б�*/
void EmptyTheList(List * plist);

#endif
