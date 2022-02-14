#define _CRT_SECURE_NO_WARNINGS 1

//很多概念见课件

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0-9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//代码运行的结果是什么？
//
//	return 0;
//i和arr是局部变量，局部变量是放在栈区上的，栈区内存的使用习惯是，先使用高地址空间，再使用低地址空间
//所以反过来定义就行
//但还是一般不要越界访问


//模拟实现strcpy
//strcpy - 字符串拷贝
#include <string.h>

//写不好
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//
//
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;//\0即为假
	}
}


int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(NULL, arr2);//这里可以优化，空指针

	//strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}