#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


//��̬��ʼ��
void Init_SeqList(SL* ps)
{
	ps->sz = 0;
	ps->a = (SLDataType*)malloc(CAPACITY*sizeof(SLDataType));
	ps->capacity = CAPACITY;
}
//��������Ƿ��㹻��������������
void Check_SeqList(SL* ps)
{
	if (ps->capacity == ps->sz)
	{
		//����
		int newcapacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
		SLDataType* ptr = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));

		if (ptr != NULL)
		{
			ps->a = ptr;
			ps->capacity = newcapacity;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("����ʧ��\n");
			exit(-1);
		}
	}
}
//ͷ��
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
//β��
void SeqList_PushBack(SL* ps, SLDataType x)
{
	Check_SeqList(ps);
	
	ps->a[ps->sz] = x;
	ps->sz++;
}
//ͷɾ
void SeqList_PopFront(SL* ps)
{
	if (0 == ps->sz)
	{
		printf("˳���Ϊ�գ��޷�ɾ��\n");
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
//βɾ
void SeqList_PopBack(SL* ps)
{
	if (0 == ps->sz)
	{
		printf("˳���Ϊ�գ��޷�ɾ��\n");
		return;
	}
	ps->a[ps->sz - 1] = 0;
	ps->sz--;

}
//ָ��λ��x����
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
//ָ��λ��xɾ��
void SeqList_SpecifiedPop(SL* ps, int pos)
{
	int i = 0;
	for (i = pos; i <ps->sz; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
	ps->sz--;
}
//��ӡ˳���
void SeqList_Print(SL* ps)
{
	if (0 == ps->sz)
	{
		printf("˳���Ϊ�գ��޷���ӡ\n");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		printf("%d\t",ps->a[i]);
	}
	printf("\n");
}
