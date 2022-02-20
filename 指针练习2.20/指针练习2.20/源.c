#define _CRT_SECURE_NO_WARNINGS 1

//接上文
//二维数组
// 
//int a[3][4] = { 0 };
//printf("%d\n", sizeof(a));//48
//printf("%d\n", sizeof(a[0][0]));//4
//printf("%d\n", sizeof(a[0]));//单独放数组的时候就是这个数组，相当于第一行，故16
//printf("%d\n", sizeof(a[0] + 1));//不单独的时候代表的是地址，代表第一行第一个元素的地址4/8
//printf("%d\n", sizeof(*(a[0] + 1)));//四
//printf("%d\n", sizeof(a + 1));//这个☞第二行的地址，与上文照应4/8
//printf("%d\n", sizeof(*(a + 1)));//第一行整体，16
//printf("%d\n", sizeof(&a[0] + 1));//4  解释：a[0]是第一行的数组名，
                                         //&a[0]取出的就是第一行的地址,&a[0]+1 就是第二行的地址
//printf("%d\n", sizeof(*(&a[0] + 1)));//16  &a[0]+1 就是第二行的地址
                                          //	//*(&a[0]+1) 就是第二行，所以计算的第二行的地址
//printf("%d\n", sizeof(*a));//16  a作为二维数组的数组名，没有&，没有单独放在sizeof内部
                          //	//a就是首元素的地址，即第一行的地址，所以*a就是第一行，计算的是第一行的大小
                                // a在此时代表首元素的地址，即第一行
//printf("%d\n", sizeof(a[3]));//16 解释：a[3]其实是第四行的数组名（如果有的话）
//	//所以其实不存在，也能通过类型计算大小的//计算机会推测的

//	printf("%d\n", sizeof(a[-1]));//16，同上

////int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2，根本就没算，计算机直接能判断
//	printf("%d\n", s);//5
//
//	return 0;
//}

//数组名的意义：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//将数组指针类型强制转化成整形指针类型
//    printf("%d,%d", *(a + 1), *(ptr - 1));后面的-1，因为前面的强制类型转换变为四个字节
//
//    return 0;


//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
////int main()
//{
//	printf("%p\n", p + 0x1);0x100014
//	printf("%p\n", (unsigned long)p + 0x1);0x100001//没有*转化成整形在加1
//	printf("%p\n", (unsigned int*)p + 0x1);0x100004//有*转化成整形指针类型加一即加四个字节
//	return 0;
//}
//0x代表十六进制计数，里面每一位的1代表一个字节，16进一

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);//先加一再强制类型转换 
//    int* ptr2 = (int*)((int)a + 1);相当于从00 00 00 00 00的第一对数四对变成了从第二对开始
//
//    printf("%x,%x", ptr1[-1], *ptr2);//0x02000000，0x00000004
//    return 0;%x是十六进制表示
//}

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//小括号内是逗号表达式，在这个二维数组中，a[0]其实就是a[0][i]数组名
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);相当于*（p+0）
//    return 0;
//}

//详细一定要看板书
//int main()
//{
//    int a[5][5];
//    int(*p)[4];//数组指针
//    p = a;//把第一行的起始交给了p//int (*)[5]
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //?
//
//    return 0;
//}
//int(*p)[10];
//解释：p先和*结合，说明p是一个指针变量，然后指着指向的是一个大小为10个整型的数组。所以p是一个
//指针，指向一个数组，叫数组指针。
//这里要注意：[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合。


//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10  5
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//三个首字符的地址
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



//核心题

//！！！！！

//画图！！！！

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}
 //注意——++的永久改变


//
//
//int find_num(int arr[3][3], int*px, int*py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;//找到了
//		}
//	}
//
//	return 0;//找不到
//}
//
//
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	//如果找到返回1， 找不到返回0
//	int x = 3;//行
//	int y = 3;//列
//	//&x,&y 
//	//1. 传入参数
//	//2. 带回值
//


//左旋字符串
void string_left(char* str, int k)
{
    int i = 0;
    int n = strlen(str);
    for (i = 0; i < k; i++)
    {
        char tmp = *str;
        int j = 0;
        *(str + j) = *(str + j + 1);
        *(str + n - 1) = tmp;
    }
    
}

int main()
{
    char arr[10] = "ABCDEF";
    int k = 4;
    string_left(arr, k);
    printf("%s\n", arr);

    return 0;
}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include <string.h>

//int is_string_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);//5
//	for (i = 0; i < n; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str1;//1
//		//2. 后边的n-1个字符往前挪动
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//3. tmp放在最后
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}//上面这种方法罗列所有可能性进行比较
// 
// 
//ABCDA
//BCDAA
//CDAAB
//DAABC
//AABCD
// 
//AABCDAABCD
//

//
//int is_string_rotate(char* str1, char* str2)
//{
//	//长度不相等，肯定不是旋转得到的
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	//1. str1字符串的后边追加一个str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);//////////        追加函数
//	//2. 判断str2是否为str1的字串
//	char* ret = strstr(str1, str2);//判断函数
//
//	return ret != NULL;
//
//	/*if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}*/
//	//AABCDAABCD 
//	//BCD
//}
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}
//