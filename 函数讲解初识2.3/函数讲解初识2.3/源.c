#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����

//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
int main()
{
	int a = 10;
	int b = 20;
	//дһ������ - ����2�����ͱ�����ֵ

	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(a, b);
	printf("������a=%d b=%d\n", a, b);
return 0;
}//д�������ˣ�����Ϊ��ַ


//�Ľ�����
void Swap2(int* pa, int* pb)//
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;//4���ֽڵĿռ�

	int* pa = &a;//pa����һ��ָ�����
	*pa = 20;

	printf("%d\n", a);
	return 0;
}

//�����Ĳ��������׺���