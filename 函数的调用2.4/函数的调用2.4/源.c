#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//��ֵ�����봫ַ���õ�������μ�

//��1000�굽2000��֮�������
/*int is_leap_year(int n)//����ж������귵��1
//�������꣬����0
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));//�������һ����
}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}

	return 0;*/

//���ö�����һ�����������ĳһ������
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//�Ҳ�����
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//�Ҳ�������-1
	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
	//��������ȥ��������Ԫ�صĵ�ַ  �״�
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
    if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;

//дһ��������ÿ����һ��ʹNUM��һ
	// void Add(int* p)
	//{
	//	(*p)++;
	//}
	//
	//int main()
	//{
	//	int num = 0;
	//	Add(&num);
	//	printf("%d\n", num);//1
	//
	//	Add(&num);
	//	printf("%d\n", num);//2
	//
	//	Add(&num);
	//	printf("%d\n", num);//3
	//
	//	return 0;
	//}
