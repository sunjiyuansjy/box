#include<iostream>

using namespace std;

class Date
{
	public:
		Date(int year=1900,int month=1,int day=1)
		{
			_year=year;
			_month=month;
			_day=day;
		}
		//这里就是拷贝构造函数，通过类的构造函数生成一个对象之后，才能使用拷贝构造函数，基于已经存在的类生成一个新的对象
		//对于拷贝构造函数，只有一个参数，就是对已存在的对象的引用，基于引用具有只能引用一次的特性
		//如果这里传参数是按照传值的方式，那么为了创建临时拷贝，就需要在这里调用拷贝构造函数，而在调用的拷贝构造函数里再创建临时拷贝，就发生递归了
		Date(const Date& d){
			_year=d._year;
			_month=d._month;
			_day=d._day;
		}
	private:
		int _year;
		int _month;
		int _day;
};

int main()
{
	Date d1;
	Date d2(d1);
	cout<< d2._year<<endl;
	return 0;
}
