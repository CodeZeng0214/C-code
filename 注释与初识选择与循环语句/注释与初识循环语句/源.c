#define _CRT_SECURE_NO_WARNINGS 1
//ע���������ʹ����п�ݼ��Բ�
 //C++����ע�ͷ��//��������  ��/*��������*/����֧��Ƕ�ף�
#include <stdio.h>

 
int main()
{
	
	//ѡ�����
	int input;//����һ��input
	printf("�ú�ѧϰ��(1/0)?\n");
	printf("���ǡ���1����������2\n");
	scanf("%d", &input);//����һ��ֵ��input
	if (input == 1)//==Ϊ���ڣ�=Ϊ��ֵ
		printf("ϲ���ͼ��Ͱ�\n");
	else
		printf("����");//��ѡ���

	//ѭ�����
	int line = 0;//����ֵ
	while (line < 1460)
	{
		printf("ѧϰ֪ʶ����Լ���%d��\n", line);
		line++;//++Ϊ��Ȼ����
	}
	if (line == 1460)
	{
		printf("�����׹���");
	}

	return 0;
}
