#define _CRT_SECURE_NO_WARNINGS 1


////�������10��������ת��Ϊ6�������
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
//	printf("�����������:>");
//	scanf("%d",&n);
//	transform(n);
//	
//	return 0;
//}






////ʵ��һ�������������ð������
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





////������A�е����ݺ�����B�е����ݽ��н�����������һ����
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
//		printf("�������鲻һ���󣬲��ܽ��н�����\n");
//	}
//	return 0;
//}




////���鵹��
//#include<stdio.h>
//#include<windows.h>
//#include<string.h> 
//#include<assert.h> 
//
//void init(int arr[], int size)//�����ʼ��
//{
//	assert(arr);//�꣬���ĳ�������Ƿ������������������ֱ����ֹ���򣬽�����ӡ��ֹ�������Ϣ��
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		arr[i] = i;
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[], int size)//���鵹��
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
//void empty(int arr[], int size)//��������
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
//	printf("���������г�ʼ����\n");
//	init(arr, size);
//	printf("\n");
//	printf("�����������\n");
//	reverse(arr, size);
//	printf("\n");
//	printf("��������飺\n");
//	empty(arr, size);
//	printf("\n");
//	system("pause");
//	return 0;
//}





////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
////arr��һ������һά���顣
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





////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	printf("�����������:>");
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





////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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




////�ַ��������ӡ
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





////��ӡ����
//#include <stdio.h>
//int main()
//{
//	int n, i, j, k;
//	scanf("%d", &n);
//	n = n / 2 + 1;
//	for (i = 0; i<n; i++)//����������������
//	{
//		for (j = 1; j<n - i; j++)//����ǰ�ÿո񣬵�n��ǰ�ÿո�Ϊn-1
//			printf("  ");//�����ӡ�����ո���Ϊÿ��*�ź�����һ���ո�
//		for (k = 0; k <= 2 * i; k++)//���������*����n���У�2*n-1����*
//			printf("%c ", '*');
//		putchar('\n');
//	}
//	for (i = 1; i<n; i++)//������
//	{
//		for (j = 0; j<i; j++)
//			printf("  ");
//		for (k = 2 * (n - i - 1); k >= 0; k--)
//			printf("%c ", '*');
//		putchar('\n');
//	}
//	return 0;
//}





//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
#include<stdio.h>
#include<stdlib.h>
int Func_drink(int money) {
	int ret = money;//���պȵ�����ˮƿ��
	int ex = 0;//�ÿ�ƿ����������ˮƿ��
	int rest = 0;//ÿ���ÿ�ƿ����ʣ���ƿ��
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
	printf("������Ǯ����");
	scanf("%d", &money);
	printf("���Ժȵ�����ˮƿ��Ϊ��%d\n", Func_drink(money));
	system("pause");
	return 0;
}
