#include<stdio.h>

int global=2019;//定义全局变量
int main()
{
	int local=2018;
	int global=2019;
	printf("global=%d\n",global);
	return 0;
}
