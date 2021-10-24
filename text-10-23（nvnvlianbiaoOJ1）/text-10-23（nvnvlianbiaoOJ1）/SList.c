#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		perror("申请节点失败\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		return newnode;
	}
}
// 单链表打印
void SListPrint(SListNode* plist)
{
	if (plist == NULL)
	{
		perror("链表为空\n");
		exit(-1);
	}
	else
	{
		SListNode* cur = plist;
		while (cur != NULL)
		{
			printf("%d->",cur->data);
			cur = cur->next;
		}
		printf("NULL\n");
	}
}

// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SListNode* cur = *pplist;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}
// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	if (*pplist == NULL)
	{
		perror("链表为空\n");
		exit(-1);
	}
	else
	{
		SListNode* cur = *pplist;
		while (cur->next->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = NULL;
		//SListNode* cur1 = cur->next;
		free(cur->next);
	}
}
// 单链表头删
void SListPopFront(SListNode** pplist)
{
	SListNode* cur = *pplist;
	*pplist = (*pplist)->next;
	free(cur);
}
// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	if (plist == NULL)
	{
		perror("链表为空\n");
		exit(-1);
	}
	else
	{
		while ((plist->data) != x)
		{
			plist = plist->next;
		}
		return plist;
	}
}
// 单链表在pos位置之后插入x

// 分析思考为什么不在pos位置之前插入？

void SListInsertAfter(SListNode** pplist,SListNode* pos, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (pos == *pplist)
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}
	else
	{
		//SListNode* next = pos->next;
		newnode->next = pos->next;
		pos->next = newnode;
	}
}
// 分析思考为什么不删除pos位置？
//删除pos后面的数字删掉
void SListEraseAfter(SListNode** pplist, SListNode* pos)
{
	if (*pplist == NULL)
	{
		perror("链表为空\n");
		exit(-1);
	}
	else
	{
		SListNode* cur = *pplist;
		if (cur != pos)
		{
			cur = cur->next;
		}
		SListNode* cur1 = cur->next;
		cur->next =cur1->next;
		//free(cur->next);
	}
}
// 单链表的销毁
void SListDestory(SListNode**  pplist)
{
	SListNode* cur = *pplist;
	while (cur!= NULL)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(*pplist);
}


