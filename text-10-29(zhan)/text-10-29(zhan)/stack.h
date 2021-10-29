#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>



typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//��ʼ��ջ�ռ�
void STInit(ST* ps);
//����ջ�ռ�
void STDestroy(ST* ps);
//������xѹջ
void STPush(ST* ps, STDataType x);
//��ջ�����ֵ���
void STPop(ST* ps);
//�õ�ջ������
STDataType STTop(ST* ps);
//�õ�ռ�ռ�����ָ���
int STSize(ST* ps);
//���ջ�ռ��Ƿ�Ϊ��
bool STEmpty(ST* ps);