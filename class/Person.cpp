#include<iostream>
#include"Person.h"

using namespace std;
//将方法的定义放在类的实现文件
void Person::ShowInfo()
{
	cout<<_name<<" "<<_gender<<" "<<_age<<endl;
}
