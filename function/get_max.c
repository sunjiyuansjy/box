#include<stdio.h>

//get_max函数的设计
int get_max(int x,int y)
{
	return (x>y)?(x):(y);
}

int main()
{
	int num1=10;
	int num2=20;
	int max=get_max(num1,num2);
	printf("max=%d\n",max);
	return 0;
}
