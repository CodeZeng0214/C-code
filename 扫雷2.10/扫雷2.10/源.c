#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//源.c 游戏的基本框架
//源0.c 游戏的测试
//game.h 游戏函数的声明

//打印菜单
void menu()
{
	printf("                         \n");
	printf("        1.开始游戏       \n");
	printf("        0.退出游戏       \n");
	printf("                         \n");
}

void game()
{
	//为了排查时考虑故意大两行就好
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'

	//打印一下棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//实际不打印

	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int/*强制类型转换*/)time(NULL));//生成随机数

	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");//清屏函数
			game();
			break;
		case 0:
			system("cls");
			printf("已成功退出游戏");
			break;
		default:
			system("cls");
			printf("选择错误，请从新选择");
			break;
		}
	} 
	while (input);
	return 0;
}
//可以优化的
//1. 如果不是雷，周围没有雷 - 展开一片 - 递归
//2. 标记雷