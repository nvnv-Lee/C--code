#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//打印链表
void SList_Print(SLTnode* phead)
{
	if (phead == NULL)
	{
		printf("链表为空，无法打印\n");
	}
	else
	{
		SLTnode* cur = phead;
		printf("%d->",cur->data);
		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d->", cur->data);
		}
		printf("NULL\n");
	}
}
//开辟另一块空间将其地址传给要插入的前一个空间的next中，将插入的值放入该空间data中，并将该空间的next置空
SLTnode* FindListnode(SLTDataType x)
{
	SLTnode* newnode = (SLTnode*)malloc(sizeof(SLTnode));
	if (newnode == NULL)
	{
		perror("开辟新空间失败\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		return newnode;
	}
}
//尾插x
void SList_PushBack(SLTnode** pphead, SLTDataType x)
{
	SLTnode* newnode = FindListnode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTnode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	printf("尾插成功\n");
}
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
	printf("头插成功\n");
}
//头删
void SList_PopFront(SLTnode** pphead)
{
	if (*pphead == NULL)
	{
		printf("链表为空，无法删除");
	}
	else
	{
		SLTnode* start = (*pphead)->next;
		free(*pphead);
		*pphead = start;
		printf("头删成功\n");
	}
}
//尾删
void SList_PopBack(SLTnode** pphead)
{
	if (*pphead == NULL)
	{
		printf("链表为空，无法删除");
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		printf("尾删成功\n");
	}
	else
	{
		SLTnode* tail = *pphead;
		while (tail->next->next!=NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;

		printf("尾删成功\n");
	}
}

//在任意数pos位置之前插入一个数x
void SList_Insert(SLTnode** pphead, SLTDataType pos, SLTDataType x)
{
	SLTnode* newnode = FindListnode(x);
	if ((*pphead)->data == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		//找到pos的前一个位置
		SLTnode* posprevious = *pphead;
		while (posprevious->next->data != pos)
		{
			posprevious = posprevious->next;
		}
		newnode->next = posprevious->next;
		posprevious->next = newnode;
	}
	printf("插入成功\n");
}
//在任意数pos之前删除一个数
void SList_Erease(SLTnode** pphead, SLTDataType pos)
{
	if (*pphead == NULL)
	{
		printf("链表为空，删除失败\n");
	}
	else
	{
		//找到pos之前的那个数
		if ((*pphead)->data==pos)
		{
			printf("该位置的数为第一个数，前面无数可删\n");
	     }
		else
		{
			SLTnode* posprevious2 = *pphead;
			while (posprevious2->next->data != pos)
			{
				posprevious2 = posprevious2->next;
			}
			posprevious2->next = ((posprevious2->next)->next);
			free(posprevious2->next);
			posprevious2->next = NULL;
		}
	}
}