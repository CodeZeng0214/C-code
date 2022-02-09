#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"//包含自己的头文件用""

//打印菜单
void menu()
{
	printf("                             \n");
    printf("        1. 开始游戏          \n");
	printf("        0. 退出游戏          \n");
	printf("                             \n");
}

//游戏主体函数带顺序
void game()
{
	//存储数据，二维数组
	char board[ROW][COL];

	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);

	//打印一下棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);

	char ret = 0;//接受游戏状态
	//开玩
	while (1)
	{
		//玩家先下棋
		playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
        
		//判断玩家是否胜利
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//电脑下棋
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断电脑是否胜利
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	
	//判断游戏是否结束
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
} 

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//后面电脑会用到的随机数

	do 
	{
		menu();//第一步：打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		    break;
		case 0:
			printf("已退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	
	return 0;
}