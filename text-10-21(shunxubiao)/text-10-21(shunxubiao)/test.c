#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

int main()
{
	//创建一个顺序表
	SL s1;
	//初始化顺序表
	Init_SeqList(&s1);
	//头插
	SeqList_PushFront(&s1,1);
	//打印顺序表
	SeqList_Print(&s1);
	//尾插
	SeqList_PushBack(&s1,2);
	//打印顺序表
	SeqList_Print(&s1);
	////头删
	//SeqList_PopFront(&s1);
	////打印顺序表
	//SeqList_Print(&s1);
	////尾删
	//SeqList_PopBack(&s1);
	////打印顺序表
	//SeqList_Print(&s1);
	//指定下标位置插入
	SeqList_SpecifiedPush(&s1, 10, 1);
	//打印顺序表
	SeqList_Print(&s1);
	//指定位置x删除
	SeqList_SpecifiedPop(&s1,1);
	//打印顺序表
	SeqList_Print(&s1);
	return 0;
}
