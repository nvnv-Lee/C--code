#define _CRT_SECURE_NO_WARNINGS 1
////ʵ��һ�����������������ַ����е�k���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//void Left_Move(char *a, int len, int k)
//{
//	int temp = k%len;
//	int i = 0;
//	int j = 1;
//	for (i = 0; i < temp; i++)
//	{
//		char tmp = a[0];
//		for (j = 1; j < len; j++)
//		{
//			a[j - 1] = a[j];
//		}
//		a[len - 1] = tmp;
//	}
//	printf("%s\n", a);
//}
//int main()
//{
//	char a[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	Left_Move(a, strlen(a), k);
//	system("pause");
//	return 0;
//}






////ʵ��һ�����������������ַ����е�k���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#pragma warning(disable:4996)
//void left_rotate(char* arr, int sz, int k)
//{
//	int i = 0;
//	int len = k%sz;
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		char tmp = arr[0];
//		for (j = 1; j < sz; j++)
//		{
//			arr[j-1] = arr[j ];
//		}
//		arr[sz - 1] = tmp;
//	}
//	printf("%s\n",arr);
//}
//int main()
//{
//	char arr[] = { "ABCD" };
//	int sz = strlen(arr);
//	int k = 0;
//	printf("�������������ֵĸ���:>");
//	scanf("%d",&k);
//	left_rotate(arr, sz, k);
//	return 0;
//}





////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#pragma warning(disable:4996)
//int left_rotate(char* arr1,char*arr2, int sz)
//{
//	if (*arr1 == *arr2)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			int j = 0;
//			char tmp = arr1[0];
//			for (j = 1; j < sz; j++)
//			{
//				arr1[j - 1] = arr1[j];
//			}
//			arr1[sz - 1] = tmp;
//			if (*arr1== *arr2)
//			{
//				return 1;
//			}
//			else
//			{
//				continue;
//			}
//		}
//		return -1;	
//	}
//}
//int main()
//{
//	char arr1[] = { "ABCD" };
//	char arr2[] = { "CDAB" };
//	int sz1 = strlen(arr1);
//	int sz2 = strlen(arr2);
//	if (sz1 == sz2)
//	{
//		int m=left_rotate(arr1, arr2, sz1);
//		if (1 == m)
//		{
//			printf("�ַ���arr1���ַ���arr2�����õ�\n");
//		}
//		else
//		{
//			printf("�����ַ�������һ�������ݲ�һ��\n");
//		}
//	}
//	else
//	{
//		printf("�����ַ������Ȳ�һ��\n");
//	}
//	return 0;
//}






////���Ͼ���
////��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
////Ҫ��ʱ�临�Ӷ�С��O(N);
//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROW 3
//#define COL 3
//void Findnum(int arr[ROW][COL], int row, int col, int key)
//{
//	int left = 0;
//	int right = col - 1;
//	while ((left >= 0) && (right < col))
//	{
//		//����������С��key���������һλ��
//		if (arr[left][right] < key)
//		{
//			left++;
//		}
//		//���������ִ���key������ǰ��һλ��
//		if (arr[left][right] > key)
//		{
//			right--;
//		}
//		//���������ֵ���key���򷵻�1��
//		if (arr[left][right] == key)
//		{
//			printf("�ҵ��ˣ�ROW=%d  COL=%d\n",left,right);
//			break;
//		}
//	}
//	if ((left<0) || (right>col))
//	{
//		printf("�Ҳ���\n");
//	}
//}
//int main()
//{
//	//����һ����ά���飻
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//�ҳ����������9������֣�
//	int key = 5;
//		Findnum(arr, ROW, COL, key);
//	
//	system("pause");
//	return 0;
//}






////��ϰʹ�ÿ⺯����qsort����������͵�����
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//
////�ַ���
//int cmp(const void* a, const void* b) {
//	return *(char*)a - *(char*)b;
//}
//
//
//int main() {
//	char arr[] = "akvhelb";
//	int size = strlen(arr);
//	for (int i = 0; i < size; i++) {
//		printf("s", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, size, sizeof(char), cmp);
//	for (int i = 0; i < size; i++) {
//		printf("%s", arr[i]);
//	}
//
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
////double��
//int cmp(const void* a, const void* b) {
//	return *(double*)a - *(double*)b;
//}
//
//
//int main() {
//	double arr2[] = { 8.4, 6.3, 7.7, 9.3, 5.1, 1.0 };
//	int size = sizeof(arr2) / sizeof(arr2[0]);
//	for (int i = 0; i < size; i++) {
//		printf("%f ", arr2[i]);
//	}
//	printf("\n");
//	qsort(arr2, size, sizeof(double), cmp);
//	for (int i = 0; i < size; i++) {
//		printf("%f ", arr2[i]);
//	}
//
//
//	system("pause");
//	return 0;
//}
//
//
//
////�ַ�����
//int cmp(const void* a, const void* b) {
//	return strcmp(*(char**)a, *(char**)b);
//}
//
//
//int main() {
//	char* arr3[] = { "kkk", "hhh", "bbb", "rrr" };
//	int size = sizeof(arr3) / sizeof(arr3[0]);
//	for (int i = 0; i < size; i++) {
//		printf("%s", arr3[i]);
//	}
//	printf("\n");
//	qsort(arr3, size, sizeof(char*), cmp);
//	for (int i = 0; i < size; i++) {
//		printf("%s", arr3[i]);
//	}
//
//
//	system("pause");
//	return 0;
//}






//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int cmp_int(const void *e1, const void *e2)
{
	return (*(int*)e1 - *(int*)e2);

}
void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
//void qsort(void *base, -���������ݵ���ʼλ��
//	       size_t num,   -Ԫ�ظ���
//		   size_t width, -ÿ��Ԫ�صĿ��
//		   int(*cmp)(const void *e1, const void *e2)
//		   );

//ģ��ʵ��q_sort
void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//��������Ԫ�رȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//���������˳��ͽ���
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
void test3()
{
	//qsort ������������
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
int main()
{
	test3();
	return 0;
}