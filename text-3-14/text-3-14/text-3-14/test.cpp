#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//using namespace std;
using std::cout;
using std::endl;

//class A
//{
//public:
//	A(int a)
//	{
//		_a = a;
//	}
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day, int i)
//		:_N(10)
//		, _ref(i)
//		, _aa(-1)
//	{
//		//  error C2166: ��ֵָ�� const ����
//		// ���ﱨ��˵�������캯������ʱ����Ա�����Ѿ����������
//		//_N = 10;
//
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// ��ʼ���б� - ��Ա��������ĵط� 
//	/*Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		, _N(10)
//	{}*/
//
//private:
//	int _year;  // ����
//	int _month;
//	int _day;
//
//	const int _N;  // const
//	int& _ref;     // ����
//	A _aa;         // û��Ĭ�Ϲ��캯�����Զ������ͳ�Ա����
//	// �ܽ�һ�£�
//	// 1����ʼ���б� - ��Ա��������ĵط�
//	// 2��const�����á�û��Ĭ�Ϲ��캯�����Զ������ͳ�Ա���������ڳ�ʼ���б��ʼ������Ϊ���Ƕ������ڶ����ʱ���ʼ��
//	// 3���������������ͳ�Ա��������int year��int _month,���ĳ�ʼ��������
//};
//
//int main()
//{
//	int i = 0;
//	Date d1(2022, 1, 19, i); // ������/����ʵ����
//
//	Date d2(2021, 1, 19, i); // ������/����ʵ����
//
//	// int i;
//	// ���������ڶ����ʱ���ʼ��
//	// const int j = 0;
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a = 0)
//	{
//		cout << "A(int a = 0)" << endl;
//		_a = a;
//	}
//
//	A(const A& aa)
//	{
//		cout << "A(const A& aa)" << endl;
//		_a = aa._a;
//	}
//
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		_a = aa._a;
//
//		return *this;
//	}
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//	// ��ʹ�ó�ʼ���б�
//	//Date(int year, int month, int day, const A& aa)
//	//{
//	//	_aa = aa;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	// ʹ�ó�ʼ���б�
//	Date(int year, int month, int day, const A& aa)
//		:_aa(aa)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;  // ����
//	int _month;
//	int _day;
//
//	A _aa;
//};
//
//int main()
//{
//	//A aa(10);
//	//Date d1(2022, 1, 19, aa); // ������/����ʵ����
//	Date d1(2022, 1, 19, A(10)); // ������/����ʵ����
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//int main() {
//	A aa(1);
//	aa.Print();
//}

//class Date
//{
//public:
//	/*explicit Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}*/
//	Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(const Date& dd)
//	{
//		cout << "Date(const Date& dd)" << endl;
//	}
//
//	/*explicit Date(int year)
//		:_year(year)
//	{}*/
//
//private:
//	int _year;
//};
//
////class string
////{
////	string(const char* str)
////	{}
////};
//
//int main()
//{
//	// ��Ȼ����������ֱ�ӹ��죬���ǹ����ǲ�һ����
//	Date d1(2022);
//	Date d2 = 2022; // ��ʽ����ת��
//	// ������2022����һ����ʱ����Date(2022)������������󿽱�����d2
//	// ����C++��������������һ�������У��������ᱻ�Ż����϶�Ϊһ��
//	// �������ﱻ�Ż�Ϊֱ�Ӿ���һ������
//
//	// ��ʽ����ת�� - ������� -- ��ʾ�������Ƶ�����
//	double d = 1.1;
//	int i = d;
//	const int& i = d;
//
//	// ǿ������ת�� - �޹�����
//	int* p = &i;
//	int j = (int)p;
//
//	//string s1("hello world");
//	//string s2 = "hello";
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		++_sCount;
//	}
//
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		++_sCount;
//	}
//
//	// û��thisָ�룬ֻ�ܷ��ʾ�̬��Ա�����ͳ�Ա����
//	static int GetCount()
//	{
//		//_a;
//		return _sCount;
//	}
//private:
//	int _a;
//
////public:
//	// ��̬��Ա�������������࣬���ж��������������������������ڼ�
//	// ���Ա�����У�����������
//	static int _sCount; // ����
//};
//
//int A::_sCount = 0; // �����ʼ��
//
//void f(A a)
//{
//
//}

