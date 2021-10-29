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

//初始化双向链表
LTNode* ListInit();
//打印双向链表
void ListPrint(LTNode* phead);
//开辟一个空间存放数字x
LTNode* BuyList(LTDataType x);

//首插x
void  ListPushFront(LTNode* phead,LTDataType x);
//尾插
void  ListPushBack(LTNode* phead, LTDataType x);
//首删
void ListPopFront(LTNode* phead);
//尾删
void ListPopBack(LTNode* phead);


//找到链表中数x的位置
LTNode* FindList(LTNode* phead, LTDataType x);

//在数x 的位置前插入一个数y
void ListInsert(LTNode* phead, LTDataType x, LTDataType y);
//在数x 的位置删除前一个数
void ListErease(LTNode* phead, LTDataType x);

//销毁双向链表
void ListDestroy(LTNode* phead);
