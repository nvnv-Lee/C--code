#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"






int main()

{
	//����һ��ջ
	ST st;
	//��ʼ��ջ
	STInit(&st);
	//ѹջ
	STPush(&st, 1);
	////�õ�ջ������
	//STDataType num = STTop(&st);
	//printf("%d ",num);
	//��ջ�����ݵ���
	STPop(&st);
	//ѹջ
	STPush(&st, 1);
	//ѹջ
	STPush(&st, 2);
	//ѹջ
	STPush(&st, 3);
	//ѹջ
	STPush(&st, 4);
	//ѹջ
	STPush(&st, 5);





	//����ջ
	STDestroy(&st);

	return 0;
}