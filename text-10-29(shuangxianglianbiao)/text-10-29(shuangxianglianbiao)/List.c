#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//��ʼ��˫������
LTNode* ListInit()
{
	LTNode* phead = (LTNode*)malloc(sizeof(LTNode));
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
//����һ���ռ���Ҫ���������x
LTNode* BuyListNode(LTNode* x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;

	return newnode;

}
//β��
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
//�ײ�
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
//βɾ
void ListPopBack(LTNode* phead)
{
	assert(phead);
	LTNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;

	free(tail);
}
//��ɾ
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
//�ҵ�������x��λ��
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
//������x��λ��ǰ�����y
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
//������x��λ��ɾ��ǰ��һ����
void ListErase(LTNode* phead, LTNode* pos)
{
	assert(phead);
	LTNode* posprev = pos->prev;
	LTNode* posprevprev = posprev->prev;
	posprevprev->next = pos;
	pos->prev = posprevprev;

	free(posprev);
}

