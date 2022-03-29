#define _CRT_SECURE_NO_WARNINGS 1

////实验3.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int n = 1;
//	for (int i = 10; i > 1; i--)
//	{
//		n = (n + 1) * 2;
//	}
//	cout << "原有桃子数量为" << n << "个";
//    return 0;
//}
//

////实验3.2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, n;
//	int c = 1;
//	int y = 0;
//	cout << "2021110571-曾柯翔" << endl;
//	cout << "*********************" << endl;
//	cout << "    进制转换系统     " << endl;
//	cout << "1、八进制转换为十进制" << endl;
//	cout << "2、十进制转换为八进制" << endl;
//	cout << "*********************" << endl;
//	cout << "请选择序号1或2：";
//	cin >> x;
//	cout << "请输入欲转换的数据：";
//	cin >> n;
//	if (x == 1)
//	{
//		do
//		{
//			y = y + n % 10 * c;
//			c = c * 8;
//			n = n / 10;
//		} while (n != 0);
//		cout << "转换为：" << y;
//	}
//	if (x == 2)
//	{
//		do
//		{
//			y = y + n % 8 * c;
//			c = c * 10;
//			n = n / 8;
//		} while (n != 0);
//		cout << "转换为：" << y;
//	}
//	return 0;
//}

////实验3.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int n = 0;
//	for (int i = 1; i <= 10000; i++)
//	{
//		if (i % 3 == 1 && i % 5 == 2 && i % 7 == 1)
//		{
//			n++;
//		}
//	}
//	cout << "10000以内除以3余1、除以5余2、除以7余1的正整数有" << n << "个";
//	return 0;
//}

//实验3.4
#include <iostream>
using namespace std;
int main()
{
	cout << "2021110571-曾柯翔" << endl;
	double x, y;
	double j = 1;
	double item = 1;
	double PI = 3.14159265; 
	int n = 1;
	int c = -1; 
	cout << "请输入一个角度值：";
	cin >> y;
	x = y * PI / 180;
	do
	{
		item = item * x * x / ((2 * n - 1) * (2 * n));
		j = j + c * item;
		n = n * 2;
		c = c * c;
	} while (item > 0.0000001);
	cout << "cos(x)=" << j;
	return 0;
}

////实验3.5
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	double w = 0;
//	double W = 0;
//	double x = 0;
//	int i = 1;
//	do
//	{
//		cout << "请输入第" << i << "位职工的工资（负数结束）：";
//		cin >> x;
//		if (x <= 5000)
//		{
//			w = 0;
//		}
//		else if (x > 5000 && x <= 8000)
//		     {
//			w = (x - 5000) * 0.03;
//		     }
//		     else if (x > 8000 && x <= 17000)
//		          {
//			           w = (x - 8000) * 0.1 + 3000 * 0.03;
//		          }
//			      else if (x > 17000 && x <= 30000)
//		               {
//			                 w = (x - 17000) * 0.2 + (12000 - 3000) * 0.1 + 3000 * 0.03;
//		               }
//		x = x - w;
//		if (x >= 0)
//		{
//			cout << "第" << i << "位职工的工资为：" << x;
//			cout << ",缴税额为：" << w << endl;
//			cout << "****************************************" << endl;
//			i++;
//			W = W + w;
//		}
//	} while (x >= 0);
//	cout << " " << endl;
//	cout << "职工总人数为：" << i - 1;
//	cout << "，总缴税额为：" << W;
//	return 0;
//}