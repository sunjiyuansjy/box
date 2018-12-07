#include<stdio.h>
#include<string.h>
int main()
{

	printf("%d\n",strlen("abcdef"));
	//\32被解析成一个转义字符
	printf("%d\n",strlen("c:\test\32\test.c"));
	return 0;
}

