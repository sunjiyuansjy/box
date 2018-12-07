#include<stdio.h>

//将unsigned int 重命名成uint_32后，uint_32就会就会变成一个类型名
typedef unsigned int uint_32;

int main()
{
	//观察num1和num2，可以看出这两个类型是一样的
	unsigned int num1=0;
	uint_32 num2=0;
	printf("%d\n",num1);
	printf("%d\n",num2);
}
