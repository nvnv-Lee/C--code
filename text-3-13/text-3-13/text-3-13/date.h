#pragma once
#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1);
	void Print();
	int GetMonthDay(int year, int month);


	bool operator>(const Date& d);
	bool operator<(const Date& d);
	bool operator>=(const Date& d);
	bool operator<=(const Date& d);
	bool operator==(const Date& d);
	bool operator!=(const Date& d);

	// d1 += 100
	Date& operator+=(int day);

	// d1 + 100
	Date operator+(int day);

	//d1-=100
	Date& operator-=(int day);

	//d1-100
	Date operator-(int day);

	// ++d1;
	Date& operator++();

	// d1++; ����Ϊ�˸�ǰ��++����������
	// ����һ�²���ռλ����ǰ��++,���ɺ�������
	Date operator++(int);
private:
	int _year;
  	int _month;
	int _day;
};