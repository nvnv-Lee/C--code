#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include "date.h"

void Test1()
{
	Date d1;
	Date d2(2022,3,13);
	//Date d3(2022, 3, 47);
	//d1.Print();
	//d2.Print();
	//d3.Print();
	/*int ret=d1.operator>=(d2);
	if (ret == 1)
	{
		d1.Print();
	}
	else
	{
		d2.Print();
	}*/
	d2.operator++(12);
	d2.Print();
	//d1.operator+(100);
	//d1.Print();
	//d2.operator+=(100);
	//d2.Print();

}
int  main()
{
	Test1();
	return 0;
}