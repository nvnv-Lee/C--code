#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


////��̬��ʼ��ͨѶ¼
//void Init_Contact(struct contact* pc)
//{
//	pc->sz = 0;//Ĭ��û����Ϣ
//	memset(pc->data, 0, sizeof(pc->data));
//}
//��̬��ʼ��ͨѶ¼
void Init_Contact(struct contact* pc)
{
	pc->data = (struct peo_Infor*)malloc(CAPACITY*sizeof(struct peo_Infor));
	pc->sz = 0;
	pc->capacity = CAPACITY;
}
//���ͨѶ¼�ڴ���������������������
void Check_Contact(struct contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//��������
		struct peo_Infor* ptr = (struct peo_Infor*)malloc(pc->data, (CAPACITY + 2)*sizeof(struct peo_Infor));

		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;

			printf("���ݳɹ�\n");
		}
		else
		{
			perror("ͨѶ¼����ʧ��\n");
			exit(1);
		}
	}
}

//�����ϵ��
void Add_Contact(struct contact* pc)
{
	printf("�����ϵ��\n");
	//���ͨѶ¼�ڴ���������������������
	Check_Contact(pc);
	
		printf("����������:>");
		scanf("%s",pc->data[pc->sz].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pc->sz].gender);
		printf("������绰:>");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pc->sz].addr);

		printf("��ӳɹ�\n");
		pc->sz++;
	
}
//�ҵ�ָ������ϵ��
int Find_Contact(struct contact* pc)
{
	char input[NAME_MAX] = { 0 };
	printf("������Ҫָ������ϵ��:>");
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
//ɾ��ָ����ϵ�˵���Ϣ
void Del_Contact(struct contact* pc)
{
	printf("ɾ��ָ����ϵ�˵���Ϣ\n");
	if (0 == pc->sz)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	else
	{
		int pos = Find_Contact(pc);
		if (-1 == pos)
		{
			printf("ͨѶ¼�޴���ϵ��\n");
			return;
		}
		else
		{
			int i = 0;
			for (i = pos; i < pc->sz - 1; i++)
			{
				pc->data[i] = pc->data[i + 1];
			}
			printf("ɾ���ɹ�\n");
			pc->sz--;
		}
	}
}
//��ѯָ����ϵ�˵���Ϣ
void Search_Contact(struct contact* pc)
{
	printf("��ѯָ����ϵ�˵���Ϣ\n");
	if (0 == pc->sz)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ѯ\n");
		return;
	}
	else
	{
		int pos = Find_Contact(pc);
		if (-1 == pos)
		{
			printf("ͨѶ¼�޴���ϵ��\n");
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
	printf("�޸�ָ����ϵ�˵���Ϣ\n");
	if (0 == pc->sz)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ѯ\n");
		return;
	}
	else
	{
		int pos = Find_Contact(pc);
		if (-1 == pos)
		{
			printf("ͨѶ¼�޴���ϵ��\n");
			return;
		}
		else
		{
			printf("����������:>");
			scanf("%s", pc->data[pos].name);
			printf("����������:>");
			scanf("%d", &(pc->data[pos].age));
			printf("�������Ա�:>");
			scanf("%s", pc->data[pos].gender);
			printf("������绰:>");
			scanf("%s", pc->data[pos].tele);
			printf("�������ַ:>");
			scanf("%s", pc->data[pos].addr);
		}
	}
}
//��ӡ������ϵ����Ϣ
void Show_Contact(struct contact* pc)
{
	if (0 == pc->sz)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ӡ\n");
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
////���پ�̬ͨѶ¼
//void Destroy_Contact(struct contact* pc)
//{
//	free(pc->data);
//	memset(pc->data,0,sizeof(pc->data));
//	pc->sz = 0;
//}
//���ٶ�̬ͨѶ¼
void Destroy_Contact(struct contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}