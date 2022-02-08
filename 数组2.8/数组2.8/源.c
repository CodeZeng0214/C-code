#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//初识
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[8];
//
//	//int a = 10;//初始化
//	////int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };//默认5
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = {'b', 'i', 't'};
//	//char ch2[] = { 'b', 'i', 't' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";
//	//[b i t \0]
//	char ch6[] = { 'b', 'i', 't' };
//	//[b i t]
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}

//%p 打印地址用到，随着数组下标的增长，地址编号增张

//二维数组，想行列这样
//创建
//	//int arr[3][4];
//	//char ch[3][10];
//	//初始化 - 创建的同时给赋值
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//int arr[3][4] = { 1,2,3,4,5,6,7};//不完全初始化 - 后面补0
//	//int arr[3][4] = { {1,2}, {3,4} ,{4,5} };（人工分行）
//
//	//int arr[][4] = { {1,2}, {3,4} ,{4,5} };前面可以不写

//二维数组的存储，想象成划分区域的一维数组

//冒泡排序
void bubble_sort(int arr[], int sz)//形参arr本质是指针
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,4,5,3,2,1,0 };
	

	//排序为升序 - 冒泡排序
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);//数组传参的时候，传递的其实是数组首元素的地址

	return 0;
}
//数组名是什么？
//数组名是数组首元素的地址
// 但是有2个例外
//1. sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小,单位是字节
//2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址