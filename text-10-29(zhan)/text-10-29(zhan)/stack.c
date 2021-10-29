#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"



//��ʼ��ջ�ռ�
void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->top = 0;//top����0���൱��ps->top��Զָ��ջ�����ݵ���һ������
}
//����ջ�ռ�
void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//������xѹջ
void STPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0?4:ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType)*newcapacity);
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
//��ջ�����ֵ���
void STPop(ST* ps)
{
	assert(ps);
	ps->top--;
}
//�õ�ջ������
STDataType STTop(ST* ps)
{
	assert(ps);
	assert(STEmpty(ps));
	return ps->a[ps->top - 1];
}
//�õ�ջ�ռ�����ָ���
int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//���ջ�ռ��Ƿ�Ϊ��
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top != 0;
}
