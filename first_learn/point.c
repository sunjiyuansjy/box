#if 0
#include<stdio.h>

int main()
{
	int num = 10;
	printf("%p\n",&num);//打印变量的地址
	return 0;
}
#endif
#if 0
#include<stdio.h>

int main()
{
	int num=10;
	int *p=&num;
	printf("num:%d-->%p\n",num,&num);
	printf("*p:%d-->%p\n",*p,p);
	*p=20;
	printf("*p:%d-->%p\n",*p,p);
	return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
	char ch='w';
	char* pc=&ch;
	printf("*pc:%c-->ch:%c\n",*pc,ch);
	*pc='q';
	printf("%c\n",ch);
	return 0;
}
#endif
#include<stdio.h>

int main()
{
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*));
	printf("%d\n",sizeof(float*));
}
