#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


int main()
{
	//��ʼ��˫������
	LTNode* plist = ListInit();

	//�ײ�x
	ListPushFront(plist, 5);
	//�ײ�x
	ListPushFront(plist, 4);
	//�ײ�x
	ListPushFront(plist, 3);
	//�ײ�x
	ListPushFront(plist, 2);
	//�ײ�x
	ListPushFront(plist, 1);
	//��ӡ˫������
	ListPrint(plist);



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
	
	
	
	//��ɾ
	ListPopFront(plist);
	//��ɾ
	ListPopFront(plist);
	//��ɾ
	ListPopFront(plist);
	//��ɾ
	ListPopFront(plist);
	//��ɾ
	ListPopFront(plist);
	//��ӡ˫������
	ListPrint(plist);


	////βɾ
	//ListPopBack(plist);
	////βɾ
	//ListPopBack(plist);
	////βɾ
	//ListPopBack(plist);
	////βɾ
	//ListPopBack(plist);
	////��ӡ˫������
	//ListPrint(plist);



	//����x ��λ��ǰ����һ����y
	ListInsert(plist, 3, 2);
	//��ӡ˫������
	ListPrint(plist);
	//����x ��λ��ɾ��ǰһ����
    ListErease(plist, 3);
	//��ӡ˫������
	ListPrint(plist);




	return 0;
}