#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//常量的分类
#define MAX 10000//对应3.
enum Sex
{
	MALE=3,//对应4.枚举常量默认排序从零开始,dan可以赋初值
	FEMALE,
	SECRET,
};
int main()
{
//1.字面常量
	3.14;
	10;
	'a';//字符a,字符号常量
//2.const修饰的常变量
 const int num = 10;//const使num具有常属性（不能改变的属性）本质还是变量
	//num = 20;//报错,如果没有const修饰则输出20
	printf("num=%d\n", num);
//3.#define定义的标识符常量
	printf("n=%d\n", MAX);//MAX为常量，不能再定义
//4.枚举常量（可以一一列举的常量）比如性别
	enum Sex a = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);


}