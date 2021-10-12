#define _CRT_SECURE_NO_WARNINGS 1



////函数的链式访问
////例一
//#include <stdio.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n",ret);
//	return 0;
//}



////例二
//// printf函数返回的值：  返回的是打印字符的个数；若出错为负数（negative）
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//打印出的结果为4321
//	return 0;
//}





////汉诺塔问题：古代有一个梵塔，塔内有三个座A,B,C，开始时A座上有64个盘子，盘子大小不等，大的在下，小的在上，有一个和尚想把这64 个盘子从A移到C，规定每次只能移到一个盘子且在移的过程中始终保持打大的在下，小的在上。用编程写出移动过程。 
//我们要做的就是将A中的圈圈，移动到C上，每次只能移动一个圈圈，并且要保障大圈在下，小圈在上。
//这里我们很容易能够想到一个方案，就是借助剩余的那根柱子B来完成，以下的每一步都要保证大圈在小圈下面（上图有8个圈圈）：
//第一步：将A中的7个圈圈移动到柱子B上
//第二步：将A剩下的最后一个圈圈移动到C上
//第三步：将B中的7个圈圈移动到柱子C上
//接下来要简单说一下什么是分治思想，这个是递归的核心思想。分治，即分而治之，将一大问题化解成诺干个非常简单而且相同的小问题，中国古话说：“大事化小，小事化了。”将的就是这个道理。下面我们就把上面的第一步和第三步细化一下：
//对于第一步：
//1.1：将A中的6个圈圈移动到柱子C上
//1.2：将A中剩下的最后一个圈圈移动到柱子B上
//1.3：将C上的6个圈圈移动到柱子B上
//对于第二步：
//2.1：将B中的6个圈圈移动到柱子A上
//2.2：将B中剩下的最后一个圈圈移动到柱子C上
//2.3：将A上的6个圈圈移动到柱子C上
//我们发现1.1、1.3、2.1、2.3又可以细化，一直细化到只有一个圈圈为止。需要注意的是，除了只有一个圈圈的移动，其他的操作都需要借助剩余的那根柱子完成。

//#include <stdio.h>
//void hannota(int m, char a, char b, char c)
//{
//	if (m == 1)
//	{
//		printf("%c-->%c\n",a,c);
//	}
//	else
//	{
//		hannota(m - 1, a, c, b);
//		printf("%c-->%c\n", a, c);
//		hannota(m - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	printf("请输入操作数:>");
//	scanf("%d",&m);
//	hannota(m ,'a', 'b', 'c');
//	return 0;
//}





//青蛙跳台阶问题      题目：一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个n级的台阶总共有多少种跳法？
//求解步骤：
//1.当台阶数为1时，那么只有一种跳法：（[1]）;
//2.当台阶数为2时，有两种跳法：（[1], [2]）;
//3.当台阶数为3时，有3种跳法：（[1, 1, 1], [1, 2], [2, 1]）;
//4.当台阶数为4时，有5种跳法：（[1, 1, 1, 1], [1, 1, 2], [1, 2, 1], [2, 1, 1], [2, 2], ）
//5.当台阶数为5时，有8种跳法：（[1, 1, 1, 1, 1], [1, 1, 1, 2], [1, 1, 2, 1], [1, 2, 1, 1], [2, 1, 1, 1], [1, 2, 2], [2, 1, 2], [2, 2, 1]）

//int Fib(int fib)
//{
//	if (fib == 1)
//	{
//		return 1;
//	}
//	else if (fib == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return Fib(fib - 1) + Fib(fib - 2);
//	}
//}
//int main()
//{
//	int fib = 0;
//	printf("请输入青蛙要跳的台阶数：>");
//	scanf("%d",&fib);
//	int m=Fib(fib);
//	printf("方法数：%d\n",m);
//	return 0;
//
//}





////递归方式实现打印一个整数的每一位
//#include <stdio.h>
//
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a/10);
//	}
//	printf("%d ",a%10);
//}
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}






