#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define N 100

#define CAPACITY 3

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int sz;
	int capacity;
}SL;
//��ʼ��
void Init_SeqList(SL* ps);
//��������Ƿ��㹻��������������
void Check_SeqList(SL* ps);
//ͷ��
void SeqList_PushFront(SL* ps,SLDataType x);
//��ӡ˳���
void SeqList_Print(SL* ps);
//β��
void SeqList_PushBack(SL* ps, SLDataType x);
//ͷɾ
void SeqList_PopFront(SL* ps);
//βɾ
void SeqList_PopBack(SL* ps);
//ָ��λ��x����
void SeqList_SpecifiedPush(SL* ps, SLDataType x, int pos);
//ָ��λ��xɾ��
void SeqList_SpecifiedPop(SL* ps,int pos);