#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//��ʼ��˫������
LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode*));
	phead->next = phead;
	phead->prev = phead;
	
	return phead;
}
//��ӡ˫������
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
//����һ���ռ�������x
LTNode* BuyList(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;

	return newnode;
}

//�ײ�x
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
//β��
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
//��ɾ
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* pheadnext = phead->next;
	phead->next = pheadnext->next;
	pheadnext->prev = phead;

	free(pheadnext);
}
//βɾ
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev;
	tail->prev->next = phead;
	phead->prev = tail->prev;

	free(tail);
}


//�ҵ���������x��λ��
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

//����x ��λ��ǰ����һ����y
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
//����x ��λ��ɾ��ǰһ����
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

