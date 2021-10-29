#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


int main()
{
	//初始化双向链表
	LTNode* plist = ListInit();

	//首插x
	ListPushFront(plist, 5);
	//首插x
	ListPushFront(plist, 4);
	//首插x
	ListPushFront(plist, 3);
	//首插x
	ListPushFront(plist, 2);
	//首插x
	ListPushFront(plist, 1);
	//打印双向链表
	ListPrint(plist);



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
	
	
	
	//首删
	ListPopFront(plist);
	//首删
	ListPopFront(plist);
	//首删
	ListPopFront(plist);
	//首删
	ListPopFront(plist);
	//首删
	ListPopFront(plist);
	//打印双向链表
	ListPrint(plist);


	////尾删
	//ListPopBack(plist);
	////尾删
	//ListPopBack(plist);
	////尾删
	//ListPopBack(plist);
	////尾删
	//ListPopBack(plist);
	////打印双向链表
	//ListPrint(plist);



	//在数x 的位置前插入一个数y
	ListInsert(plist, 3, 2);
	//打印双向链表
	ListPrint(plist);
	//在数x 的位置删除前一个数
    ListErease(plist, 3);
	//打印双向链表
	ListPrint(plist);




	return 0;
}