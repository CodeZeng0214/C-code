#define _CRT_SECURE_NO_WARNINGS 1
//关于二级指针传参等等见课件
// 
//	//把二级指针进行传参呢？
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//
//	int* arr[10] = {0};
//	test(arr);//传存放一级指针的数组
//	printf("%d\n", a);//?
//
//	return 0;

//函数指针-指向函数的指针
// 
//	//把二级指针进行传参呢？
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//
//	int* arr[10] = {0};
//	test(arr);//传存放一级指针的数组
//	printf("%d\n", a);//?
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//	//函数指针 - 存放函数地址的指针
//	//&函数名 - 取到的就是函数的地址
//	// 
//	//pf就是一个函数指针变量
//	int (*pf)(int, int) = &Add;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	return 0;

//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;//一个格式类型理解逻辑
//
//	return 0;
//}

//函数指针的调用
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf就是一个函数指针变量
//	//int (*pf)(int, int) = &Add;
//int (*pf)(int, int) = Add;//   Add === pf
//	//int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2，也没毛病
//	//int ret = Add(3, 5);//3
//	// 上面三种一样
// 
//	//int ret = * pf(3, 5);//  不行！！！
//
//	//printf("%d\n", ret);
//
//	return 0;
//综上所述，函数名就是地址，与数组的不完全等同不一样

//分析代码
//0x0012ff48 - int
//int main()
//{
//	(*(void(*)())0)();
//
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1. void(*)() - 函数指针类型//类比整形指针类型为int*去掉了p
//	//2. (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	//<c陷阱和缺陷>
//
//	return 0;

//分析二
//1
//void (* signal(int, void(*)(int) ) )(int);
//1. signal 和()先结合，说明signal是函数名
//2. signal函数的第一个参数的类型是int,第二个参数的类型是函数指针
// 该函数指针，指向一个参数为int,返回类型是void的函数
//3. signal函数的返回类型也是一个函数指针
// 该函数指针，指向一个参数为int,返回类型是void的函数
// signal是一个函数的声明

////typedef - 对类型进行重定义
////2
//typedef void(*pfun_t)(int) ;//对void(*)(int)的函数指针类型重命名为pfun_t
//pfun_t signal(int, pfun_t);

//typedef unsigned int uint;

//函数指针数组 - 存放函数指针的数组
// 
//整型指针 int*
//整型指针数组 int* arr[5];

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};//pfArr就是函数指针数组，放相同类型的函数指针
//pfarr是名字[]代表数组
//	return 0;

//函数指针数组的应用-计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1. 加    2. 减 ****\n");
//	printf("**** 3. 乘    4. 除 ****\n");
//	printf("****     0. 退出      ****\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//计算器-计算整型变量的加、减、乘、除
//	//a&b a^b a|b a>>b a<<b a>b
//
//	do {
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;

//利用函数指针数组的升级版
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1. add    2. sub ****\n");
//	printf("**** 3. mul    4. div ****\n");
//	printf("****     0. exit      ****\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//计算器-计算整型变量的加、减、乘、除
//	//a&b a^b a|b a>>b a<<b a>b
//
//	do {
//		menu();
//
//		//pfArr就是函数指针数组
//		//转移表 - 《C和指针》
//
//		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);//2
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//函数指针pfun
//void (*pfun)(const char*) = test;
//函数指针的数组pfunArr
//void (*pfunArr[5])(const char* str);
//pfunArr[0] = test;
//指向函数指针数组pfunArr的指针ppfunArr
//void (*(*ppfunArr)[5])(const char*) = &pfunArr;
 
//回调函数
/*
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************\n");
	printf("**** 1. add    2. sub ****\n");
	printf("**** 3. mul    4. div ****\n");
	printf("****     0. exit      ****\n");
	printf("**************************\n");
}

int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入2个操作数>:");
	scanf("%d %d", &x, &y);
	return pf(x, y);//在此调用并返回
}

int main()
{
	int input = 0;
	//计算器-计算整型变量的加、减、乘、除
	//a&b a^b a|b a>>b a<<b a>b

	do {
		menu();

		int ret = 0;
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret = Calc(Add);//传add函数指针进而调用
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);//
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);//
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}

	} while (input);
	return 0;
}*/

//qsort函数-快速排序法
//整形，字符串，结构体都能排 

//void qsort(void* base, //base中存放的是待排序数据中第一个对象的地址
//			size_t num, //排序数据元素的个数
//			size_t size,//排序数据中一个元素的大小，单位是字节
//			int (*cmp)(const void* , const void*)//是用来比较待排序数据中的2个元素的函数
//			);


//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	//整形数据的排序
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//打印
//	print_arr(arr, sz);
//}

//其他类型排序示例
//结构体
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄来排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字来排序//比字母的阿斯玛值
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}

//如果要降序，只要e1e2互换即可

//模仿qsort实现一个冒泡排序的通用算法

