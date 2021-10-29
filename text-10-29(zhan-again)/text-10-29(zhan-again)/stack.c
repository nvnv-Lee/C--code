#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"





//��ʼ��ջ
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//����ջ
void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//ѹջ
void STPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType tmp = realloc(ps->a, sizeof(STDataType)*newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;
}
//��ջ�����ݵ���
void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));
	ps->top--;
}
//�õ�ջ������
STDataType STTop(ST* ps)
{
	assert(ps);
	return ps->a[ps->top - 1];
}
//�õ�ջ�Ĵ�С
int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//�ж�ջ�Ƿ�Ϊ��
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}