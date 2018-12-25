#include<iostream>
#include<cstring>

using namespace std;

#if 0
//struct实现类的方法：
struct Student{
	void SetStudentInfo(const char* name,const char* gender,int age)
	{
		strcpy(_name,name);
		strcpy(_gender,gender);
		_age=age;
	}
	void PrintStudentInfo()
	{
		cout<<_name<<" "<<_gender<<" "<<_age<<endl;
	}

	char _name[20];
	char _gender[3];
	int _age;
};
int main()
{
	Student s;
	s.SetStudentInfo("Peter","男",20);
	s.PrintStudentInfo();
	return 0;
}
#endif
//c++中为了兼容C语言，对结构体做了扩展，就成了类，但c++更喜欢用class来定义类
//相比与结构体来说，类中可以设置函数，也就是成员方法，而结构体只能有成员变量

class Person
{
	public:
		//一般将方法设为公有
		//显示基本信息
		void ShowInfo()
		{
			cout<<_name<<" "<<_gender<<" "<<_age<<endl;
		}
	private:
		char* _name;//姓名
		char* _gender;//性别
		int _age;//年龄
};
//除了这种将方法的声明与定义都放到一块的，也有将声明放到.h文件，将定义放到.cpp文件的，并且一般最好采用分开的方法

//类的实例化就是通过类来创建对象的过程
void Test()
{
	Person man;
	man._name="jack";
	man._gander="man";
	man._age=18;
	man.ShowInfo();
}
int main()
{
	Test();
	return 0;
}
