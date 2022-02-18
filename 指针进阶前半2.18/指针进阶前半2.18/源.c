#define _CRT_SECURE_NO_WARNINGS 1


//	//char ch = 'q';
//	//char * pc = &ch;
//
//	//本质上是把"hello bit"这个字符串的首字符的地址存储在了ps中
//	//char* ps = "hello bit";//常量字符串不可改
//  //下面这个放的就是字符串//可改
//	//char arr[] = "hello bit";


//一个典例
#include <stdio.h>
//
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    //*str3 = 'w';
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//1和2是存的不同首地址
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//   3和4就一份，公用的，内容相同，存的是地址，想象百度云盘
//    return 0;
//}//1.2不同  3.4同

//指针数组

//int main()
//{
//	//指针数组
//	//数组 - 数组中存放的是指针（地址）
//	//int* arr[3];//存放整形指针的数组
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int* arr[3] = {&a, &b, &c};
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//         比较少见
// 
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//abc代表首地址了
//	int* arr[3] = {a,b,c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);//模拟了二维数组
//		}
//		printf("\n");
//	}
//	return 0;

//数组指针
//是一种指针 - 是指向数组的指针
// 
//整型指针 - 是指向整形的指针
//字符指着 - 是指向字符的指针
//int *p;整形指针示例

//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	char ch = 'w';
//	char*pc = &ch;
//
// //	//int arr[10] = {1,2,3,4,5};
//	//int (*parr)[10] = &arr;//取出的是数组的地址    arr取出的是首元素的地址
     ////parr 就是一个数组指针 - 其中存放的是数组的地址
	//arr;//arr - 数组名是首元素的地址 - arr[0]的地址
//	
// //	double* d[5];//double*是类型
//double* (*pd)[5] = &d;//ok pd就是一个数组指针，指向
//return 0;
//}

//&arr与arr的不同
//前者是数组的地址，后者是首元素的地址，
//数组名是数组首元素的地址
// //	int* p1 = arr;//可以间接访问别的数组元素
//	int (*p2)[10] = &arr;
//两者指针类型都不同
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//但是有2个例外：
//1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组大小，单位是字节
//2. &数组名 - 数组名表示整个数组，取出的是整个数组的地址
//printf("%d ", *((*pa) + i));（*pa）才代表数组名与arr效果有点像


//二维数组的数组名代表第一行的地址
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//p是一个数组指针
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}

//有符号整形与无符号整形比较时会先把有符号整形转为无符号整形，特别小心-1

//指针可以比较大小，比较的是指向元素的大小

//*p.a不对，因为.比*优先级高

//const修饰指针变量的时候：
//1. const如果放在 * 的左边，修饰的是指针指向的内容，保证指针指向的内容不能通过指针来改
//变。但是指针变量本身的内容可变。
//2. const如果放在 * 的右边，修饰的是指针变量本身，保证了指针变量的内容不能修改，但是指
//针指向的内容，可以通过指针改变。




//比赛后，大伙讨论，12345个人，每个人说了两句话，一半是对的，说出名次这种题
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b==2) + (e==4) == 1)
//							&& ((c==1) + (d==2) == 1)
//							&& ((c==5) + (d==3) == 1)
//							&& ((e==4) + (a==1) == 1)
//							)//把五个人的话转化为代码表示
//						{
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;