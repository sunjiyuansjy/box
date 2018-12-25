#include<iostream>

using namespace std;
#if 0
class Date
{
	public:
		void SetDate(int year,int month,int day)
		{
			_year=year;
			_month=month;
			_day=day;
		}
		void Display()
		{
			cout<<_year<<" "<<_month<<" "<<_day<<endl;
		}
	private:
		int _year;
		int _month;
		int _day;

};
int main()
{
	Date d1,d2;
	d1.SetDate(2018,5,1);
	d1.Display();

	d2.SetDate(2018,7,1);
	d2.Display();
	return 0;
}
#endif

//构造函数是类中的几个默认成员函数之一，也就是说即便是空类这样没有成员函数的类中，也会默认存在的一种函数
//构造函数的作用并不是在给对象开辟空间，而是在初始化对象
class Date
{
	public:
		//1.无参构造函数
		Date()
		{};
		//2.带参构造函数
		Date(int year,int month,int day)
		{
			_year=year;
			_month=month;
			_day=day;
		}
	private:
		int _year;
		int _month;
		int _day;
};

void TestDate()
{
	Date d1;//无参构造函数的调用
	Date d2(2015,1,1);//带参构造函数的调用

	//要注意的是，如果调用无参构造函数，是不用在对象后面加括号的，否则就成为函数的声明了
	Date d3();
}

//对没有显式定义构造函数的类，编译器自动生成默认的无参构造函数，这里仅针对没有显式定义构造函数的类
class Date
{
	public:
		/*
		 * 如果用户显式定义了构造函数，编译器将不再自动生成
		//Date(int year,int month,int day)
		//{
		//	_year=year;
		//	_month=month;
		//	_day=day;
		//}
		*/
	private:
		int _year;
		int _month;
		int _day;
};

void TestDate()
{
	//没有定义构造函数，对象也能够生成，就是因为此处调用的是默认生成的构造函数
	Date d;
}