//int main()
//{
//	A a1;
//	A a2 = 1;
//	f(a1);
//
//	// ��������ʵķ�ʽ�� ->public
//	/*cout << A::_sCount << endl;
//	cout << a1._sCount << endl;
//	cout << a2._sCount << endl;*/
//
//	cout << a1.GetCount() << endl;
//	cout << A::GetCount() << endl;
//
//	return 0;
//}

class Sum
{
public:
	Sum()
	{
		_ret += _i;
		++_i;
	}

	static int GetRet()
	{
		return _ret;
	}

	static void Init()
	{
		_i = 1;
		_ret = 0;
	}

private:
	static int _i;
	static int _ret;
};

int Sum::_i = 1;
int Sum::_ret = 0;

class Solution {
public:
	int Sum_Solution(int n) {
		//Sum a[n]; // Sum* p = new Sun[n];
		//return Sum().GetRet() - (n+1);

		//Sum a[n-1]; // Sum* p = new Sun[n];
		//return Sum().GetRet();

		//Sum a[n]; //
		Sum::Init();
		Sum* p = new Sum[n];
		delete[] p;
		return Sum::GetRet();
	}
};

//int main()
//{
//	Solution st;
//	cout << st.Sum_Solution(10) << endl;
//
//	cout << Solution().Sum_Solution(10) << endl;
//
//	return 0;
//}

//class B
//{
//public:
//	B(int b = 0)
//		:_b(b)
//	{}
//private:
//	int _b;
//};
//
//// C++11 -- �򲹶�
//class A
//{
//public:
//	// ������ٳ�ʼ���б�׶Σ�û�жԳ�Ա������ʼ�������ͻ�ʹ��ȱʡֵ��ʼ��
//	A()
//	{}
//private:           // Ҫע��������ﲻ�ǳ�ʼ������Ϊ���������������ܳ�ʼ��
//	int _a1 = 0;  // ������Ǹ���Ա����ȱʡֵ
//	B _bb1 = 10;
//	B _bb2 = B(20);
//	int* p = (int*)malloc(4*10);
//	// vs2019֧��
//	//int arr[10] = { 1, 2, 3, 4, 5 };
//
//	// ��̬�Ĳ���������ȱʡֵ��������������ȫ��λ�ö����ʼ��
//	// static int _sCount = 0;
//};

//int main()
//{
//	A aa;
//
//	return 0;
//}

class Time
{
	friend class Date;   // ����������Ϊʱ�������Ԫ�࣬�����������о�ֱ�ӷ���Time���е�˽�г�Ա����
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{}

	void f(Date d);

private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
	friend class Time;
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{
		_t._hour = 0;
		_t._minute = 0;
		_t._second = 0;
	}

	void SetTimeOfDate(int hour, int minute, int second)
	{
		// ֱ�ӷ���ʱ����˽�еĳ�Ա����
		_t._hour = hour;
		_t._minute = minute;
		_t._second = second;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};

void Time::f(Date d)
{
	d._year;
}


class A
{
private:
	static int k;
	int h;
public:
	// �ڲ���
	// 1���ڲ���B����ȫ�ֶ����ǻ���һ���ģ�ֻ���������ⲿ��A��������,������A��������
	// 2���ڲ���B���������ⲿ��A����Ԫ��Ҳ����B�п��Է���A��˽�У�A���ܷ���B��˽��
	class B
	{
		// friend class A;
	public:
		void foo(const A& a)
		{
			cout << k << endl;//OK
			cout << a.h << endl;//OK
		}

	private:
		int _b;
	};

	void f(B bb)
	{
		// A����B����Ԫ�����ܷ���B
		//bb._b;
	}
};

int A::k = 1;

int main()
{
	cout << sizeof(A) << endl;
	A aa;
	A::B bb;

	return 0;
}
