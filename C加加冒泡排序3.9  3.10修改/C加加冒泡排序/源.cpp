#define _CRT_SECURE_NO_WARNINGS 1
//√∞≈›≈≈–Ú
#include <iostream>
using namespace std;

void Bubble(int a[], int n)
{
	int tem = 0;
	cout << "≈≈–Ú«∞£∫" << endl;
	for (int b = 0; b < n; b++)
	{
		cout << a[b] << " ";
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;
			}
		}
	}
	cout << "≈≈–Ú∫Û£∫" << endl;
	for (int b = 0; b < n ; b++)
	{
		cout << a[b] << " ";
	}
}
int main()
{
	int a[10] = { 10,8,2,1,3,6,4,5,7,9 };
	int s = sizeof(a) / sizeof(a[0]);
	Bubble(a,s);
}