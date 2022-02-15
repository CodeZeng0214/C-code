#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strcpy

#include <stdio.h>
#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello的拷贝
//	}
//	*dest = *src;// \0的拷贝
//}
#include <assert.h>

//
//把src指向的内容拷贝放进dest指向的空间中
//从本质上讲，希望dest指向的内容被修改，src指向的内容不应该被修改
//
//strcpy 这个库函数 其实返回的是目标空间的起始地址
//
//
//char* my_strcpy(char* dest, const char * src)
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);//断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello的拷贝
//	}
//
//	return ret;//返回目标空间的起始地址
//}
//

//int main()
//{
//	
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	//1. 目标空间的起始地址，2. 源空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}

//
//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//printf("%d\n", num);
//
//	//2.
//	//const 修饰变量，这个变量就被称为常变量,不能被修改，但是本质上还是变量
//	//
//
//	const int num = 10;
//	//num = 20;//err
//
//	//int* const p = &num;
//	//int n = 100;
//	////const修饰指针变量的时候
//	////const 如果放在*的右边，修饰的是指针变量p,表示指针变量不能被改变
//	////      但是指针指针的内容，可以被改变//             与下对应
//	//*p = 20;//ok
//	//p = &n;//err
//
//
//	//const int* p = &num;
//	//int n = 100;
//	////const修饰指针变量的时候
//	////const 如果放在*的左边，修饰的是*p,表示指针指向的内容，是不能通过指针来改变的
//	////      但是指针变量本身是可以修改的
//	////*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;


//模拟实现strlen函数
int strlenmy(const char* str)
{
	assert(str);//断言其不为空指针
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcd";
	int len = strlenmy(arr);
	printf("%d\n", len);
	return 0;
}

// 