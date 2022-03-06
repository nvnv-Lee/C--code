#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//int main()
//{
//	int i;
//	char ch;
//	FILE *fp1;
//	fp1 = fopen("zrf.dat", "w");
//	cin >> ch;
//	while (ch != '*')
//	{
//		fputc(ch,fp1);
//		cin >> ch;
//
//	}
//	fclose(fp1);
//	if ((fp1 = fopen("zrf.dat", "r")) == NULL)
//	{
//		cout << "\n不能打开文件." << endl;
//		cout << "退出程序." << endl;
//		exit(-1);
//	}
//	fclose(fp1);
//	if ((fp1 = fopen("zrf.dat", "r")) = NULL)
//	{
//
//		cout << "\n不能打开文件." << endl;
//		cout << "退出程序." << endl;
//		exit(-1);
//	}
//	while ((ch = fgetc(fp1)) != EOF)
//	{
//		cout << ch;
//		fclose(fp1);
//		return 0;
//	}
//}

//写一个两个数相加的宏---技巧就是宏原理是替换
#define ADD(x,y) （（x）+（y））