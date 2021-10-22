#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


int main()
{
	SLTnode*plist = NULL;

	//尾插x
	SList_PushBack(&plist, 1);
	//尾插x
	SList_PushBack(&plist, 2);
	//尾插x
	SList_PushBack(&plist, 3);
	//尾插x
	SList_PushBack(&plist, 4);
	//打印链表
	SList_Print(plist);

	//头插x
	SList_PushFront(&plist,4); 
	//头插x
	SList_PushFront(&plist, 3);
	//头插x
	SList_PushFront(&plist, 2);
	//头插x
	SList_PushFront(&plist, 1);
	//打印链表
	SList_Print(plist);


	//在任意数pos位置之前插入一个数x
	SList_Insert(&plist, 4, 3);
	//打印链表
	SList_Print(plist);

	//在任意数pos之前删除一个数
	SList_Erease(&plist, 4);
	//打印链表
	SList_Print(plist);

	////头删
	//SList_PopFront(&plist);
	////头删
	//SList_PopFront(&plist);
	////头删
	//SList_PopFront(&plist);
	////头删
	//SList_PopFront(&plist);
	////打印链表
	//SList_Print(plist);

	////尾删
	//SList_PopBack(&plist);
	////尾删
	//SList_PopBack(&plist);
	////尾删
	//SList_PopBack(&plist);
	////尾删
	//SList_PopBack(&plist);
	////打印链表
	//SList_Print(plist);


	return 0;
}