#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

int main()
{
	//��ʼ��˫������
	LTNode* plist = ListInit();


	//β��
	ListPushBack(plist, 1);
	//β��
	ListPushBack(plist, 2);
	//β��
	ListPushBack(plist, 3);
	//β��
	ListPushBack(plist, 4);
	//β��
	ListPushBack(plist, 5);
	//��ӡ˫������
	ListPrint(plist);


	//�ײ�
	ListPushFront(plist, 5);
	//�ײ�
	ListPushFront(plist, 4);
	//��
	ListPushFront(plist, 3);
	//�ײ�
	ListPushFront(plist, 2);
	//�ײ�
	ListPushFront(plist, 1);
	//��ӡ˫������
	ListPrint(plist);


	//βɾ
	ListPopBack(plist);
	//βɾ
	ListPopBack(plist);
	//βɾ
	ListPopBack(plist);
	//βɾ
	ListPopBack(plist);
	//βɾ
	ListPopBack(plist);
	//��ӡ˫������
	ListPrint(plist);


	////��ɾ
	//ListPopFront(plist);
	////��ɾ
	//ListPopFront(plist);
	////��ɾ
	//ListPopFront(plist);
	////��ɾ
	//ListPopFront(plist);

	////��ӡ˫������
	//ListPrint(plist);

	//�ҵ�������x��λ��
	LTNode*  pos = ListFind(plist, 3);
	//������x��λ��ǰ�����y
	ListInsert(plist, pos,2);
	//��ӡ˫������
	ListPrint(plist);
	//������x��λ��ɾ��ǰ��һ����
	ListErase(plist, pos);
	//��ӡ˫������
	ListPrint(plist);


	return 0;
}