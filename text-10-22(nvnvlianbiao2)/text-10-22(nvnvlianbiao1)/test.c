#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

int main()
{
	//创建一个链表并置空
	SLTnode* plist = NULL;
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


	//找到数字x所在的位置地址pos
	SLTnode* pos = FindListpos(&plist, 3);
	//在任意pos位置前插x
	SList_PushPosFront(&plist, pos, 1);
	//打印链表
	SList_Print(plist);


	//找到数字x所在的位置地址pos
	pos = FindListpos(&plist, 2);
	//在任意pos位置后删除一个数
	SList_PopPosBack(&plist,pos);
	//打印链表
	SList_Print(plist);


	//销毁链表
	SList_Destroy(&plist);

	return 0;
}