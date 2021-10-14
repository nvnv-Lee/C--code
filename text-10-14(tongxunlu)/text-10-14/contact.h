#pragma once


#define DEFAULT_SZ 3

#define NAME_MAX 30
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define MAX 1000

#include <string.h>
#include <stdio.h>
#include <stdlib.h>



//�����˵���Ϣ
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};


//ͨѶ¼-��̬�汾
//struct Contact
//{
//	struct PeoInfo data[MAX];//1000���˵����ݴ����data������
//	int sz;//��¼��ǰͨѶ¼��Ч��Ϣ�ĸ���
//};

//��̬�����İ汾
struct Contact
{
	struct PeoInfo* data;
	int sz;//ͨѶ¼�е�ǰ��ЧԪ�صĸ���
	int capacity;//ͨѶ¼�ĵ�ǰ�������
};




//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);
//����ͨѶ¼
void DestroyContact(struct Contact* pc);

//������ϵ��
void AddContact(struct Contact* pc);

//��ʾ���е���ϵ��
void ShowContact(struct Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* pc);

//����ָ����ϵ��
void SearchContact(const struct Contact*pc);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);


//������Ϣ��ͨѶ¼��
void SaveContact(struct Contact* pc);

//�����ļ��е���Ϣ��ͨѶ¼��
void LoadContact(struct Contact* pc);
