#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

int main()
{
	//����һ��˳���
	SL s1;
	//��ʼ��˳���
	Init_SeqList(&s1);
	//ͷ��
	SeqList_PushFront(&s1,1);
	//��ӡ˳���
	SeqList_Print(&s1);
	//β��
	SeqList_PushBack(&s1,2);
	//��ӡ˳���
	SeqList_Print(&s1);
	////ͷɾ
	//SeqList_PopFront(&s1);
	////��ӡ˳���
	//SeqList_Print(&s1);
	////βɾ
	//SeqList_PopBack(&s1);
	////��ӡ˳���
	//SeqList_Print(&s1);
	//ָ���±�λ�ò���
	SeqList_SpecifiedPush(&s1, 10, 1);
	//��ӡ˳���
	SeqList_Print(&s1);
	//ָ��λ��xɾ��
	SeqList_SpecifiedPop(&s1,1);
	//��ӡ˳���
	SeqList_Print(&s1);
	return 0;
}
