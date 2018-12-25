#include<stdio.h>

//函数传值调用
void Swap1(int x,int y)
{
	int temp=0;
	temp=x;
	x=y;
	y=temp;
}

//函数传址调用
void Swap2(int *px,int *py)
{
	int temp=0;
	temp=*px;
	*py=*px;
	*py=temp;
}
int main()
{
	int num1=1;
	int num2=2;
	Swap1(num1,num2);
	printf("Swap1::num1=%d num2=%d\n",num1,num2);

	Swap2(&num1,&num2);
	printf("Swap2::num1=%d num2=%d\n",num1,num2);
	return 0;
}
