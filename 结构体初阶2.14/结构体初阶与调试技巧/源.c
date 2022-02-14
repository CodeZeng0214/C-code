#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//结构体
//格式//struct B
      //{
      //	char c;
      //	short s;
      //	double d;
      //};
      //
      //struct Stu
      //{
      //	//成员变量
      //	struct B sb;
      //	char name[20];//名字
      //	int age;//年龄
      //	char id[20];
      //} s1,s2;//s1和s2也是结构体变量
      //s1,s2是全局变量
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "202005034"};//对象
//	//.  ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	/*struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);*/
//
//	return 0;

//结构体传参
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;//套用了注意使用.操作符来访问
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//};
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "202005034" };//对象
//	//写一个函数打印s的内容
//	print1(s);
//	print2(&s);
//
//	return 0;
//}
//穿址调用没有开辟空间，节省内存
//解释，压栈理论，栈是一种数据结构，先进的后出，后进的先出

//每一个函数调用都会在内存的栈区上开辟一块空间

//函数栈帧的创建与销毁可以了解了解