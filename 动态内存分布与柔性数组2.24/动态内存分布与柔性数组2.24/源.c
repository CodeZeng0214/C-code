#define _CRT_SECURE_NO_WARNINGS 1

//动态内存开辟常见的错误

//1.对NULL指针的解引用错误
//所以必须事先判断
//void test()
//{
//	int* p = (int*)malloc(int_max / 4);
//	*p = 20;//如果p的值是null，就会有问题
//	free(p);
//}


//2 对动态开辟空间的越界访问
//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}


//3.3 对非动态开辟内存使用free释放
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}

//4 使用free释放一块动态开辟内存的一部分
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}
//要从开始的指针释放才行


//5 对同一块动态内存多次释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}


//6 动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}
//忘记释放不再使用的动态开辟的空间会造成内存泄漏。


//典例一
#include <string.h>
//
//str传给GetMemory函数的时候是值传递，所以GetMemory函数的形参p是str的一份临时拷贝。
//在GetMemory函数内部动态申请空间的地址，存放在p中，不会影响外边str，所以当GetMemory函数返回之后，str依然是NULL。所以strcpy会失败。
//
//当GetMemory函数返回之后，形参p销毁，使得动态开辟的100个字节存在内存泄漏。无法释放。
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//传址打印
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//改
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//?
//	//printf("hello world");//char *p = "hello world";
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//改二   二级指针
// void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}


//典例二
//GetMemory 函数内部创建的数组是在栈区上创建的
//出了函数，p数组的空间就还给了操作系统
//返回的地址是没有实际的意义，如果通过返回的地址，去访问内存就是非法访问内存的
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//柔性数组
//两种形式
//struct S
//{
//	int n;
//	int arr[];//大小是未知
//};
//
//struct S
//{
//	int n;//4
//	int arr[0];//大小是未知
//};
//柔性数组计算大小时不包含柔性数组的内存
//包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大
//小，以适应柔性数组的预期大小。

//示例
//int main()
//{
//	//期望arr的大小是10个整形
//	struct S*ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//增加
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+20*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//释放
//	free(ps);
//	ps = NULL
//	return 0;
//}
//这种方式可以减少malloc的次数，进而达到内存碎片相对减少