#define _CRT_SECURE_NO_WARNINGS 1



////��������ʽ����
////��һ
//#include <stdio.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n",ret);
//	return 0;
//}



////����
//// printf�������ص�ֵ��  ���ص��Ǵ�ӡ�ַ��ĸ�����������Ϊ������negative��
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//��ӡ���Ľ��Ϊ4321
//	return 0;
//}





////��ŵ�����⣺�Ŵ���һ��������������������A,B,C����ʼʱA������64�����ӣ����Ӵ�С���ȣ�������£�С�����ϣ���һ�����������64 �����Ӵ�A�Ƶ�C���涨ÿ��ֻ���Ƶ�һ�����������ƵĹ�����ʼ�ձ��ִ������£�С�����ϡ��ñ��д���ƶ����̡� 
//����Ҫ���ľ��ǽ�A�е�ȦȦ���ƶ���C�ϣ�ÿ��ֻ���ƶ�һ��ȦȦ������Ҫ���ϴ�Ȧ���£�СȦ���ϡ�
//�������Ǻ������ܹ��뵽һ�����������ǽ���ʣ����Ǹ�����B����ɣ����µ�ÿһ����Ҫ��֤��Ȧ��СȦ���棨��ͼ��8��ȦȦ����
//��һ������A�е�7��ȦȦ�ƶ�������B��
//�ڶ�������Aʣ�µ����һ��ȦȦ�ƶ���C��
//����������B�е�7��ȦȦ�ƶ�������C��
//������Ҫ��˵һ��ʲô�Ƿ���˼�룬����ǵݹ�ĺ���˼�롣���Σ����ֶ���֮����һ�����⻯���ŵ�ɸ��ǳ��򵥶�����ͬ��С���⣬�й��Ż�˵�������»�С��С�»��ˡ������ľ�����������������ǾͰ�����ĵ�һ���͵�����ϸ��һ�£�
//���ڵ�һ����
//1.1����A�е�6��ȦȦ�ƶ�������C��
//1.2����A��ʣ�µ����һ��ȦȦ�ƶ�������B��
//1.3����C�ϵ�6��ȦȦ�ƶ�������B��
//���ڵڶ�����
//2.1����B�е�6��ȦȦ�ƶ�������A��
//2.2����B��ʣ�µ����һ��ȦȦ�ƶ�������C��
//2.3����A�ϵ�6��ȦȦ�ƶ�������C��
//���Ƿ���1.1��1.3��2.1��2.3�ֿ���ϸ����һֱϸ����ֻ��һ��ȦȦΪֹ����Ҫע����ǣ�����ֻ��һ��ȦȦ���ƶ��������Ĳ�������Ҫ����ʣ����Ǹ�������ɡ�

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
//	printf("�����������:>");
//	scanf("%d",&m);
//	hannota(m ,'a', 'b', 'c');
//	return 0;
//}





//������̨������      ��Ŀ��һֻ����һ�ο�������1��̨�ף�Ҳ��������2��̨�ס������������һ��n����̨���ܹ��ж�����������
//��ⲽ�裺
//1.��̨����Ϊ1ʱ����ôֻ��һ����������[1]��;
//2.��̨����Ϊ2ʱ����������������[1], [2]��;
//3.��̨����Ϊ3ʱ����3����������[1, 1, 1], [1, 2], [2, 1]��;
//4.��̨����Ϊ4ʱ����5����������[1, 1, 1, 1], [1, 1, 2], [1, 2, 1], [2, 1, 1], [2, 2], ��
//5.��̨����Ϊ5ʱ����8����������[1, 1, 1, 1, 1], [1, 1, 1, 2], [1, 1, 2, 1], [1, 2, 1, 1], [2, 1, 1, 1], [1, 2, 2], [2, 1, 2], [2, 2, 1]��

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
//	printf("����������Ҫ����̨������>");
//	scanf("%d",&fib);
//	int m=Fib(fib);
//	printf("��������%d\n",m);
//	return 0;
//
//}





////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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






////�ǵݹ�ʵ����n�Ľ׳ˣ���������������⣩
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
//	printf("�����������:>");
//	scanf("%d", &n);
//	int m=Jiecheng(n);
//	printf("%d�Ľ׳�Ϊ:%d\n",n,m);
//	return 0;
//}




////�ݹ�ʵ����n�Ľ׳ˣ���������������⣩
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
//		printf("�����������:>");
//		scanf("%d", &n);
//		int m=Jiecheng(n);
//		printf("%d�Ľ׳�Ϊ:%d\n",n,m);
//		return 0;
//}





////�ǵݹ�ʵ��strlen
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
//	printf("ԭ�ַ����� > %s\n", ch);
//	int len = my_strlen(ch);
//	printf("strlen=%d\n",len);
//	return 0;
//}





////�ݹ�ʵ��strlen
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
//		printf("ԭ�ַ����� > %s\n", ch);
//		int len = my_strlen(ch);
//		printf("strlen=%d\n",len);
//		return 0;
//}





////��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������У����������ӡ��
////Ҫ�󣺲���ʹ��C�������е��ַ�������������
////���� :
////char arr[] = "abcdef";
////����֮����������ݱ�ɣ�fedcba
//#include<stdio.h>
//#include<string.h>
//void reverse(char* str)
//{
//	char tmp = *str;//��tmp�����ַ����ĵ�һ���ַ�
//	int len = strlen(str);//��ǰ�ַ����ĳ��� ps:ÿ�εݹ飬���ȶ���仯
//	*str = *(str + len - 1);//��'\0'��ǰһ��Ԫ�ظ�����һ��
//	*(str + len - 1) = '\0';//��'\0'��ǰһ��Ԫ���ȸ���'\0'
//	if (strlen(str)>1)//���ַ������ȴ���1���ݹ�  ps:ÿ���滻һֱ���м�ƽ�����û���ַ���ֻ��һ���ַ���ʱ�򶼲��ؼ���
//		reverse(str + 1);//���еݹ飬�׵�ַָ�����
//	*(str + len - 1) = tmp;//ȫ���ݹ���ɺ󣬽�'\0'��ԭ��ԭ�����м�Ԫ��	
//}
//int main()
//{
//	char str[] = "abcdef";
//	reverse(str);
//	printf("%s\n", str);
//	return 0;
//}







////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����c����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////���룺1729�������19
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





////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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




////�ݹ�ʵ�����n��쳲�������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int Fib(n);
//int main()
//{
//	printf("���������֣�");
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





////�ǵݹ�ʵ�����n��쳲�������
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
////��̬˳���
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//}SL;
//
//void SeqListPushBack(SL* ps, SLDataType x);