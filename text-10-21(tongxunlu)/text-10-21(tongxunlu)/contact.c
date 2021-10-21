#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


////静态初始化通讯录
//void Init_Contact(struct contact* pc)
//{
//	pc->sz = 0;//默认没有信息
//	memset(pc->data, 0, sizeof(pc->data));
//}
//动态初始化通讯录
void Init_Contact(struct contact* pc)
{
	pc->data = (struct peo_Infor*)malloc(CAPACITY*sizeof(struct peo_Infor));
	pc->sz = 0;
	pc->capacity = CAPACITY;
}
//检查通讯录内存容量，若不够进行增容
void Check_Contact(struct contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//增加容量
		struct peo_Infor* ptr = (struct peo_Infor*)malloc(pc->data, (CAPACITY + 2)*sizeof(struct peo_Infor));

		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;

			printf("扩容成功\n");
		}
		else
		{
			perror("通讯录扩容失败\n");
			exit(1);
		}
	}
}

//添加联系人
void Add_Contact(struct contact* pc)
{
	printf("添加联系人\n");
	//检查通讯录内存容量，若不够进行增容
	Check_Contact(pc);
	
		printf("请输入姓名:>");
		scanf("%s",pc->data[pc->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pc->sz].gender);
		printf("请输入电话:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pc->sz].addr);

		printf("添加成功\n");
		pc->sz++;
	
}
//找到指定的联系人
int Find_Contact(struct contact* pc)
{
	char input[NAME_MAX] = { 0 };
	printf("请输入要指定的联系人:>");
	scanf("%s",input);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, input) == 0)
		{
			return i;
		}
	}
	return - 1;
}
//删除指定联系人的信息
void Del_Contact(struct contact* pc)
{
	printf("删除指定联系人的信息\n");
	if (0 == pc->sz)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	else
	{
		int pos = Find_Contact(pc);
		if (-1 == pos)
		{
			printf("通讯录无此联系人\n");
			return;
		}
		else
		{
			int i = 0;
			for (i = pos; i < pc->sz - 1; i++)
			{
				pc->data[i] = pc->data[i + 1];
			}
			printf("删除成功\n");
			pc->sz--;
		}
	}
}
//查询指定联系人的信息
void Search_Contact(struct contact* pc)
{
	printf("查询指定联系人的信息\n");
	if (0 == pc->sz)
	{
		printf("通讯录为空，无法查询\n");
		return;
	}
	else
	{
		int pos = Find_Contact(pc);
		if (-1 == pos)
		{
			printf("通讯录无此联系人\n");
			return;
		}
		else
		{
			printf("%15s\t%5d\t%15s\t%15s\%15s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].gender,
				pc->data[pos].tele,
				pc->data[pos].addr);
	     }
    }
}
void Modify_Contact(struct contact* pc)
{
	printf("修改指定联系人的信息\n");
	if (0 == pc->sz)
	{
		printf("通讯录为空，无法查询\n");
		return;
	}
	else
	{
		int pos = Find_Contact(pc);
		if (-1 == pos)
		{
			printf("通讯录无此联系人\n");
			return;
		}
		else
		{
			printf("请输入姓名:>");
			scanf("%s", pc->data[pos].name);
			printf("请输入年龄:>");
			scanf("%d", &(pc->data[pos].age));
			printf("请输入性别:>");
			scanf("%s", pc->data[pos].gender);
			printf("请输入电话:>");
			scanf("%s", pc->data[pos].tele);
			printf("请输入地址:>");
			scanf("%s", pc->data[pos].addr);
		}
	}
}
//打印所有联系人信息
void Show_Contact(struct contact* pc)
{
	if (0 == pc->sz)
	{
		printf("通讯录为空，无法打印\n");
		return;
	}
	else
	{
		printf("%15s\t%5s\t%15s\t%15s\%15s\n\n", "name", "age", "gender", "telephone", "address");
		int i = 0;
		for (i = 0; i < pc->sz; i++)
		{
			printf("%15s\t%5d\t%15s\t%15s\t%15s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].gender,
				pc->data[i].tele,
				pc->data[i].addr);
		}
    }
}
////销毁静态通讯录
//void Destroy_Contact(struct contact* pc)
//{
//	free(pc->data);
//	memset(pc->data,0,sizeof(pc->data));
//	pc->sz = 0;
//}
//销毁动态通讯录
void Destroy_Contact(struct contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}