#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
using namespace std;
#include "Date.h"

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// ������ operator������
//// �������� ������������󷵻�ֵ��ʲô
//// �������������м����������������м�������
////bool operator>(const Date& d1, const Date& d2)
////{
////	if (d1._year > d2._year)
////	{
////		return true;
////	}
////	else if (d1._year == d2._year && d1._month > d2._month)
////	{
////		return true;
////	}
////	else if (d1._year == d2._year && d1._month == d2._month && d1._day > d2._day)
////	{
////		return true;
////	}
////	else
////	{
////		return false;
////	}
////}
//
////int operator-(const Date& d1, const Date& d2);
//
//int main()
//{
//	Date d1(2022, 1, 16);
//	Date d2(2022, 1, 31);
//	Date d3(2022, 2, 26);
//
//	// Ĭ�����C++�ǲ�֧���Զ������Ͷ���ʹ�������
//	//d1 > d2; // -��operator>(d1, d2)
//	//cout << operator>(d1, d2) << endl;
//
//	//int day1 = d2 - d1;
//	//int day2 = d3 - d1;
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// d1.operator>(d2);
//	bool operator>(const Date& d) // bool operator>(Date* const this, const Date& d)
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 1, 16);
//	Date d2(2022, 1, 31);
//	Date d3(2022, 2, 26);
//
//	d1 > d2; // d1.operator>(d2);
//	d1.operator>(d2);
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	/*Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//	}
//*/
//	// d1 = d3;
//	// d1 = d1;
//	//Date& operator=(const Date& d)
//	//{
//	//	// ����������Լ����Լ���ֵ�Ϳ��Բ�ͬ�����ˣ�ֱ���ж�һ������
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//
//	//	return *this;
//	//}
//
//	// d1.operator>(d2);
//	bool operator>(const Date& d) // bool operator>(Date* const this, const Date& d)
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 1, 16);
//	Date d2(2022, 1, 31);
//	Date d3(2022, 2, 26);
//
//	// һ���Ѿ����ڵĶ��󿽱���ʼ��һ�����ϴ���ʵ�����Ķ���
//	Date d4(d1);  // ��������
//	Date d5 = d1; // ��������
//
//	// �����Ѿ����ڵĶ���֮����и�ֵ����
//	d2 = d1 = d3; // d1.operator=(d3)
//	//d1 = d3; // d1.operator=(d3)
//
//	d1 = d1;
//
//	int i, j, k;
//	i = j = k = 10;
//
//	return 0;
//}


void TestDate1()
{
	Date d1;
	Date d2(2022, 1, 16);
	d1.Print();
	d2.Print();

	Date d3(2022, 13, 15);
	d3.Print();

	Date d4(2022, 2, 29);
	d4.Print();

	Date d5(2020, 2, 29);
	d5.Print();

	Date d6(2000, 2, 29);
	d6.Print();
}

void TestDate2()
{
	Date d1(2022, 1, 16);
	Date ret = d1 + 100;
	ret.Print();

	d1 += 100;
	d1.Print();

	Date ret1 = d1++;  // d1.operator++(&d1, 0);
	Date ret2 = ++d1;  // d1.operator++(&d1);
}

int main()
{
	TestDate2();

	return 0;
}
