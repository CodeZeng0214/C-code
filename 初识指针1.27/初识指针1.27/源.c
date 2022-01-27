#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//注意本节大多内容在笔记上
int  main()
{
	int a = 10;
	int* pa = &a;//&为取地操作符；int*为存放地址符号（整形指针），类比得出其余类型
                //pa是用来存放地址的，在c语言中叫指针变量
	             //注意a为四个字节，每个字节对应一个地址，一般存放第一个地址（首地址）即可
	*pa = 20;//*pa是解引用操作，就是通过pa里面的地址，找到a
	printf("%d\n", a);
	//关于指针变量的大小  32位是4个字节  64位是8个字节
	return 0;
}