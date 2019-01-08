#include<iostream>

class Date
{
	 
	public:
		void Display()
		{

			cout<<"Display ()" <<endl;
			cout<<"year:" <<_year<< endl;
			cout<<"month:" <<_month<< endl;
			cout<<"day:" <<_day<< endl<<endl;
		}
		//const修饰成员函数
		//若const放在函数返回值类型前面是在修饰返回值，而这里是在修饰函数本身
		void Display() const
		{

			cout<<"Display () const" <<endl;
			cout<<"year:" <<_year<< endl;
			cout<<"month:" <<_month<< endl;
			cout<<"day:" <<_day<< endl<<endl;
		}
	private:
		int _year; // 年
		int _month; // 月
		int _day; // 日
};
void Test()
{

	Date d1;
	d1.Display();
	const Date d2;
	d2.Display();
}
