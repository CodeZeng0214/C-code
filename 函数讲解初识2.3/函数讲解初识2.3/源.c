#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//函数

//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
int main()
{
	int a = 10;
	int b = 20;
	//写一个函数 - 交换2个整型变量的值

	printf("交换前：a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("交换后：a=%d b=%d\n", a, b);
return 0;
}//写出问题了！。因为地址


//改进方案
void Swap2(int* pa, int* pb)//
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;//4个字节的空间

	int* pa = &a;//pa就是一个指针变量
	*pa = 20;

	printf("%d\n", a);
	return 0;
}

//函数的参量可以套函数