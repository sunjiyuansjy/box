#include<iostream>
using namespace std;

//全缺省参数
void TestFunc1(int a=10,int b=20,int c=30)
{

	cout<<"a="<< a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}
//半缺省参数
//半缺省参数必须依次从右往左给
void TestFunc2(int a, int b=20, int c=30)
{
	cout <<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
}
int main()
{
	TestFunc1();
	TestFunc2(10);
	return 0;
}
