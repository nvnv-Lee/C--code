#include <stdio.h>
#include "stdlib.h"

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTnode;

//打印链表
void SList_Print(SLTnode* phead);
//开辟另一块空间将其地址传给要插入的前一个空间的next中，将插入的值放入该空间data中，并将该空间的next置空
SLTnode* FindListnode(SLTDataType x);
//尾插x
void SList_PushBack(SLTnode** pphead, SLTDataType x);
//头插x
void SList_PushFront(SLTnode** pphead, SLTDataType x);
//头删
void SList_PopFront(SLTnode** pphead);
//尾删
void SList_PopBack(SLTnode** pphead);

//在任意数pos之前插入一个数x
void SList_Insert(SLTnode** pphead, SLTDataType pos, SLTDataType x);
//在任意数pos之前删除一个数
void SList_Erease(SLTnode** pphead, SLTDataType pos);
