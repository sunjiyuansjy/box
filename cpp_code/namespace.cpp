#include<stdio.h>
#include<stdlib.h>
//命名空间的定义
//1.普通使用命名空间的方法
namespace N1 //N1为命名空间的名称
{
	int a=10;//命名空间里，可以定义变量，也能定义函数
	int b=20;
	int Add(int a, int b)
	{
		return a+b;
	}
}
//2.命名空间的嵌套
namespace N2
{
	int a=10;
	int b=20;
	int Add(int a,int b)
	{
		return a+b;
	}
	namespace N3
	{
		int c;
		int d;
		int Sub(int left,int right)
		{
			return left-right;
		}
	}
}
//3.命名空间重名
//当同一个工程里存在多个同名的命名空间，编译器是允许的
//只不过最终编译器会将他们合并成一个命名空间
namespace N1
{
	int Mul(int left,int right)
	{
		return left*right;
	}
}

#if 0
//命名空间的使用有三种方法：
//1.用作用域限定符直接加命名空间的名字
int a=50;
int main()
{
	int a=60;
	printf("%d\n",N1::a);
	printf("%d\n",::a);//没有表明命名空间的名字就会寻找全局变量
	printf("%d\n",a);//打印以就近原则打印，优先打印自己相同作用域里的这个名字的变量
	return 0;
}
#endif
#if 0
//2.使用using 将命名空间里的成员导出来,切记分号作为结尾
using N1::b;
int main()
{
	printf("%d\n",N1::a);
	printf("%d\n",b);
	return 0;
}
#endif
//3.当前命名空间中的成员在某个文件里使用的多
//	缺陷：发生冲突的时候比较多
using namespace N1;
int main()
{
	printf("%d\n",N1::a);
	printf("%d\n",b);
	printf("%d\n",Add(10,20));
	return 0;
}

			//缺省参数类型
			//全缺省参数
			void TestFunc(int a,int b,int c)
			{}
