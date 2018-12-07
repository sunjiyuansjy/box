#include<stdio.h>

//define 可以用于定义标识符常量
#define MAX 1000
//define用于定义宏函数
#define ADD1(x,y) x+y
#define ADD2(x,y) ((x)+(y))
int main()
{
	int sum1 = ADD1(2,3);
	int sum2 = ADD2(2,3);
	printf("%d\n",MAX);
	sum1=10*ADD1(2,3);
	printf("sum1 = %d\n",sum1);
	sum2=10*ADD2(2,3);
	printf("sum2 = %d\n",sum2);
	return 0;
}
//比较结果可知，宏替换只是简单的文本替换，并不会对计算中优先级等情况进行考虑
