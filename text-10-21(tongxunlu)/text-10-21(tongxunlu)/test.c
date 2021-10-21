#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW
};
void menu()
{
	printf("************************\n");
	printf("****0.exit     1.add****\n");
	printf("****2.del   3.search****\n");
	printf("****4.modify  5.show****\n");
	printf("****6.sort *************\n");
}
int main()
{
	//����һ��ͨѶ¼
	struct contact con;
	//��ʼ��ͨѶ¼
	Init_Contact(&con);
	int input = 0;
	do
	{
		menu();
		printf("�����������:>");
		scanf("%d",&input);
		switch (input)
		{
		case EXIT:
			printf("�˳���Ϸ\n");
			Destroy_Contact(&con);
			break;
		case ADD:
			Add_Contact(&con);
			break;
		case DEL:
			Del_Contact(&con);
			break;
		case SEARCH:
			Search_Contact(&con);
			break;
		case MODIFY:
			Modify_Contact(&con);
			break;	
		case SHOW:
			Show_Contact(&con);
			break;
		}
	} while (input);
	return 0;
}