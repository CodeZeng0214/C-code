#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体让我们有能力描述复杂对象
//创建一个学生类型
struct stu
{
	char name[20];//注意括号里面的是数组的长度，也就是有多少个name，数组后面讲
	int age;
	double score;//结构体的成员变量
};
//创造一个书类型
struct book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct stu s = { "张三", 20, 85.5 };//结构体的初始化创建为s
	printf("%s %d %lf\n", s.name, s.age, s.score);//s.   即为找到结构体的成员
	struct stu* ps = &s;//struct stu*叫结构性指针
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
	//以上三种效果相同  箭头左边ps结构体的指针  箭头右边是结构体的成员
	return 0;
}