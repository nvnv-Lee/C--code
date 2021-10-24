#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		perror("����ڵ�ʧ��\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		return newnode;
	}
}
// �������ӡ
void SListPrint(SListNode* plist)
{
	if (plist == NULL)
	{
		perror("����Ϊ��\n");
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

// ������β��
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
// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
// �������βɾ
void SListPopBack(SListNode** pplist)
{
	if (*pplist == NULL)
	{
		perror("����Ϊ��\n");
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
// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	SListNode* cur = *pplist;
	*pplist = (*pplist)->next;
	free(cur);
}
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	if (plist == NULL)
	{
		perror("����Ϊ��\n");
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
// ��������posλ��֮�����x

// ����˼��Ϊʲô����posλ��֮ǰ���룿

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
// ����˼��Ϊʲô��ɾ��posλ�ã�
//ɾ��pos���������ɾ��
void SListEraseAfter(SListNode** pplist, SListNode* pos)
{
	if (*pplist == NULL)
	{
		perror("����Ϊ��\n");
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
// �����������
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


