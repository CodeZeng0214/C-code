#include <iostream>
using namespace std;


//猜数字游戏
void menu()
{
	cout << "    请输入对应序号以继续    " << endl;
	cout << "****************************" << endl;
	cout << "*******1. 开始游戏**********" << endl;
	cout << "*******0. 结束游戏**********" << endl;
	cout << "****************************" << endl;
}

void game()
{
	int ret = rand() % 100 + 1;//利用时间戳实现1-100之间的随机整数
	int guess = 0;
	system("cls");
	while (1)
	{
		cout << "(1-100之间)请猜数字>:";
		cin >> guess;
		if (guess < ret)
		{
			system("cls");
			cout << "猜小了" << endl;
		}
		else if (guess > ret)
		{
			system("cls");
			cout << "猜大了" << endl;
		}
		else
		{
			system("cls");
			cout << "恭喜猜对啦！！"<<endl;
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		cout << "请输入>>:";
		cin >> input;
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");
			cout << "已退出游戏！！";
			break;
		default:
			system("cls");
			cout << "请不要输入无关值！！";
		}
	} while (input);
	return 0;
}