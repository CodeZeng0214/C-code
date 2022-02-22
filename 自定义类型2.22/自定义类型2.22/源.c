#define _CRT_SECURE_NO_WARNINGS 1

//结构体
// 
//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//b4,b5,b6是全局的
//
//int main()
//{
//	//b1,b2,b3是局部变量
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	return 0;
//}

//匿名结构体类型
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//} s;只能用一次
//
//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}* ps;

//结构体的自引用

//struct A
//{
//	int i;
//	char c;
//};

//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};//一个结构体可以包含另外一个结构体作为类型

//struct N
//{
//	int d;//4
//	struct N n;
//};//死递归了//循环

//正确方式
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//重命名
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//结构体的初始化

//struct S
//{
//	char c;
//	int i;
//}s1, s2;
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	//struct S s3 = {'x', 20};
//	struct B sb = { 3.14, {'w', 100},'q' };
//打印
////	//. 
//	//->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	return 0;
//}

//结构体内存对齐
/*如何计算？
首先得掌握结构体的对齐规则：
1. 第一个成员在与结构体变量偏移量为0的地址处。
2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
VS中默认的值为8
3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
//体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍*//*。*/
//例题解析看笔记
//struct S4
//{
//	double d;
//	char c;
//	int i;
//};大小16
//struct S5
//{
//	char c1;
//	struct S4 s4;
//	double d;
//};大小32

//为什么存在内存对齐 ?
//大部分的参考资料都是如是说的：
//1. 平台原因(移植原因)：
//不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特
//定类型的数据，否则抛出硬件异常。
//2. 性能原因：
//数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
//原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访
//问。
//空间换时间
//可以让小块的元素靠在一起来节省少量空间

//修改堆对齐数指令
//#pragma pack （2）

//有一个宏计算变量的偏移
#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));

//结构体传参

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);  //传结构体
//	print2(&s); //传地址
//	return 0;
//}

//原因：
//函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的
//下降。
//结论：
//结构体传参的时候，要传结构体的地址。


//位段
//4个字节 - 32bit
//	int _a : 2;//_a 成员占2个bit位
//	int _b : 5;//_b 成员占5个bit位
//	int _c : 10;//_c 成员占10个bit位
//详情见课件


//枚举-自己创建的有限类型
//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//}；
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//以上定义的 enum Day ， enum Sex ， enum Color 都是枚举类型。
//{}中的内容是枚举类型的可能取值，也叫 枚举常量 。
//这些可能取值都是有值的，默认从0开始，一次递增1，当然在定义的时候也可以赋初值。

//枚举的优点
//为什么使用枚举？
//我们可以使用 #define 定义常量，为什么非要使用枚举？
//枚举的优点：
//1. 增加代码的可读性和可维护性
//2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
//3. 防止了命名污染（封装）
//4. 便于调试
//5. 使用方便，一次可以定义多个常量

//枚举是一种类型