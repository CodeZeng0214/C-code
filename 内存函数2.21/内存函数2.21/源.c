#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <string.h>


//sterror
//int main()
//{
//	//打开文件失败返回空指针
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", sterror(errno));//把错误码转换成错误信息
//		perror("fopen");//不用传错误码，直接就能打印的函数用起来更加方便
//		return 1;
//	}
//	//读文件后关闭文件
//	fclose(pf);
////	pf = NULL;
//	return 0;
//}


//字符分类函数
//#include <ctype.h>//库函数
//
//int main()
//{
//	char ch = 'a';
//	//isdigit  如果是数字字符返回非0的值，如果不是数字字符，返回0
//
//	if (ch >= 'A' && ch <= 'Z')
//	{
//
//	}
//
//	//int ret = isdigit(ch);
//	//int ret = islower(ch);
//	//printf("%d\n", ret);
//
//	return 0;
//}


//字符转换函数
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	return 0;


//内存函数

//memcpy-内存拷贝
// int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//01 00 00 00 02 00 00 00 ...
//	int arr2[20] = { 0 };
//	//strcpy()
//	//char* strcpy(char* dest, const char* src)
//	return 0;
//}
//上面这种情况，不能采用字符串拷贝函数，故针对内存操作
//#include <assert.h>
//
// 模拟实现
//void* my_memcpy(void* dest, const void* src, size_t num)num是以字节为单位
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	while (num--)//4 3 2 1
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;//强制类型转换是临时状态
//		src = (char*)src + 1;
//	}
//	return ret;
//}

//memcpy函数应该拷贝不重叠的内存
//memmove函数可以处理内存重叠的情况