#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


int main()
{
	//����һ������
	SListNode* plist = NULL;

	// ������β��
	SListPushBack(&plist, 1);
	// ������β��
	SListPushBack(&plist, 2);
	// ������β��
	SListPushBack(&plist, 3);
	// ������β��
	SListPushBack(&plist, 4);
	// ������β��
	SListPushBack(&plist, 5);
    // �������ӡ
	SListPrint(plist);


	// �������ͷ��
	SListPushFront(&plist,5);
	// �������ͷ��
	SListPushFront(&plist, 4);
	// �������ͷ��
	SListPushFront(&plist, 3);
	// �������ͷ��
	SListPushFront(&plist, 2);
	// �������ͷ��
	SListPushFront(&plist, 1);
	// �������ӡ
	SListPrint(plist);


	//// �������βɾ
	//SListPopBack(&plist);
	//// �������βɾ
	//SListPopBack(&plist);
	//// �������βɾ
	//SListPopBack(&plist);
	//// �������βɾ
	//SListPopBack(&plist);
	//// �������βɾ
	//SListPopBack(&plist);
	//// �������ӡ
	//SListPrint(plist);

	// ������ͷɾ
	SListPopFront(&plist);
	// ������ͷɾ
	SListPopFront(&plist);
	// ������ͷɾ
	SListPopFront(&plist);
	// ������ͷɾ
	SListPopFront(&plist);
	// ������ͷɾ
	SListPopFront(&plist);
	// �������ӡ
	SListPrint(plist);


	// ���������
	SListNode* pos=SListFind(plist, 2);
	// ��������posλ��֮�����x
	// ����˼��Ϊʲô����posλ��֮ǰ���룿
	SListInsertAfter(&plist, pos, 8);
	// �������ӡ
	SListPrint(plist);


	//ɾ��pos���������ɾ��
	SListEraseAfter(&plist, pos);
	// �������ӡ
	SListPrint(plist);
	


	// �����������
	SListDestory(&plist);
	// �������ӡ
	SListPrint(plist);

    
		
		
		
		return 0;
}