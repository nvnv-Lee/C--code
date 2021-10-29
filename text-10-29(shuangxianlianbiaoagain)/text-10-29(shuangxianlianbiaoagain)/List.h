#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

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
//����һ���ռ�������x
LTNode* BuyList(LTDataType x);

//�ײ�x
void  ListPushFront(LTNode* phead,LTDataType x);
//β��
void  ListPushBack(LTNode* phead, LTDataType x);
//��ɾ
void ListPopFront(LTNode* phead);
//βɾ
void ListPopBack(LTNode* phead);


//�ҵ���������x��λ��
LTNode* FindList(LTNode* phead, LTDataType x);

//����x ��λ��ǰ����һ����y
void ListInsert(LTNode* phead, LTDataType x, LTDataType y);
//����x ��λ��ɾ��ǰһ����
void ListErease(LTNode* phead, LTDataType x);

//����˫������
void ListDestroy(LTNode* phead);
