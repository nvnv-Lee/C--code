#define _CRT_SECURE_NO_WARNINGS 1






////�꣬��һ�������Ķ�����λ������λ��ż��λ������
//#include<stdio.h>
//#define FSWAP(N) (((N&0X55555555)<<1)|((N&0xaaaaaaaa)>>1))//0x55555555��ʮ�����Ƶģ�01010101010101010101010101010101��
//                                                          //0xaaaaaaaa��ʮ�����Ƶģ�10101010101010101010101010101010��
//
//int main()
//{
//	int n = 0;
//	printf("������һ������:>");
//	scanf("%d", &n);
//	printf("%d", FSWAP(n));
//	return 0;
//}





////��Ŀ��дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ��
//#include <stdio.h>
//#define offsetof(m,n) (((char*)(&n))-((char*)(&m)))
//typedef struct A{
//	char a;
//	int b;
//	double c;
//}A;    //����һ���ṹ��
//int main()
//{
//	A p;  //����ṹ�����
//	printf("%d", offsetof(p, p.b));  //�ṹ����ʼ��ַ�൱��c������ƫ����Ϊ8
//	system("pause");
//	return 0;
//}






//#include <stdio.h>
//void Order_Number(int x,int y,int z)
//{
//	if (x < y)
//	{
//		int tmp = y;
//		y = x;
//		x = tmp;
//	}
//	
//	if (x < z)
//	{
//		int tmp = z;
//		z = x;
//		x = tmp;
//	}
//	if (y < z)
//	{
//		int tmp = z;
//		z = y;
//		y = tmp;
//	}
//	printf("%d %d %d",x,y,z);
//}
//int main()
//{
//	int a, b, c;
//	printf("����������a,b,c��ֵ:>");
//	scanf("%d %d %d",&a,&b,&c);
//	Order_Number(a, b, c);
//	return 0;
//}




//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == (i % 3))
//			printf("%d ", i);
//		else
//			continue;
//	}
//	return 0;
//}






//#include <stdio.h>
//int main()
//{
//	int a, b,c;
//	printf("����������������:>");
//	scanf("%d %d",&a,&b);
//	while (c = a%b)//շת�����
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}





////��ӡ1000-2000֮�������(�ܱ�4���������ܱ�100���������ܱ�400����)
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0)))
//		{
//			printf("%d ",i);
//		}
//		else
//		{
//			continue;
//		}
//	}
//	return 0;
//}





////��ӡ100~200֮�������(����1������������û���κ������ܽ������)
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//			else
//				continue;
//		}
//		if (j == i)
//			printf("%d ",i);
//	}
//	return 0;
//}





////��д������һ��1�� 100 �����������г��ֶ��ٸ�����9
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			num++;
//		if (i % 10 == 9)  
//			num++;
//	}
//	printf("num=%d\n",num);
//}





////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int j = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = (sum + (1.0 / i)*j);
//		j = -j;
//	}
//	printf("sum=%f\n",sum);
//	return 0;
//}





////��10 �����������ֵ
//#include <stdio.h>
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		else
//		{
//			continue;
//		}
//	}
//	printf("max=%d\n",max);
//}





////����Ļ�����9*9�˷��ھ���
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int m = i*j;
//			printf("%d*%d=%-2d  ",i,j,m);
//		}
//		printf("\n");
//	}
//	return 0;
//}





////��д������һ���������������в��Ҿ����ĳ����    Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("������Ҫ���ҵ���:>");
//	scanf("%d", &input);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2 + 1;
//		if (input < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (input>arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n",mid);
//			break;
//		}
//	}
//	if (left >=right)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}





////��������Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****1.start      0.exit*****\n");
//	printf("*****************************\n");
//}
//int main()
//{
//	int input = 0;
//	int gucess = 0;
//	do
//	{
//		menu();
//		srand((unsigned int)time(NULL));
//		int num = rand() % 101;
//		printf("��ѡ��˵�:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else if (input == 1)
//		{
//			while (input)
//			{
//				printf("������µ�����:>");
//				scanf("%d", &gucess);
//				if (gucess < num)
//				{
//					printf("��С��\n");
//					continue;
//				}
//				else if (gucess>num)
//				{
//					printf("�´���\n");
//					continue;
//				}
//				else
//				{
//					printf("�¶��ˣ�����Ϊ��%d\n", gucess);
//					break;
//				}
//			}
//	    }
//		else
//		{
//			printf("�������,����������\n");
//			continue;
//		}
//	} while (input);
//	return 0;
//}





////ʵ��һ���������ж�һ�����ǲ���������     ��������ʵ�ֵĺ�����ӡ100��200֮���������
//
//#include <stdio.h>
//int Judge_Sushu(int i)
//{
//	int j = 0;
//    for (j = 2; j < i; j++)
//	{
//			if (i%j == 0)
//				return -1;
//			else
//				continue;
//	}
//	if (j == i)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	//int input = 0;
//	//printf("�����������:>");
//	//scanf("%d",&input);
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = Judge_Sushu(i);
//		if (a == 1)
//		{
//			printf("%d ",i);
//		}
//		if (a == -1)
//		{
//			continue;
//		}
//	}
//	return 0;
//}





////ʵ�ֺ����ж�year�ǲ�������
//#include <stdio.h>
//void Judge_Year(int i)
//{
//	if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");;
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("�����������:>");
//	scanf("%d",&year);
//	Judge_Year(year);
//	
//	return 0;
//}





////ʵ��һ��������������������������
//#include <stdio.h>
//void Exchange_Number(int* x, int* y)
//{
//	int* tmp = *y;
//	 *y = *x;
//     *x = tmp;
//}
//int main()
//{
//	int a = 2;
//	int b = 22;
//	Exchange_Number(&a, &b);
//	printf("a=%d\nb=%d\n",a,b);
//	return 0;
//}





//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��      �磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

#include <stdio.h>
#include <stdlib.h>
void MultiTable(int n) 
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d\t", i, j, i*j);
		}
		printf("\n");
	}
}
int main() {
	int n = 0;
	printf("������һ��������:");
	scanf("%d", &n);
	MultiTable(n);
	system("pause");
	return 0;
}
