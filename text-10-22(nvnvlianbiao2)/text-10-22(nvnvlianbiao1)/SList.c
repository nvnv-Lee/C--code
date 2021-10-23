#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


//ͷ��x
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
//����һ��ռ佫���ַ����Ҫ�����ǰһ���ռ��next�У��������ֵ����ÿռ��data�У������ÿռ��next�ÿ�
SLTnode* FindListnode(SLTDataType x)
{
	SLTnode* newnode = (SLTnode*)malloc(sizeof(SLTnode));
	if (newnode == NULL)
	{
		perror("���ٿռ�ʧ��\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		return newnode;
	}
}
//�ҵ�����x���ڵ�λ�õ�ַpos
SLTnode* FindListpos(SLTnode** pphead, SLTDataType x)
{
	if (*pphead == NULL)
	{
		perror("����Ϊ��\n");
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
//������posλ��ǰ��x
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
//������posλ�ú�ɾ��һ����
void SList_PopPosBack(SLTnode** pphead, SLTnode* pos)
{
	if (*pphead == pos)
	{
		perror("���������ֿ�ɾ\n");
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

//��ӡ����
void SList_Print(SLTnode* pphead)
{
	if (pphead == NULL)
	{
		perror("����Ϊ��\n");
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

//��������
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