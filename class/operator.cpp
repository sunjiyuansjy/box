#include<iostream>

using namespace std;
//全局的operator==
// class Date
{

	public:
		Date(int year = 1900, int month = 1, int day = 1)
		{

			_year = year;
			_month = month;
			_day = day;
		} 
		//private:
		int _year;
		int _month;
		int _day;
};
// 这里会发现运算符重载成全局的就需要成员变量是共有的，那么问题来了，封装性如何保证？
// 这里其实可以用我们后面学习的友元解决，或者干脆重载成成员函数。
bool operator==(const Date& d1, const Date& d2)
{

	return d1._year == d2._year;
	&& d1._month == d2._month
		&& d1._day == d2._day;
}
void Test()
{

	Date d1(2018, 9, 26);
	Date d2(2018, 9, 27);
	cout<<(d1 == d2)<<endl;
}
class Date
{

	public:
		Date(int year = 1900, int month = 1, int day = 1)
		{

			_year = year;
			_month = month;
			_day = day;
		}
		// bool operator==(Date* this, const Date& d2)
		// 这里需要注意的是，左操作数是this指向的调用函数的对象
		bool operator==(const Date& d2)
		{

			return _year == d2._year;


			// 赋值运算符重载
				&& _month == d2._month
				&& _day == d2._day;
		}
	private:
		int _year;
		int _month;
		int _day;
};
void Test()
{

	Date d1(2018, 9, 26);
	Date d2(2018, 9, 27);
	cout<<(d1 == d2)<<endl;
}
