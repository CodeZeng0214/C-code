#define _CRT_SECURE_NO_WARNINGS 1
//注释用来解释代码有快捷键自查
 //C++两种注释风格//。。。。  或/*。。。。*/（不支持嵌套）
#include <stdio.h>

 
int main()
{
	
	//选择语句
	int input;//定义一个input
	printf("好好学习吗(1/0)?\n");
	printf("“是”输1，“不”输2\n");
	scanf("%d", &input);//输入一个值给input
	if (input == 1)//==为等于；=为赋值
		printf("喜欢就加油啊\n");
	else
		printf("摆烂");//简单选择句

	//循环语句
	int line = 0;//赋初值
	while (line < 1460)
	{
		printf("学习知识提高自己第%d天\n", line);
		line++;//++为自然增加
	}
	if (line == 1460)
	{
		printf("进入米哈游");
	}

	return 0;
}
