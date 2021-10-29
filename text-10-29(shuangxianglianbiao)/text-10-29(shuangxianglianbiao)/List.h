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

//初始化双向链表
LTNode* ListInit();
//打印双向链表
void ListPrint(LTNode* phead);



//开辟一个空间存放要插入的数字x
LTNode* BuyListNode(LTNode* x);

//尾插
void ListPushBack(LTNode* phead, LTDataType x);
//首插
void ListPushFront(LTNode* phead, LTDataType x);
//尾删
void ListPopBack(LTNode* phead);
//首删
void ListPopFront(LTNode* phead);


//找到链表中x的位置
LTNode* ListFind(LTNode* phead, LTDataType x);
//在任意x的位置前面插入x
void ListInsert(LTNode* phead, LTDataType x, LTDataType y);
//在任意x的位置删除前面一个数
void ListErase(LTNode* phead, LTNode* pos);


