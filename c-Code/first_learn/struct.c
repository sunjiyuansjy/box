#include<stdio.h>

struct str{
	char name[20];//名字
	int age;//年龄
	char sex[5];//性别
	char id[5];//学号
};//结构体后面的分号不可以省略
int main()
{

	//初始化结构体
	struct str s={"张三",20,"男","12348"};
	//打印结构体信息
	printf("name=%s age=%d sex=%s id=%s\n",s.name,s.age,s.sex,s.id);
	return 0;
}
