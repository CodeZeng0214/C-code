#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�ݹ飬�����Լ������Լ�

//����1234���1 2 3 4

/*void print(unsigned int n)//123
{
	if (n > 9)
	{
		print(n / 10);
	}//��������
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;//unsigned ���޷��ŵ���˼
	scanf("%u", &num);//123//%d���޷������ε���˼
	//�ݹ� - �����Լ������Լ�
	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
    return 0;
}*/

//����ջ����ջ���

/*void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	int a = 10;
	test(1);
	return 0;
}*/
//��˲������ݹ飬Ҫ����������
//�ݹ��β���̫��
//һ����վ������Ա��֪����https://stackoverflow.com/

//��д����//����������ʱ���������ַ����ĳ���

/*int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}//û�п��ǵ���������ʱ����

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}//���õݹ�����whileѭ��һ����Ч��
int main()
{
	char arr[] = "bit";
	//['b']['i']['t']['\0']
	//
	//ģ��ʵ��һ��strlen����
	printf("%d\n", my_strlen(arr));

	return 0;
}*/

//���ú����ݹ���׳�

/*int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = Fac(n);

	printf("%d\n", ret);
	return 0;
}*/
//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�

//���õݹ���쳲���������
//int count = 0;
//�ݹ������⣬����Ч��̫��
//int Fib(int n)
//{
//	//ͳ�Ƶ�3��쳲��������ļ��������
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}

//����ѭ����쳲���������
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
 //int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
