#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
//引用别人的代码
#include "add.c"

//函数也可以嵌套调用

//函数的链式访问
int main()
{
	int len = strlen("abc");
	printf("%d\n", len);

	//链式访问
	printf("%d\n", strlen("abc"));//看起来更简洁

	/*char arr1[20] = { 0 };
	char arr2[] = "bit";
	
	printf("%s\n", strcpy(arr1, arr2));*/

	printf("%d", printf("%d", printf("%d", 43)));//套娃，考虑printf的返回值是打印在屏幕上的字符的个数


	//编程是从前往后扫描的，故你的自定义函数一般放在主函数前
	//如果想放在别的地方，要提前函数声明一下例 define Add(int x. int y)
	return 0;
