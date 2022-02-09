#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"//�����Լ���ͷ�ļ���""

//��ӡ�˵�
void menu()
{
	printf("                             \n");
    printf("        1. ��ʼ��Ϸ          \n");
	printf("        0. �˳���Ϸ          \n");
	printf("                             \n");
}

//��Ϸ���庯����˳��
void game()
{
	//�洢���ݣ���ά����
	char board[ROW][COL];

	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);

	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);

	char ret = 0;//������Ϸ״̬
	//����
	while (1)
	{
		//���������
		playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
        
		//�ж�����Ƿ�ʤ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//�жϵ����Ƿ�ʤ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	
	//�ж���Ϸ�Ƿ����
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
} 

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������Ի��õ��������

	do 
	{
		menu();//��һ������ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
		    break;
		case 0:
			printf("���˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	
	return 0;
}