#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//��ӡ����
void SList_Print(SLTnode* phead)
{
	if (phead == NULL)
	{
		printf("����Ϊ�գ��޷���ӡ\n");
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
//������һ��ռ佫���ַ����Ҫ�����ǰһ���ռ��next�У��������ֵ����ÿռ�data�У������ÿռ��next�ÿ�
SLTnode* FindListnode(SLTDataType x)
{
	SLTnode* newnode = (SLTnode*)malloc(sizeof(SLTnode));
	if (newnode == NULL)
	{
		perror("�����¿ռ�ʧ��\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		return newnode;
	}
}
//β��x
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
	printf("β��ɹ�\n");
}
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
	printf("ͷ��ɹ�\n");
}
//ͷɾ
void SList_PopFront(SLTnode** pphead)
{
	if (*pphead == NULL)
	{
		printf("����Ϊ�գ��޷�ɾ��");
	}
	else
	{
		SLTnode* start = (*pphead)->next;
		free(*pphead);
		*pphead = start;
		printf("ͷɾ�ɹ�\n");
	}
}
//βɾ
void SList_PopBack(SLTnode** pphead)
{
	if (*pphead == NULL)
	{
		printf("����Ϊ�գ��޷�ɾ��");
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		printf("βɾ�ɹ�\n");
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

		printf("βɾ�ɹ�\n");
	}
}

//��������posλ��֮ǰ����һ����x
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
		//�ҵ�pos��ǰһ��λ��
		SLTnode* posprevious = *pphead;
		while (posprevious->next->data != pos)
		{
			posprevious = posprevious->next;
		}
		newnode->next = posprevious->next;
		posprevious->next = newnode;
	}
	printf("����ɹ�\n");
}
//��������pos֮ǰɾ��һ����
void SList_Erease(SLTnode** pphead, SLTDataType pos)
{
	if (*pphead == NULL)
	{
		printf("����Ϊ�գ�ɾ��ʧ��\n");
	}
	else
	{
		//�ҵ�pos֮ǰ���Ǹ���
		if ((*pphead)->data==pos)
		{
			printf("��λ�õ���Ϊ��һ������ǰ��������ɾ\n");
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