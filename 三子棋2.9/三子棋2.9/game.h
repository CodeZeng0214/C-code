#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���ŵĶ���
#define ROW 3
#define COL 3
//���ô˴����Դ�ɶ�������Ϸ���еĿ���

//����������
//��ʼ�����̵�
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void playermove(char board[ROW][COL], int row, int col);
//��������
void computermove(char board[ROW][COL], int row, int col);
//�ж��Ƿ�ʤ��
//1. ���Ӯ�� - *
//2. ����Ӯ�� - #
//3. ƽ�� - Q
//4. ��Ϸ���� - C
//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);