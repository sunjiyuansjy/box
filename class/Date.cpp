#include<iostream>

using namespace std;
class Date
{
	public:
		void Display()
		{
			cout<<_year<<" "<<_month<<" "<<_day<<endl;
		}
		void SetDate(int year,int month,int day)
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
int main()
{
	Date d1,d2;
	d1.SetDate(2018,5,1);
	d2.SetDate(2018,7,1);
	d1.Display();
	d2.Display();
	return 0;
}
