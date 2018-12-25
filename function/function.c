#include<stdio.h>
#include<string.h>

#if 0
//函数嵌套访问
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i=0;
	for(i=0;i<3;i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}
#endif

//链式访问
int main()
{
	char arr[20]="hello";
	int ret=strlen(strcat(arr,"bit"));
	printf("%d\n",ret);
	return 0;
}
//链式访问由于代码风格不好，可能会造成代码越来越长，不利于代码阅读
