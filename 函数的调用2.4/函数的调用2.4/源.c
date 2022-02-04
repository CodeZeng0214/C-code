#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//传值调用与传址调用的区别见课件

//求1000年到2000年之间的闰年
/*int is_leap_year(int n)//如果判断是闰年返回1
//不是闰年，返回0
//一个函数如果不写返回类型，默认返回int类型
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));//合理化用且或语句
}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}

	return 0;*/

//利用二分找一个整形数组的某一个数字
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到了
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	//找到了就返回找到的位置的下标
	//找不到返回-1
	//数组arr传参，实际传递的不是数组的本身
	//仅仅传过去了数组首元素的地址  易错
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
    if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;

//写一个函数，每调用一次使NUM加一
	// void Add(int* p)
	//{
	//	(*p)++;
	//}
	//
	//int main()
	//{
	//	int num = 0;
	//	Add(&num);
	//	printf("%d\n", num);//1
	//
	//	Add(&num);
	//	printf("%d\n", num);//2
	//
	//	Add(&num);
	//	printf("%d\n", num);//3
	//
	//	return 0;
	//}
