#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//初始化双向链表
LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
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
//开辟一个空间存放要插入的数字x
LTNode* BuyListNode(LTNode* x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;

}
//尾插
void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;


}
//首插
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* posnext = phead->next;
	newnode->next = posnext;
	posnext->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
}
//尾删
void ListPopBack(LTNode* phead)
{
	assert(phead);
	LTNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;

	free(tail);
}
//首删
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* next = phead->next;
	LTNode* nextNext = next->next;
	phead->next = nextNext;
	nextNext->prev = phead;

	free(next);
}
//找到链表中x的位置
LTNode* ListFind(LTNode* phead, LTDataType x)
{
	LTNode* cur = phead->next;
	while (cur!=phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//在任意x的位置前面插入y
void ListInsert(LTNode* phead, LTNode* pos, LTDataType y)
{
	LTNode* newnode = BuyListNode(y);
	/*LTNode* pos = ListFind(phead,x);*/
	LTNode* posprev = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
	posprev->next = newnode;
	newnode->prev = posprev;
}
//在任意x的位置删除前面一个数
void ListErase(LTNode* phead, LTNode* pos)
{
	assert(phead);
	LTNode* posprev = pos->prev;
	LTNode* posprevprev = posprev->prev;
	posprevprev->next = pos;
	pos->prev = posprevprev;

	free(posprev);
}

