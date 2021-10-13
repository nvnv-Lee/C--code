#define _CRT_SECURE_NO_WARNINGS 1


////将输入的10进制数字转换为6进制输出
//#include <stdio.h>
//void transform(int n)
//{
//	int i = 0;
//	int arr[1000] = { 0 };
//	while (n)
//	{
//		arr[i] = n % 6;
//		i++;
//		n = n / 6;
//	}
//	for (i = i - 1; i >= 0; i--)
//	{
//		printf("%d",arr[i]);
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&n);
//	transform(n);
//	
//	return 0;
//}






////实现一个对整形数组的冒泡排序
//#include <stdio.h>
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 4, 6, 5, 7, 9, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include <stdio.h>
//void change(int* arr1, int* arr2, int sz1)
//{
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		int* tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	
//}
//int main()
//{
//	int arr1[] = { 0, 1, 2, 3, 4 };
//	int arr2[] = { 5, 6, 7, 8, 9 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	if (sz1 == sz2)
//	{
//		change(arr1,arr2,sz1);
//		int i = 0;
//		for (i = 0; i < sz1; i++)
//		{
//			printf("%d ",arr1[i]);
//		}
//		printf("\n");
//		for (i = 0; i < sz1; i++)
//		{
//			printf("%d ", arr2[i]);
//		}
//	}
//	else
//	{
//		printf("两个数组不一样大，不能进行交换。\n");
//	}
//	return 0;
//}




////数组倒置
//#include<stdio.h>
//#include<windows.h>
//#include<string.h> 
//#include<assert.h> 
//
//void init(int arr[], int size)//数组初始化
//{
//	assert(arr);//宏，检测某个条件是否成立，条件不成立则直接终止程序，进而打印终止的相关信息。
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		arr[i] = i;
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[], int size)//数组倒置
//{
//	assert(arr);
//	int i = 0;
//	int start = 0;
//	int end = size - 1;
//	while (start <= end)
//	{
//		int* tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//	for (i = 0; i < size; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void empty(int arr[], int size)//数组清零
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		arr[i] = 0;
//		printf("%d", arr[i]);
//	}
//
//}
//
//int main()
//{
//	int arr[10];
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("请对数组进行初始化：\n");
//	init(arr, size);
//	printf("\n");
//	printf("请对数组逆序：\n");
//	reverse(arr, size);
//	printf("\n");
//	printf("请清空数组：\n");
//	empty(arr, size);
//	printf("\n");
//	system("pause");
//	return 0;
//}





////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
////arr是一个整形一维数组。
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}





////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&n);
//	int tmp = n;
//	for (i = 0; i < 5; i++)
//	{
//		sum = (sum + n);
//		n = ((n * 10 )+ tmp);
//	}
//	printf("Sn=%d",sum);
//	return 0;
//}





////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <=100000;i++)
//	{
//		int j = 0;
//		int tmp = i;
//		int m = i;
//		int sum = 0;
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			j++;
//		}
//		while (m)
//		{
//			m = m % 10;
//			sum = sum + pow(m, j);
//			m = m / 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//}




////字符串逆序打印
//#include <stdio.h>
//#include <string.h>
//
//int main()
//
//{
//
//	int i;
//	char s[100] = "I am a student";
//	//gets(s);
//	for (i = strlen(s) - 1; i >= 0; i--)
//	{
//		putchar(s[i]);
//	}
//	return 0;
//}





////打印菱形
//#include <stdio.h>
//int main()
//{
//	int n, i, j, k;
//	scanf("%d", &n);
//	n = n / 2 + 1;
//	for (i = 0; i<n; i++)//控制行数，上三角
//	{
//		for (j = 1; j<n - i; j++)//控制前置空格，第n行前置空格为n-1
//			printf("  ");//这里打印两个空格，因为每个*号后面有一个空格
//		for (k = 0; k <= 2 * i; k++)//控制输出的*，第n行有（2*n-1）个*
//			printf("%c ", '*');
//		putchar('\n');
//	}
//	for (i = 1; i<n; i++)//下三角
//	{
//		for (j = 0; j<i; j++)
//			printf("  ");
//		for (k = 2 * (n - i - 1); k >= 0; k--)
//			printf("%c ", '*');
//		putchar('\n');
//	}
//	return 0;
//}





//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include<stdio.h>
#include<stdlib.h>
int Func_drink(int money) {
	int ret = money;//最终喝到的汽水瓶数
	int ex = 0;//用空瓶交换到的汽水瓶数
	int rest = 0;//每次用空瓶换后剩余空瓶数
	ex = money;
	while (ex >= 1) {
		ex += rest;
		ret += ex / 2;
		rest = ex % 2;
		ex /= 2;
	}
	return ret;
}
int main() {
	int money;
	printf("请输入钱数：");
	scanf("%d", &money);
	printf("可以喝到的汽水瓶数为：%d\n", Func_drink(money));
	system("pause");
	return 0;
}
