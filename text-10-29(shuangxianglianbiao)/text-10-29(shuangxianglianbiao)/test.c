#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

int main()
{
	//初始化双向链表
	LTNode* plist = ListInit();


	//尾插
	ListPushBack(plist, 1);
	//尾插
	ListPushBack(plist, 2);
	//尾插
	ListPushBack(plist, 3);
	//尾插
	ListPushBack(plist, 4);
	//尾插
	ListPushBack(plist, 5);
	//打印双向链表
	ListPrint(plist);


	//首插
	ListPushFront(plist, 5);
	//首插
	ListPushFront(plist, 4);
	//首
	ListPushFront(plist, 3);
	//首插
	ListPushFront(plist, 2);
	//首插
	ListPushFront(plist, 1);
	//打印双向链表
	ListPrint(plist);


	//尾删
	ListPopBack(plist);
	//尾删
	ListPopBack(plist);
	//尾删
	ListPopBack(plist);
	//尾删
	ListPopBack(plist);
	//尾删
	ListPopBack(plist);
	//打印双向链表
	ListPrint(plist);


	////首删
	//ListPopFront(plist);
	////首删
	//ListPopFront(plist);
	////首删
	//ListPopFront(plist);
	////首删
	//ListPopFront(plist);

	////打印双向链表
	//ListPrint(plist);

	//找到链表中x的位置
	LTNode*  pos = ListFind(plist, 3);
	//在任意x的位置前面插入y
	ListInsert(plist, pos,2);
	//打印双向链表
	ListPrint(plist);
	//在任意x的位置删除前面一个数
	ListErase(plist, pos);
	//打印双向链表
	ListPrint(plist);


	return 0;
}