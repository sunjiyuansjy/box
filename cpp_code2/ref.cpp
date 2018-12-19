#include<iostream>
#include<stdio.h>

#if 0
void TestRef()
{

	int a=10;
	int& ra=a;//<==定义引用类型

	printf("%p\n",&a);
	printf("%p\n",&ra);
}
#endif
#if 0
void TestRef()
{
	int a=10;
	int& ra=a;
	int& rra=a;
	printf("%p %p %p\n",&a,&ra,&rra);
}
#endif
#if 0
void TestConstRef()
{
	const int a=10;
	const int& ra=a;
	const int& b=10;
	double d=12.34;
	const int& rd=d;
	printf("%p %p %p %p %p\n",&a,&ra,&b,&d,&rd);

}
int main()
{
	//TestRef();
	TestConstRef();
	return 0;
}
#endif

using namespace std;
int& Add(int a,int b)
{
	int c=a+b;
	return c;
}
int main()
{
	int & ret=Add(1,2);
	Add(3,4);
	cout<<"Add(1,2)="<<ret<<endl;
	return 0;
}

