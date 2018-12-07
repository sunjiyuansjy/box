#include<stdio.h>
#if 0
void test()
{
	int i=0;
	i++;
	printf("%d ",i);
}
int main()
{
	for(i=0;i<10;i++)
	{
		test();
	}
	return 0;
}
#endif
void test()
{
	static int i=0;
	i++;
	printf("%d ",i);
}
int main()
{
	for(i=0;i<10;i++)
	{
		test();
	}
	return 0;
}