//void Swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void*e1, const void*e2) )
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟的排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素比较
//			//arr[j] arr[j+1]
//			if (cmp( (char*)base+j*width, (char*)base+(j+1)*width )>0)
//			{          //注意理解
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//利用自己的函数求解
//void test3()
//{
//	//整形数据的排序
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//打印
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄来排序
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//按照名字来排序
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
//}
//上面为简洁故没有主函数


//指针和数组笔试题解析

////一维数组
// 
// //sizeof(数组名) - 数组名表示整个数组的-计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址
// 
// 
//int a[] = { 1,2,3,4 };

//printf("%d\n", sizeof(a));//16
//printf("%d\n", sizeof(a + 0));//第一个元素的地址4/8（看平台位）
//printf("%d\n", sizeof(*a));//数组的第一个元素4
//printf("%d\n", sizeof(a + 1));//第二个元素地址4/8
//printf("%d\n", sizeof(a[1]));//第二个元素的大小4

//printf("%d\n", sizeof(&a));//整个数组的地址大小4/8
//printf("%d\n", sizeof(*&a));//这个数组的大小16
//printf("%d\n", sizeof(&a + 1));//数组后面空间的地址的大小
//printf("%d\n", sizeof(&a[0]));//地址
//printf("%d\n", sizeof(&a[0] + 1));//地址

////字符数组

//char arr[] = { 'a','b','c','d','e','f' };//没有\0

//printf("%d\n", sizeof(arr));//数组的大小6
//printf("%d\n", sizeof(arr + 0));a的地址4/8
//printf("%d\n", sizeof(*arr));//一个字符大小1
//printf("%d\n", sizeof(arr[1]));//同上
//printf("%d\n", sizeof(&arr));//4/8
//printf("%d\n", sizeof(&arr + 1));//第二个元素的地址大小4/8
//printf("%d\n", sizeof(&arr[0] + 1));//同上

//strlen-求字符串的的长度--找\0的
//printf("%d\n", strlen(arr));//随机值
//printf("%d\n", strlen(arr + 0));//随机值
//printf("%d\n", strlen(*arr));//考虑传地址传成ASILL值故出错了
//printf("%d\n", strlen(arr[1]));//同上理
//printf("%d\n", strlen(&arr));//把一个字符看成了字符串随机值
//printf("%d\n", strlen(&arr + 1));//同上
//printf("%d\n", strlen(&arr[0] + 1));//同上

//char arr[] = "abcdef";//有\0
//sizeof读\0

//printf("%d\n", sizeof(arr));//数组大小
//printf("%d\n", sizeof(arr + 0));//第一个元素的地址
//printf("%d\n", sizeof(*arr));//第一个元素
//printf("%d\n", sizeof(arr[1]));//1
//printf("%d\n", sizeof(&arr));//1
//printf("%d\n", sizeof(&arr + 1));//4/8
//printf("%d\n", sizeof(&arr[0] + 1));//4/8

//strlen看到\0停止 
//printf("%d\n", strlen(arr));//6
//printf("%d\n", strlen(arr + 0));//6
//printf("%d\n", strlen(*arr));//出问题
//printf("%d\n", strlen(arr[1]));//出问题
//printf("%d\n", strlen(&arr));//从第一个开始读6
//printf("%d\n", strlen(&arr + 1));从数组后开始读，随机值
//printf("%d\n", strlen(&arr[0] + 1));//从第二个元素开始读，5

//char* p = "abcdef";//把首字符的地址存到p中

//printf("%d\n", sizeof(p));//求地址的大小4/8
//printf("%d\n", sizeof(p + 1));//同上
//printf("%d\n", sizeof(*p));//a，1
//printf("%d\n", sizeof(p[0]));a，1
//printf("%d\n", sizeof(&p));//地址4/8
//printf("%d\n", sizeof(&p + 1));//地址
//printf("%d\n", sizeof(&p[0] + 1));//第二个元素的地址4/8

//printf("%d\n", strlen(p));//从第一个字符开始读6
//printf("%d\n", strlen(p + 1));//5
//printf("%d\n", strlen(*p));//出错
//printf("%d\n", strlen(p[0]));//出错
//printf("%d\n", strlen(&p));//读的是地址内，随机值//结合二级指针理解
//printf("%d\n", strlen(&p + 1));//同上，随机值
//printf("%d\n", strlen(&p[0] + 1));//5

//总结strlen是函数模拟的，故（）内传的是指针，来找到读取位置的起始，只能计算字符串大小，以\0为终止
//sizeof关系到内部，以字节位单位计算元素大小

////二维数组
//int a[3][4] = { 0 };
//printf("%d\n", sizeof(a));
//printf("%d\n", sizeof(a[0][0]));
//printf("%d\n", sizeof(a[0]));
//printf("%d\n", sizeof(a[0] + 1));
//printf("%d\n", sizeof(*(a[0] + 1)));
//printf("%d\n", sizeof(a + 1));
//printf("%d\n", sizeof(*(a + 1)));
//printf("%d\n", sizeof(&a[0] + 1));
//printf("%d\n", sizeof(*(&a[0] + 1)));
//printf("%d\n", sizeof(*a));
//printf("%d\n", sizeof(a[3]));