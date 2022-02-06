#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//利用函数递归是一个字符串逆序，不需使用库函数
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//表示字符串地址向前一个
	}

	return count;
}
//循环实现
void reverse_string2(char* str)
{
	int left = 0;
	int right = my_strlen(str)-1;

	while (left<right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
//细节变动
void reverse_string1(char* str)
{
	int left = 0;
	int right = my_strlen(str) - 1;

	while (left < right)
	{
		char tmp = *(str + left);//str[left]与其效果一样;
		*(str + left) = *(str+right);
		*(str+right) = tmp;
		left++;
		right--;
	}
}

void reverse_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);//
	*str = *(str + len - 1);//2
	*(str + len - 1) = '\0';//3
	//判断条件
	if(my_strlen(str+1)>=2)//考虑最后剩留的是什么
	{
		reverse_string(str + 1);//4
	}

	*(str + len - 1) = tmp;//5
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);//数组名arr是数组arr首元素的地址

	printf("%s\n", arr);//fedcba
	return 0;
}

//实习的重要性

//编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));//考虑到负次幂
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}










