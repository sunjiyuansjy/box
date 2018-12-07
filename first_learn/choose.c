#include<stdio.h>

int main()
{

	int coding=0;
	printf("敲代码去不?(选择1 or 0):>");
	scanf("%d",&coding);
	if(1==coding)
	{
		printf("坚持，肯定能有成果\n");
	}
	else
	{
		printf("放弃，那就没前途了\n");
	}
	return 0;
}
