#include<stdio.h>
//static int g_val=2018;
//代码1
int main()
{
	printf("%d\n",g_val);
	return 0;
}
//可以通过结果对比知，static修饰的全局变量，就不能被源文件以外的其他源文件调用
