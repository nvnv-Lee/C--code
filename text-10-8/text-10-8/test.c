#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int Max (int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n",max);
//	return 0;
//}
//#include <stdio.h>
//
//
//int main()
//{
//	printf("%-8s %-8s %-8s\n","Name","Age","Gender");
//	printf("---------------------\n");
//	
//	printf("%-8s %-8s %-8s", "Jack", "18", "Man");
//
//	
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int z = (-8 + 12)*a - 10 + c / 2;
//	printf("%d\n", z);
//	return 0;
//}






//#include <stdio.h>
//int Digital_compare(int a)
//{
//	if (a<0)
//		return 1;
//	else if (a == 0)
//		return 0;
//	else
//		return -1;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d", Digital_compare(x));
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("������a=:>");
//	scanf("%d", &a);
//	printf("a=%d\n",a);
//	if ((a<100000000) && (a>0))
//	{
//		printf("hour=%d minute=%d second=%d", a / 3600, a / 60, a);
//	}
//	else
//	{
//		printf("�����a����0-100000000֮��");
//	}
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	printf("����������5��ѧ���ĳɼ�:>");
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	if (((a>0) && (a<100)) && ((b>0) && (b<100)) && ((c>0) && (c<100)) && ((d>0) && (d<100)) && ((e>0) && (e<100)))
//	{
//		float average = ((a + b + c + d + e) / 5);
//		printf("%.2lf", average);
//	}
//	else
//	{
//		printf("����ĳɼ�����0-100֮��");
//	}
//	return 0;
//}





#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("����������a,b��ֵ:>");
	scanf("%d %d", &a, &b);
	if ((a>0) && (b<10000) && (b != 0))
	{
		int div = a / b;
		int extra = a%b;
		printf("%d %d\n", div, extra);
	}
	else
	{
		printf("�����a��b��ֵ���ڷ�Χ�ڻ�b����0");
	}
	return 0;
}