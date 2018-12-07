#include<stdio.h>

enum Sex
{
	MALE,//枚举常量
	FEMALE,
	SECRET
}；

int main()
{
	3.14;
	1000;//字面常量
	const float pai = 3.14f;//const修饰常量
	pai = 5.14;//这里对常量进行重新赋值的方法是错误的，因为const修饰的常量是只读的
	#define MAX 100 //#define宏定义常量
	printf("%1.2f\n",pai);
	printf("%d\n",MAX);
	return 0;
}
