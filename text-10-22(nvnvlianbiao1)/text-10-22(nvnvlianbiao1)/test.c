#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"


int main()
{
	SLTnode*plist = NULL;

	//β��x
	SList_PushBack(&plist, 1);
	//β��x
	SList_PushBack(&plist, 2);
	//β��x
	SList_PushBack(&plist, 3);
	//β��x
	SList_PushBack(&plist, 4);
	//��ӡ����
	SList_Print(plist);

	//ͷ��x
	SList_PushFront(&plist,4); 
	//ͷ��x
	SList_PushFront(&plist, 3);
	//ͷ��x
	SList_PushFront(&plist, 2);
	//ͷ��x
	SList_PushFront(&plist, 1);
	//��ӡ����
	SList_Print(plist);


	//��������posλ��֮ǰ����һ����x
	SList_Insert(&plist, 4, 3);
	//��ӡ����
	SList_Print(plist);

	//��������pos֮ǰɾ��һ����
	SList_Erease(&plist, 4);
	//��ӡ����
	SList_Print(plist);

	////ͷɾ
	//SList_PopFront(&plist);
	////ͷɾ
	//SList_PopFront(&plist);
	////ͷɾ
	//SList_PopFront(&plist);
	////ͷɾ
	//SList_PopFront(&plist);
	////��ӡ����
	//SList_Print(plist);

	////βɾ
	//SList_PopBack(&plist);
	////βɾ
	//SList_PopBack(&plist);
	////βɾ
	//SList_PopBack(&plist);
	////βɾ
	//SList_PopBack(&plist);
	////��ӡ����
	//SList_Print(plist);


	return 0;
}