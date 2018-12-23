#include<iostream>

using namespace std;

#if 0
int TestAuto()
{
	return 10;
}
int main()
{
	int a=10;
	auto b=a;
	auto c='a';
	auto d=TestAuto();

	cout<< typeid(b).name()<<endl;
	cout<< typeid(c).name()<<endl;
	cout<< typeid(d).name()<<endl;

	//auto e;//无法通过编译，使用auto定义变量需要进行初始化
	return 0;
}
#endif
#if 0
int main()
{
	int x=10;
	auto a=&x;
	auto* b=&x;
	auto& c=x;

	cout<< typeid(a).name()<<endl;
	cout<< typeid(b).name()<<endl;
	cout<< typeid(c).name()<<endl;

	*a=20;
	*b=30;
	*c=40;

	return 0;
}
#endif
//同一行定义多个变量
void TestAuto()
{

	auto a = 1, b = 2; 
	auto c = 3, d = 4.0;  // 该行代码会编译失败，因为c和d的初始化表达式类型不同
}
//auto不能推导的场景：
//1.auto不能作为函数的参数
// 此处代码编译失败，auto不能作为形参类型，因为编译器无法对a的实际类型进行推导
// void TestAuto(auto a)
// {
// 
// }
//2.auto不能直接用来声明数组
// void TestAuto()
// {
//
//	int a[] ={1,2,3};
//	auto b[3] = a;
//	}
// 
//
//
// 基于范围for的for循环
// void TestFor()
// {
//
// int array[] ={
//  1, 2, 3, 4, 5};
//  for(int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//  array[i] *= 2;
//  for(int* p = array; p < array + sizeof(array)/ sizeof(array[0]); ++p)
//  cout << *p << endl;
//  }
// }
// }
