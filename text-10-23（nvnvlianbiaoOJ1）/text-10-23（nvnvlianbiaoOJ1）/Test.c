#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


int main()
{
	//创建一个链表
	SListNode* plist = NULL;

	// 单链表尾插
	SListPushBack(&plist, 1);
	// 单链表尾插
	SListPushBack(&plist, 2);
	// 单链表尾插
	SListPushBack(&plist, 3);
	// 单链表尾插
	SListPushBack(&plist, 4);
	// 单链表尾插
	SListPushBack(&plist, 5);
    // 单链表打印
	SListPrint(plist);


	// 单链表的头插
	SListPushFront(&plist,5);
	// 单链表的头插
	SListPushFront(&plist, 4);
	// 单链表的头插
	SListPushFront(&plist, 3);
	// 单链表的头插
	SListPushFront(&plist, 2);
	// 单链表的头插
	SListPushFront(&plist, 1);
	// 单链表打印
	SListPrint(plist);


	//// 单链表的尾删
	//SListPopBack(&plist);
	//// 单链表的尾删
	//SListPopBack(&plist);
	//// 单链表的尾删
	//SListPopBack(&plist);
	//// 单链表的尾删
	//SListPopBack(&plist);
	//// 单链表的尾删
	//SListPopBack(&plist);
	//// 单链表打印
	//SListPrint(plist);

	// 单链表头删
	SListPopFront(&plist);
	// 单链表头删
	SListPopFront(&plist);
	// 单链表头删
	SListPopFront(&plist);
	// 单链表头删
	SListPopFront(&plist);
	// 单链表头删
	SListPopFront(&plist);
	// 单链表打印
	SListPrint(plist);


	// 单链表查找
	SListNode* pos=SListFind(plist, 2);
	// 单链表在pos位置之后插入x
	// 分析思考为什么不在pos位置之前插入？
	SListInsertAfter(&plist, pos, 8);
	// 单链表打印
	SListPrint(plist);


	//删除pos后面的数字删掉
	SListEraseAfter(&plist, pos);
	// 单链表打印
	SListPrint(plist);
	


	// 单链表的销毁
	SListDestory(&plist);
	// 单链表打印
	SListPrint(plist);

    
		
		
		
		return 0;
}