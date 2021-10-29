#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDataType;


typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;
}ST;

//��ʼ��ջ
void STInit(ST* ps);
//����ջ
void STDestroy(ST* ps);
//ѹջ
void STPush(ST* ps, STDataType x);
//��ջ�����ݵ���
void STPop(ST* ps);
//�õ�ջ������
STDataType STTop(ST* ps);
//�õ�ջ�Ĵ�С
int STSize(ST* ps);
//�ж�ջ�Ƿ�Ϊ��
bool STEmpty(ST* ps);
