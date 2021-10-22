#include <stdio.h>
#include "stdlib.h"

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTnode;

//��ӡ����
void SList_Print(SLTnode* phead);
//������һ��ռ佫���ַ����Ҫ�����ǰһ���ռ��next�У��������ֵ����ÿռ�data�У������ÿռ��next�ÿ�
SLTnode* FindListnode(SLTDataType x);
//β��x
void SList_PushBack(SLTnode** pphead, SLTDataType x);
//ͷ��x
void SList_PushFront(SLTnode** pphead, SLTDataType x);
//ͷɾ
void SList_PopFront(SLTnode** pphead);
//βɾ
void SList_PopBack(SLTnode** pphead);

//��������pos֮ǰ����һ����x
void SList_Insert(SLTnode** pphead, SLTDataType pos, SLTDataType x);
//��������pos֮ǰɾ��һ����
void SList_Erease(SLTnode** pphead, SLTDataType pos);
