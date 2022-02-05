#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//递归，函数自己调用自己

//输入1234输出1 2 3 4

/*void print(unsigned int n)//123
{
	if (n > 9)
	{
		print(n / 10);
	}//究极套娃
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;//unsigned 是无符号的意思
	scanf("%u", &num);//123//%d是无符号整形的意思
	//递归 - 函数自己调用自己
	print(num);//print函数可以打印参数部分数字的每一位
    return 0;
}*/

//关于栈区，栈溢出

/*void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	int a = 10;
	test(1);
	return 0;
}*/
//因此不能死递归，要有跳出条件
//递归层次不能太深
//一个网站（程序员的知乎）https://stackoverflow.com/

//编写函数//不允许创建临时变量，求字符串的长度

/*int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}//没有考虑到不许创建临时变量

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}//利用递归达成与while循环一样的效果
int main()
{
	char arr[] = "bit";
	//['b']['i']['t']['\0']
	//
	//模拟实现一个strlen函数
	printf("%d\n", my_strlen(arr));

	return 0;
}*/

//利用函数递归求阶乘

/*int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fac(n);

	printf("%d\n", ret);
	return 0;
}*/
//有一些功能：可以使用迭代的方式实现，也可以使用递归

//利用递归求斐波那契数列
//int count = 0;
//递归可以求解，但是效率太低
//int Fib(int n)
//{
//	//统计第3个斐波那契数的计算机次数
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}

//利用循环求斐波那契数列
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
 //int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
