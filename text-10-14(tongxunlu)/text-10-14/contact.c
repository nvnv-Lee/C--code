#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��̬�İ汾
//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;//Ĭ��û����Ϣ
//	//memset(pc->data, 0, MAX*sizeof(struct PeoInfo));
//	memset(pc->data, 0, sizeof(pc->data));
//}

void CheckCapacity(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//��������
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;

			printf("���ݳɹ�\n");
		}
		else
		{
			perror("ͨѶ¼����ʧ��");
			exit(1);
		}
	}
}

void LoadContact(struct Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf)
	{
		perror("LoadContact::fopen");
		return;
	}
	//���ļ�
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pf))
	{
		//�ռ���������Ļ��������ӿռ�
		CheckCapacity(pc);

		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//��̬�İ汾
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ *sizeof(struct PeoInfo));
	pc->capacity = DEFAULT_SZ;//3

	//�����ļ���Ϣ��ͨѶ¼��
	LoadContact(pc);
}

//��̬�İ汾
//void AddContact(struct Contact* pc)
//{
//	struct PeoInfo tmp = {0};
//
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼����\n");
//	}
//	else
//	{
//		printf("����������:>");
//		scanf("%s", tmp.name);
//		printf("����������:>");
//		scanf("%d", &(tmp.age));
//		printf("�������Ա�:>");
//		scanf("%s", tmp.sex);
//		printf("������绰:>");
//		scanf("%s", tmp.tele);
//		printf("�������ַ:>");
//		scanf("%s", tmp.addr);
//
//		pc->data[pc->sz] = tmp;
//		//
//		printf("��ӳɹ�\n");
//		pc->sz++;
//	}
//
//
//	//if (pc->sz == MAX)
//	//{
//	//	printf("ͨѶ¼����\n");
//	//}
//	//else
//	//{
//	//	printf("����������:>");
//	//	scanf("%s", pc->data[pc->sz].name);
//	//	printf("����������:>");
//	//	scanf("%d", &(pc->data[pc->sz].age));
//	//	printf("�������Ա�:>");
//	//	scanf("%s", pc->data[pc->sz].sex);
//	//	printf("������绰:>");
//	//	scanf("%s", pc->data[pc->sz].tele);
//	//	printf("�������ַ:>");
//	//	scanf("%s", pc->data[pc->sz].addr);
//
//	//	//
//	//	printf("��ӳɹ�\n");
//	//	pc->sz++;
//	//}
//}

//��̬�����İ汾
void AddContact(struct Contact* pc)
{
	CheckCapacity(pc);
	//¼�������˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ�\n");
}


void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void ShowContact(struct Contact* pc)
{
	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n",
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		//��ӡÿһ������
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindContactByName(const struct Contact* pc, const char*name)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//�Ҳ�����
	return -1;
}

void DelContact(struct Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	//����
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("ָ������ϵ�˲�����\n");
	}
	else
	{
		//ɾ��
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		//
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("����Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n",
			"name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	printf("����Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("�������µ�����:>");
		scanf("%s", pc->data[pos].name);
		printf("�������µ�����:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������µ��Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("�������µĵ绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������µĵ�ַ:>");
		scanf("%s", pc->data[pos].addr);
	}
}


void SaveContact(struct Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf)
	{
		perror("SaveContact::fopen");
		return;
	}

	//д����
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		//fwrite(&(pc->data[i]), sizeof(struct PeoInfo), 1, pf);
		fwrite(pc->data + i, sizeof(struct PeoInfo), 1, pf);
	}

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}
