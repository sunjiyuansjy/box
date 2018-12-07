#include<stdio.h>

int Add(int x,int y)
{
	return x+y;

}
/*C语言风格注释
 * int Sub(int x,int y)
 * {
 *	return x-y;
 * }
 */
int main()
{

	//c风格注释
	//int a=10;
	//调用Add函数，完成加法
	printf("%d\n",Add(1,2));
	return 0;
}
