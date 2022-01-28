#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C语言中由一个分号隔开的就叫一条语句


int main()
{
	//例一
	int age = 10;
	if (age >= 18)
		printf("成年\n");
	else
	{//{}叫一个代码块
		printf("未成年\n");
		printf("ee\n");
	}//如果不加中括号，则else的两条语句不能正常执行
	//else if (18 <= age < 26);{}内用这种形式逻辑错误，应该为age>=18 && age<26
	//printf("..");//本质是先执行18<=age 为真则变为1，再与右边比，牢记判断1/0

//例二	
	/*int a = 0;
	int b = 2;
	if (a == 1);
	if (b == 2);
	printf("hehe\n");
	else
		printf("haha\n");//注意代码的对应关系，if else 就近对应
						 //养成一个良好的代码风格
						//可以加{}分隔*/

//例三输出1-100之间的奇数
	int a = 0;
	for (a = 1; a <= 100; a++)
	{    if (a % 2 == 1)
	         printf("%d ", a);
     }

//switch语句
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
	case 2:
		printf("星期二\n");
	case 3:
		printf("星期三\n");
	case 4:
		printf("星期四\n");
	case 5:
		printf("星期五\n");
	case 6:
		printf("星期六\n");
		break;//跳出语句
	case 7:
		printf("星期日\n");//输入整形常量表达式，得出结果
	}
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;//跳出自己所在的语句
	case 7:
		printf("星期日\n");//输入整形常量表达式，得出结果
	default:
		printf("输入错误额");
		break;//可以在当输入无关值时提示 
	}//switch允许嵌套使用

		return 0;
}