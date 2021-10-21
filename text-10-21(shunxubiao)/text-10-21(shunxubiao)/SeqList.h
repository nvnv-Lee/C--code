#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define N 100

#define CAPACITY 3

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int sz;
	int capacity;
}SL;
//初始化
void Init_SeqList(SL* ps);
//检查容量是否足够，若不够则扩容
void Check_SeqList(SL* ps);
//头插
void SeqList_PushFront(SL* ps,SLDataType x);
//打印顺序表
void SeqList_Print(SL* ps);
//尾插
void SeqList_PushBack(SL* ps, SLDataType x);
//头删
void SeqList_PopFront(SL* ps);
//尾删
void SeqList_PopBack(SL* ps);
//指定位置x插入
void SeqList_SpecifiedPush(SL* ps, SLDataType x, int pos);
//指定位置x删除
void SeqList_SpecifiedPop(SL* ps,int pos);