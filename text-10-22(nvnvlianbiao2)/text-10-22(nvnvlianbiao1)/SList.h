#include <stdio.h>
#include <assert.h>


typedef int SLTDataType;

typedef struct SListnode
{
	SLTDataType data;
	struct SListnode* next;
}SLTnode;



//头插x
void SList_PushFront(SLTnode** pphead, SLTDataType x);
//找到数字x所在的位置地址pos
SLTnode* FindListpos(SLTnode** pphead, SLTDataType x);
//开辟一块空间将其地址传给要插入的前一个空间额next中，将插入的值放入该空间的data中，并将该空间的next置空
SLTnode* FindListnode(SLTDataType x);
//在任意pos位置前插x
void SList_PushPosFront(SLTnode** pphead, SLTnode* pos, SLTDataType x);
//在任意pos位置后删一个数
void SList_PopPosBack(SLTnode** pphead, SLTnode* pos);


//打印链表
void SList_Print(SLTnode* pphead);
//销毁链表
void SList_Destroy(SLTnode* pphead);