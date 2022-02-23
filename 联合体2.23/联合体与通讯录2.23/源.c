#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//union与enum struct一样，是对应类型的声明
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//发现他们的地址一样！！，联合体的成员公用一块空间，他的大小至少是最大成员的大小
//	//同一时间，里面的成员是相同值，一变其他也变
//	return 0;


//联合体在判断大小端时的妙用
//}//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1 就是小端
//	//返回0 就是大端
//}

//联合体大小的计算
//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。


