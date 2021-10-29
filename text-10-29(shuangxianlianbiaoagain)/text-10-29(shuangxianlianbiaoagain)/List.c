#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//初始化双向链表
LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode*));
	phead->next = phead;
	phead->prev = phead;
	
	return phead;
}
//打印双向链表
void ListPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ",cur->data);
		cur = cur->next;
	}
	printf("\n");
}
//开辟一个空间存放数字x
LTNode* BuyList(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;

	return newnode;
}

//首插x
void  ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyList(x);
	LTNode* posnext = phead->next;
	newnode->next = posnext;
	posnext->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
}
//尾插
void  ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyList(x);
	LTNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}
//首删
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* pheadnext = phead->next;
	phead->next = pheadnext->next;
	pheadnext->prev = phead;

	free(pheadnext);
}
//尾删
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev;
	tail->prev->next = phead;
	phead->prev = tail->prev;

	free(tail);
}


//找到链表中数x的位置
LTNode* FindList(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//在数x 的位置前插入一个数y
void ListInsert(LTNode* phead, LTDataType x, LTDataType y)
{
	assert(phead);
	LTNode* pos = FindList(phead, x);
	LTNode* newnode = BuyList(y);
	LTNode* posprev = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
	posprev->next = newnode;
	newnode->prev = posprev;

}
//在数x 的位置删除前一个数
void ListErease(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* pos = FindList(phead, x);
	LTNode* posprev = pos->prev;
	LTNode* posprevprev = posprev->prev;
	posprevprev->next = pos;
	pos->prev = posprevprev;

	free(posprev);
}

