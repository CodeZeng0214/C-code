#define _CRT_SECURE_NO_WARNINGS 1
//初识转义字符
#include <stdio.h>
int main()
{
	printf("c:\test\test.c\n");//初识转义字符，\t改变了含义
	//下面为举例演示，细节见文档截图
	printf("(are you??)\n");//老版编译器会把？？）认为三字母词化为]
	printf("%c\n", '\'');//若为'''会出错，"""类似
	printf("%c\n", 'a');//等同于打印字符串"a"用s
	//对于第六行的情况
	printf("c:\\test\test.c\\n");
	printf("\a");//会触发声音
	
	//关于printf的用法
	//指定打印格式
	//printf("%c\n", "a");打印字符('c')或字符串("abc")用//字符概念宽泛比如
	//)sS'"/?都可以看做
	//printf("%d\n", 100);打印整形或者输出整形

	printf("\n%c\n", '\130');//形如\ddd三位八进制数转化为十进制后对应ASCII表上的字符
	//如上面130-65-X
	printf("%c\n", '\x30');//形如\xdd两位十六进制化为十进制后对应
	//如上30-48-0

	//判断下面字符长度
	printf("%d\n", strlen("c:\test\328\test.c"));
	//关键在于看出八进制无8故\328其实是\032和8两个字符
	return 0;
}