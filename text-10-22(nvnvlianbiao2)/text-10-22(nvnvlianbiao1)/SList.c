#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


//头插x
void SList_PushFront(SLTnode** pphead, SLTDataType x)
{
	SLTnode* newnode = FindListnode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
}
//开辟一块空间将其地址传给要插入的前一个空间额next中，将插入的值放入该空间的data中，并将该空间的next置空
SLTnode* FindListnode(SLTDataType x)
{
	SLTnode* newnode = (SLTnode*)malloc(sizeof(SLTnode));
	if (newnode == NULL)
	{
		perror("开辟空间失败\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		return newnode;
	}
}
//找到数字x所在的位置地址pos
SLTnode* FindListpos(SLTnode** pphead, SLTDataType x)
{
	if (*pphead == NULL)
	{
		perror("链表为空\n");
		exit(-1);
	}
	else
	{
		SLTnode* cur = *pphead;
		while (cur->data != x)
		{
			cur = cur->next;
		}
		return cur;
	}
}
//在任意pos位置前插x
void SList_PushPosFront(SLTnode** pphead, SLTnode* pos, SLTDataType x)
{
	SLTnode* newnode = FindListnode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		SLTnode* cur = *pphead;
		while (cur->next!= pos)
		{
			cur = cur->next;
		}
		cur->next = newnode;
		newnode->next = pos;
	}
}
//在任意pos位置后删除一个数
void SList_PopPosBack(SLTnode** pphead, SLTnode* pos)
{
	if (*pphead == pos)
	{
		perror("后面无数字可删\n");
		exit(-1);
	}
	else
	{
		SLTnode* cur = *pphead;
		while (cur!= pos)
		{
			cur = cur->next;
		}
		cur->next = pos->next->next;
		pos = cur->next;
		//free(cur->next);
	}
	
}

//打印链表
void SList_Print(SLTnode* pphead)
{
	if (pphead == NULL)
	{
		perror("链表为空\n");
		exit(-1);
	}
	else
	{
		while (pphead != NULL)
		{
			printf("%d->",pphead->data);
			pphead = pphead->next;
		}
		printf("NULL\n");
	}
}

//销毁链表
void SList_Destroy(SLTnode** pphead)
{
	assert(pphead);
	SLTnode* cur = pphead;
	while (cur)
	{
		SLTnode* cur1 = cur->next;
		free(cur);
		cur = cur1;
	}
	*pphead = NULL;
}