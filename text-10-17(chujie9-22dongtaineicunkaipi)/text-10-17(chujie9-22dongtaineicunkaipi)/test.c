#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 10;//4 byte
//	int arr[10];//40 byte
//
//	return 0;
//}

//
//��̬�ڴ����
//
#include <stdlib.h>
//
//int main()
//{
//	//int arr[10] = {0};
//	//����ռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//���ٳɹ���
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	
//	return 0;
//}

#include <string.h>
#include <errno.h>
//
//int main()
//{
//	//����10��int�Ŀռ�
//	int*p = (int*)calloc(10, sizeof(int));
//	
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	
//	//����ɹ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//�ռ䲻���ˣ����ӿռ���20 ��int
//	int*ptr = (int*)realloc(p, 20*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	else
//	{
//		return -1;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	//��ӡ
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int  main()
//{
//	int*p = (int*)malloc(20);
//	if (p == NULL)
//		return -1;
//	//
//	*p = 0;//ֱ������д�������з��յģ�����
//
//	return 0;
//}
//�Զ�̬���ٿռ��Խ�����
//
//int main()
//{
//	int* p = (int*)malloc(200);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//ʹ��
//	int i = 0;
//	//Խ�����
//	for (i = 0; i < 80; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 80; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return -1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//��ͬһ�鶯̬�ڴ����ͷ�
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return -1;
//	//ʹ��
//	//...
//
//	//2���ͷ�-�Ǵ����
//	free(p);
//	free(p);
//
//	return 0;
//}

//��̬�����ڴ������ͷ�
//�ڶ���������Ŀռ䣬��2�л��յķ�ʽ
//1. ����free
//2. �����˳���ʱ������Ŀռ�Ҳ�����
//

//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return -1;
//	//ʹ��
//	//�����ͷ���
//	getchar();//
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//		return -1;
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//p����һ��Ұָ��
//
//	p = NULL;
//	//p����NULL������Ұָ��
//
//	return 0;
//}
