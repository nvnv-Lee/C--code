#pragma once
#include <stdio.h>
#include <assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

//��ʼ��˫������
LTNode* ListInit();
//��ӡ˫������
void ListPrint(LTNode* phead);



//����һ���ռ���Ҫ���������x
LTNode* BuyListNode(LTNode* x);

//β��
void ListPushBack(LTNode* phead, LTDataType x);
//�ײ�
void ListPushFront(LTNode* phead, LTDataType x);
//βɾ
void ListPopBack(LTNode* phead);
//��ɾ
void ListPopFront(LTNode* phead);


//�ҵ�������x��λ��
LTNode* ListFind(LTNode* phead, LTDataType x);
//������x��λ��ǰ�����x
void ListInsert(LTNode* phead, LTDataType x, LTDataType y);
//������x��λ��ɾ��ǰ��һ����
void ListErase(LTNode* phead, LTNode* pos);


