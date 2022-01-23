#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//新定义所需要的头文件
//初始字符串
//字符串定义符号char arr[]="" arr为定义名称 []想象为一个空间 
int main()
{
	char arr[] = "hello";//字符数组-一组相同类型的元素
	                     //字符串的结尾隐藏了\0其为结束标志
	char arr1[] = "abc"; //自带斜杠零
	char arr2[] = { 'a','b','c' };//不带\0
	//打印字符串%s为多字符%c为短字符
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//求印字符串的长度
	int len = strlen("abc");//string length//\0不算做长度
	printf("%d\n", len);
	//打印字符串的长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//打印的随机值
	//若11行改为char arr2[] = {'a','b','c','\0'}则恢复正常
	return 0;           
}

