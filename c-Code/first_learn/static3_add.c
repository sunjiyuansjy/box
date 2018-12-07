#if 0
//代码1
//static3_add.c
int Add(int x,int y)
{
	return x+y;
}
#endif
//代码2
static int Add(int x,int y)
{
	return x+y;
}
//结果中可以看出当static修饰函数时，这个函数就无法被主程序继续调用了
