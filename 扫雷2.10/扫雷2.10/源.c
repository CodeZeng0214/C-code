#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//Դ.c ��Ϸ�Ļ������
//Դ0.c ��Ϸ�Ĳ���
//game.h ��Ϸ����������

//��ӡ�˵�
void menu()
{
	printf("                         \n");
	printf("        1.��ʼ��Ϸ       \n");
	printf("        0.�˳���Ϸ       \n");
	printf("                         \n");
}

void game()
{
	//Ϊ���Ų�ʱ���ǹ�������оͺ�
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'

	//��ӡһ������
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//ʵ�ʲ���ӡ

	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int/*ǿ������ת��*/)time(NULL));//���������

	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");//��������
			game();
			break;
		case 0:
			system("cls");
			printf("�ѳɹ��˳���Ϸ");
			break;
		default:
			system("cls");
			printf("ѡ����������ѡ��");
			break;
		}
	} 
	while (input);
	return 0;
}
//�����Ż���
//1. ��������ף���Χû���� - չ��һƬ - �ݹ�
//2. �����