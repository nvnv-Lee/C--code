#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

int main()
{
	//����һ�������ÿ�
	SLTnode* plist = NULL;
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


	//�ҵ�����x���ڵ�λ�õ�ַpos
	SLTnode* pos = FindListpos(&plist, 3);
	//������posλ��ǰ��x
	SList_PushPosFront(&plist, pos, 1);
	//��ӡ����
	SList_Print(plist);


	//�ҵ�����x���ڵ�λ�õ�ַpos
	pos = FindListpos(&plist, 2);
	//������posλ�ú�ɾ��һ����
	SList_PopPosBack(&plist,pos);
	//��ӡ����
	SList_Print(plist);


	//��������
	SList_Destroy(&plist);

	return 0;
}