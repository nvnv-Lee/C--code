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
////静态创建一个通讯录
//struct contact
//{
//	struct peo_Infor data[MAX];
//	int sz;
//};
//创建一个动态通讯录
struct contact
{
	struct peo_Infor* data;
	int sz;
	int capacity;
};


//初始化通讯录
void Init_Contact(struct contact* pc);
//检查通讯录内存容量，若不够进行增容
void Check_Contact(struct contact* pc);
//添加联系人
void Add_Contact(struct contact* pc);
//打印联系人信息
void Show_Contact(struct contact* pc);
//找到指定的联系人
int Find_Contact(struct contact* pc);
//删除指定联系人的信息
void Del_Contact(struct contact* pc);
//查询指定联系人的信息
void Search_Contact(struct contact* pc);
//修改指定联系人信息
void Modify_Contact(struct contact* pc);
//销毁通讯录
void Destroy_Contact(struct contact* pc);