////非递归实现求n的阶乘（不考虑溢出的问题）
//#include <stdio.h>
//int Jiecheng(int n)
//{
//	int i = 0;
//	int m = 1;
//	for(i = 1; i<=n; i++)
//	{
//		m = m*i;
//	}
//	return m;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入操作数:>");
//	scanf("%d", &n);
//	int m=Jiecheng(n);
//	printf("%d的阶乘为:%d\n",n,m);
//	return 0;
//}




////递归实现求n的阶乘（不考虑溢出的问题）
//#include <stdio.h>
//int Jiecheng(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Jiecheng(n - 1);
//	}
//}
//int main()
//{
//		int n = 0;
//		printf("请输入操作数:>");
//		scanf("%d", &n);
//		int m=Jiecheng(n);
//		printf("%d的阶乘为:%d\n",n,m);
//		return 0;
//}





////非递归实现strlen
//#include <stdio.h>
//int my_strlen(char* ch)
//{
//	if (ch == NULL)
//	{
//		return -1;
//	}
//
//	int count = 0;
// 	while (*ch != '\0')
//	{
//		ch++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char* ch = "abcdef";
//	printf("原字符串是 > %s\n", ch);
//	int len = my_strlen(ch);
//	printf("strlen=%d\n",len);
//	return 0;
//}





////递归实现strlen
//#include <stdio.h>
//int my_strlen(char* ch)
//{
//		if (ch == NULL)
//		{
//			return -1;
//		}
//		if (*ch != '\0')
//		{
//			return 1 + my_strlen(ch + 1);
//		}
//		else
//		{
//			return 0;
//		}
//}
//int main()
//{
//		char* ch = "abcdef";
//		printf("原字符串是 > %s\n", ch);
//		int len = my_strlen(ch);
//		printf("strlen=%d\n",len);
//		return 0;
//}





////编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列，不是逆序打印。
////要求：不能使用C函数库中的字符串操作函数。
////比如 :
////char arr[] = "abcdef";
////逆序之后数组的内容变成：fedcba
//#include<stdio.h>
//#include<string.h>
//void reverse(char* str)
//{
//	char tmp = *str;//用tmp存入字符串的第一个字符
//	int len = strlen(str);//求当前字符串的长度 ps:每次递归，长度都会变化
//	*str = *(str + len - 1);//将'\0'的前一个元素赋给第一个
//	*(str + len - 1) = '\0';//将'\0'的前一个元素先赋成'\0'
//	if (strlen(str)>1)//当字符串长度大于1，递归  ps:每次替换一直向中间逼近，当没有字符或只有一个字符的时候都不必继续
//		reverse(str + 1);//进行递归，首地址指针后移
//	*(str + len - 1) = tmp;//全部递归完成后，将'\0'还原成原来的中间元素	
//}
//int main()
//{
//	char str[] = "abcdef";
//	reverse(str);
//	printf("%s\n", str);
//	return 0;
//}







////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用c，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//#include<stdio.h>
//int DigitSum(int x)
//{
//	if (x > 9)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//	else
//		return x;
//}
//
//int main()
//{
//	int num = 1729;
//	int ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//





////编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//#include<windows.h> 
//
//int power(int n, int k)
//{
//	if (k <= 0)
//		return 1;
//	else
//		return n*power(n, k - 1);
//}
//int main()
//{
//	int n = 3;
//	int k = 2;
//	//scanf("%d%d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}




////递归实现求第n个斐波那契数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Fib(n);
//int main()
//{
//	printf("请输入数字：");
//	int n;
//	scanf("%d", &n);
//	int sum = Fib(n);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int Fib(n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}





////非递归实现求第n个斐波那契数
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	printf("input number:");
//	int n;
//	scanf("%d", &n);
//	int sum, num1 = 1, num2 = 1;
//	if (n == 1 || n == 2)
//	{
//		sum = 1;
//	}
//	else
//	{
//		for (int i = 3; i <= n; i++)
//		{
//			sum = num1 + num2;
//			num2 = num1;
//			num1 = sum;
//		}
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}





//
//#pragma
//#define N 100
//
////静态顺序表
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//表示数组中存储了多少个数据
//}SL;
//
//void SeqListPushBack(SL* ps, SLDataType x);