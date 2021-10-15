#define _CRT_SECURE_NO_WARNINGS 1
////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
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






////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
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
//	printf("请输入左旋数字的个数:>");
//	scanf("%d",&k);
//	left_rotate(arr, sz, k);
//	return 0;
//}





////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////AABCD右旋一个字符得到DAABC
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
//			printf("字符串arr1由字符串arr2左旋得到\n");
//		}
//		else
//		{
//			printf("两个字符串长度一样但内容不一样\n");
//		}
//	}
//	else
//	{
//		printf("两个字符串长度不一样\n");
//	}
//	return 0;
//}






////杨氏矩阵
////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
////要求：时间复杂度小于O(N);
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
//		//如果这个数字小于key，则向后移一位；
//		if (arr[left][right] < key)
//		{
//			left++;
//		}
//		//如果这个数字大于key，则向前移一位；
//		if (arr[left][right] > key)
//		{
//			right--;
//		}
//		//如果这个数字等于key，则返回1；
//		if (arr[left][right] == key)
//		{
//			printf("找到了，ROW=%d  COL=%d\n",left,right);
//			break;
//		}
//	}
//	if ((left<0) || (right>col))
//	{
//		printf("找不到\n");
//	}
//}
//int main()
//{
//	//定义一个二维数组；
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//找出这个数组中9这个数字；
//	int key = 5;
//		Findnum(arr, ROW, COL, key);
//	
//	system("pause");
//	return 0;
//}






////练习使用库函数，qsort排序各种类型的数据
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//
////字符型
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
////double型
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
////字符串型
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






//模仿qsort的功能实现一个通用的冒泡排序
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
//void qsort(void *base, -待排序数据的起始位置
//	       size_t num,   -元素个数
//		   size_t width, -每个元素的宽度
//		   int(*cmp)(const void *e1, const void *e2)
//		   );

//模拟实现q_sort
void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void *e1, const void *e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//相邻两个元素比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//如果不满足顺序就交换
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
void test3()
{
	//qsort 排序整型数组
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