#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"


int main()
{
	ST st;
	//��ʼ��ջ�ռ�
	STInit(&st);
	//������xѹջ
	STPush(&st, 1);
	//������xѹջ
	STPush(&st, 2);
	//������xѹջ
	STPush(&st, 3);
	//������xѹջ
	STPush(&st, 4);
	//������xѹջ
	STPush(&st, 5);

	//�õ�ջ������
	STDataType* num = STTop(&st);
	printf("%d\n",num);
	//�õ�ջ�ռ�����ָ���
	int sz = STSize(&st);
	printf("%d\n",sz);

	//��ջ�����ֵ���
	STPop(&st);
	//�õ�ջ�ռ�����ָ���
	sz = STSize(&st);
	printf("%d\n", sz);


	return 0;
}