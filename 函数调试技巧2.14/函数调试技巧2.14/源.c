#define _CRT_SECURE_NO_WARNINGS 1

//�ܶ������μ�

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0-9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//�������еĽ����ʲô��
//
//	return 0;
//i��arr�Ǿֲ��������ֲ������Ƿ���ջ���ϵģ�ջ���ڴ��ʹ��ϰ���ǣ���ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�
//���Է������������
//������һ�㲻ҪԽ�����


//ģ��ʵ��strcpy
//strcpy - �ַ�������
#include <string.h>

//д����
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//
//
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;//\0��Ϊ��
	}
}


int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(NULL, arr2);//��������Ż�����ָ��

	//strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}