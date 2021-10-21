#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


//动态初始化
void Init_SeqList(SL* ps)
{
	ps->sz = 0;
	ps->a = (SLDataType*)malloc(CAPACITY*sizeof(SLDataType));
	ps->capacity = CAPACITY;
}
//检查容量是否足够，若不够则扩容
void Check_SeqList(SL* ps)
{
	if (ps->capacity == ps->sz)
	{
		//增容
		int newcapacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
		SLDataType* ptr = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));

		if (ptr != NULL)
		{
			ps->a = ptr;
			ps->capacity = newcapacity;
			printf("扩容成功\n");
		}
		else
		{
			perror("扩容失败\n");
			exit(-1);
		}
	}
}
//头插
void SeqList_PushFront(SL* ps, SLDataType x)
{
	Check_SeqList(ps);
	int i = 0;
	for (i = ps->sz; i >0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->sz++;
}
//尾插
void SeqList_PushBack(SL* ps, SLDataType x)
{
	Check_SeqList(ps);
	
	ps->a[ps->sz] = x;
	ps->sz++;
}
//头删
void SeqList_PopFront(SL* ps)
{
	if (0 == ps->sz)
	{
		printf("顺序表为空，无法删除\n");
		return;
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->sz-1; i++)
		{
			ps->a[i] = ps->a[i + 1];
		}
		ps->sz--;
	}
}
//尾删
void SeqList_PopBack(SL* ps)
{
	if (0 == ps->sz)
	{
		printf("顺序表为空，无法删除\n");
		return;
	}
	ps->a[ps->sz - 1] = 0;
	ps->sz--;

}
//指定位置x插入
void SeqList_SpecifiedPush(SL* ps, SLDataType x,int pos)
{
	int i = 0;
	for (i = ps->sz; i >pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->sz++;
}
//指定位置x删除
void SeqList_SpecifiedPop(SL* ps, int pos)
{
	int i = 0;
	for (i = pos; i <ps->sz; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
	ps->sz--;
}
//打印顺序表
void SeqList_Print(SL* ps)
{
	if (0 == ps->sz)
	{
		printf("顺序表为空，无法打印\n");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		printf("%d\t",ps->a[i]);
	}
	printf("\n");
}
