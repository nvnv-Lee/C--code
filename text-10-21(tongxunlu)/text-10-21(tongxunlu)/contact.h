#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>'
//#include <stdlib.h>

#define NAME_MAX 15

#define GENDER_MAX 5
#define TELE_MAX 15
#define ADDR_MAX 15

#define MAX 10

#define CAPACITY 3

struct peo_Infor
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};
////��̬����һ��ͨѶ¼
//struct contact
//{
//	struct peo_Infor data[MAX];
//	int sz;
//};
//����һ����̬ͨѶ¼
struct contact
{
	struct peo_Infor* data;
	int sz;
	int capacity;
};


//��ʼ��ͨѶ¼
void Init_Contact(struct contact* pc);
//���ͨѶ¼�ڴ���������������������
void Check_Contact(struct contact* pc);
//�����ϵ��
void Add_Contact(struct contact* pc);
//��ӡ��ϵ����Ϣ
void Show_Contact(struct contact* pc);
//�ҵ�ָ������ϵ��
int Find_Contact(struct contact* pc);
//ɾ��ָ����ϵ�˵���Ϣ
void Del_Contact(struct contact* pc);
//��ѯָ����ϵ�˵���Ϣ
void Search_Contact(struct contact* pc);
//�޸�ָ����ϵ����Ϣ
void Modify_Contact(struct contact* pc);
//����ͨѶ¼
void Destroy_Contact(struct contact* pc);