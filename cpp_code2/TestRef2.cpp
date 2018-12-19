#include<iostream>
#include<time.h>

using namespace std;
struct A{
	int a[10000];
};
A a;
A TestFunc1()
{
	return a;
}
A& TestFunc2()
{
	return a;
}

void TestReturnByReforValue()
{
	//以指针为函数返回值
	size_t begin1= clock();
	for(size_t i=0;i<10000;i++)
	{
		TestFunc1();
	}
	size_t end1=clock();

	//以引用为函数返回值
	size_t begin2= clock();
	for(size_t i=0;i<10000;i++)
	{
		TestFunc1();
	}
	size_t end2=clock();
	//分别计算两个函数运行时间：
	cout<<"TestFun1(int*)-time"<<end1-begin1<<endl;
	cout<<"TestFun1(int&)-time"<<end2-begin2<<endl;
}
//进行多次运行后，比较指针与引用作为返回值方面效率的区别
int main()
{
	for(int i=0;i<10;i++)
	{
		TestReturnByReforValue();
	}
	return 0;
}
