#define _CRT_SECURE_NO_WARNINGS 1

//动态内存开辟
#include <stdlib.h>


//1 malloc

//int main()
//{
//	//假设开辟10个整形的空间 - 10* sizeof(int)
//	//int arr[10];//栈区
//	
//	//动态内存开辟的
//	int* p = (int*)malloc(1000000000*sizeof(int));//void*
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		//printf  + strerror
//		perror("main");//main: xxxxxxxxx//打印错误
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] --> *(p+i)
//	}
//
//	//回收空间
//	free(p);
//	p = NULL;//自己动手把p置为NULL
//free只能用于释放在堆上的空间
//	return 0;
//}

//2 calloc

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//自动初始化了

//3 realloc

//	//这里需要p指向的空间更大，需要20个int的空间
//	//realloc调整空间
//
//	int*ptr = (int*)realloc(p, 20*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}