#include <stdio.h>
#include <assert.h>


typedef int SLTDataType;

typedef struct SListnode
{
	SLTDataType data;
	struct SListnode* next;
}SLTnode;



//ͷ��x
void SList_PushFront(SLTnode** pphead, SLTDataType x);
//�ҵ�����x���ڵ�λ�õ�ַpos
SLTnode* FindListpos(SLTnode** pphead, SLTDataType x);
//����һ��ռ佫���ַ����Ҫ�����ǰһ���ռ��next�У��������ֵ����ÿռ��data�У������ÿռ��next�ÿ�
SLTnode* FindListnode(SLTDataType x);
//������posλ��ǰ��x
void SList_PushPosFront(SLTnode** pphead, SLTnode* pos, SLTDataType x);
//������posλ�ú�ɾһ����
void SList_PopPosBack(SLTnode** pphead, SLTnode* pos);


//��ӡ����
void SList_Print(SLTnode* pphead);
//��������
void SList_Destroy(SLTnode* pphead);