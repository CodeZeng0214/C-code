#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//以简单加法为例
int Add(int x, int y)
{
	int z;
	z = x + y;
	return z;//返回z值
}//此处定义Add函数与下面对应
int main()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);//&每个定义的对象在scanf函数中前要加&
	//第一种方法（没用加函数）
	int sum = a + b;
	printf("%d\n", sum);
	//第二种方法（用了加函数）
	int sum0 = Add(a, b);//此处的Add即提前定义的
	printf("%d\n", sum0);
	return 0;
}//虽然看似第一种方法简便，但当代码复杂时，第二种定义一次可以一直使用反而更好
