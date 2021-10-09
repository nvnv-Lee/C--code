#define _CRT_SECURE_NO_WARNINGS 1






////宏，将一个整数的二进制位的奇数位和偶数位交换。
//#include<stdio.h>
//#define FSWAP(N) (((N&0X55555555)<<1)|((N&0xaaaaaaaa)>>1))//0x55555555是十六进制的：01010101010101010101010101010101。
//                                                          //0xaaaaaaaa是十六进制的：10101010101010101010101010101010。
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个数字:>");
//	scanf("%d", &n);
//	printf("%d", FSWAP(n));
//	return 0;
//}





////题目：写一个宏，计算结构体中某变量相对于首地址的偏移
//#include <stdio.h>
//#define offsetof(m,n) (((char*)(&n))-((char*)(&m)))
//typedef struct A{
//	char a;
//	int b;
//	double c;
//}A;    //定义一个结构体
//int main()
//{
//	A p;  //定义结构体变量
//	printf("%d", offsetof(p, p.b));  //结构体起始地址相当于c变量的偏移量为8
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
//	printf("请依次输入a,b,c的值:>");
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
//	printf("请输入两个操作数:>");
//	scanf("%d %d",&a,&b);
//	while (c = a%b)//辗转相除法
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}





////打印1000-2000之间的闰年(能被4整除但不能被100整除或者能被400整除)
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





////打印100~200之间的素数(除了1和它本身以外没有任何整数能将其除尽)
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





////编写程序数一下1到 100 的所有整数中出现多少个数字9
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





////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
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





////求10 个整数中最大值
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





////在屏幕上输出9*9乘法口诀表
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





////编写代码在一个整形有序数组中查找具体的某个数    要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("请输入要查找的数:>");
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
//			printf("找到了，下标为:%d\n",mid);
//			break;
//		}
//	}
//	if (left >=right)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}





////猜数字游戏
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
//		printf("请选择菜单:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else if (input == 1)
//		{
//			while (input)
//			{
//				printf("请输入猜的数字:>");
//				scanf("%d", &gucess);
//				if (gucess < num)
//				{
//					printf("猜小了\n");
//					continue;
//				}
//				else if (gucess>num)
//				{
//					printf("猜大了\n");
//					continue;
//				}
//				else
//				{
//					printf("猜对了，数字为：%d\n", gucess);
//					break;
//				}
//			}
//	    }
//		else
//		{
//			printf("输入错误,请重新输入\n");
//			continue;
//		}
//	} while (input);
//	return 0;
//}





////实现一个函数，判断一个数是不是素数。     利用上面实现的函数打印100到200之间的素数。
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
//	//printf("请输入操作数:>");
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





////实现函数判断year是不是闰年
//#include <stdio.h>
//void Judge_Year(int i)
//{
//	if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");;
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&year);
//	Judge_Year(year);
//	
//	return 0;
//}





////实现一个函数来交换两个整数的内容
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





//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定      如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

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
	printf("请输入一个正整数:");
	scanf("%d", &n);
	MultiTable(n);
	system("pause");
	return 0;
}
