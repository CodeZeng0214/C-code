#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
//���ñ��˵Ĵ���
#include "add.c"

//����Ҳ����Ƕ�׵���

//��������ʽ����
int main()
{
	int len = strlen("abc");
	printf("%d\n", len);

	//��ʽ����
	printf("%d\n", strlen("abc"));//�����������

	/*char arr1[20] = { 0 };
	char arr2[] = "bit";
	
	printf("%s\n", strcpy(arr1, arr2));*/

	printf("%d", printf("%d", printf("%d", 43)));//���ޣ�����printf�ķ���ֵ�Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���


	//����Ǵ�ǰ����ɨ��ģ�������Զ��庯��һ�����������ǰ
	//�������ڱ�ĵط���Ҫ��ǰ��������һ���� define Add(int x. int y)
	return 0;
