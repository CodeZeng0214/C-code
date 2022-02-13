#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//指针的大小与类型并无直接关系，与操作系统位数有关

//指针类型的意义
//1. 指针类型决定了：指针解引用的权限有多大
//2. 指针类型决定了，指针走一步，能走多远（步长）
//比如字符类型char一个字节
//int类型4个字节
// 一个十六进制为0.5个字节即16比特
//int main()
//{
//	int arr[10] = { 0 };
//	int  *p = arr;
//	char *pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f//十六进制
//	//11111111
//	//    8421
//	//
//	/*int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;*/
//
//	//int* pa = &a;
//	//*pa = 0;  
//

//野指针
//指针未初始化
//越界访问
/*
   int arr[10] = { 0 };
   int*p = arr;
   int i = 0;
   for (i = 0; i <= 10; i++)
   {
           *p = i;
           * p++;
   }
   */
//非法访问
  //int* test()
//{
//	int a = 10;
//	return &a;//a出函数即销毁
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;
//
//	return 0;
//}
//避免的方法，即尽量初始化
//小心越界！！

//指针的运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

//指针减指针结果是两个指针之间的个数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减的前提：
//	//两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &c[0]);//err
//
//	//printf("%d\n", &arr[9] - &arr[0]);
//
//	return 0;

//利用指针减指针求字符串元素个数
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	//strlen(); - 求字符串长度
//	//递归
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;

//指针加指针没有什么意义 

//神奇的转化
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int* p = arr;//数组名
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[] 是一个操作符  2和arr是两个操作数
//	//a+b
//	//b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//
//	//arr[2] --> *(arr+2)-->*(2+arr)-->2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
//	return 0;
//理解底层后想怎么写就怎么写

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//
//	//ppa就是一个二级指针变量
//	int ** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	int*** pppa = &ppa;
//
//	return 0;


//指针数组
//int arr[10];//整形数组 - 存放整形的数组就是整形数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5];