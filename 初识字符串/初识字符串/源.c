#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//�¶�������Ҫ��ͷ�ļ�
//��ʼ�ַ���
//�ַ����������char arr[]="" arrΪ�������� []����Ϊһ���ռ� 
int main()
{
	char arr[] = "hello";//�ַ�����-һ����ͬ���͵�Ԫ��
	                     //�ַ����Ľ�β������\0��Ϊ������־
	char arr1[] = "abc"; //�Դ�б����
	char arr2[] = { 'a','b','c' };//����\0
	//��ӡ�ַ���%sΪ���ַ�%cΪ���ַ�
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//��ӡ�ַ����ĳ���
	int len = strlen("abc");//string length//\0����������
	printf("%d\n", len);
	//��ӡ�ַ����ĳ���
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//��ӡ�����ֵ
	//��11�и�Ϊchar arr2[] = {'a','b','c','\0'}��ָ�����
	return 0;           
}

