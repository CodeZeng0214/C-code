#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号的定义
#define ROW 3
#define COL 3
//利用此处可以达成对整个游戏行列的控制

//函数的声明
//初始化棋盘的
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void computermove(char board[ROW][COL], int row, int col);
//判断是否胜利
//1. 玩家赢了 - *
//2. 电脑赢了 - #
//3. 平局 - Q
//4. 游戏继续 - C
//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col);