#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C��������һ���ֺŸ����ľͽ�һ�����


int main()
{
	//��һ
	int age = 10;
	if (age >= 18)
		printf("����\n");
	else
	{//{}��һ�������
		printf("δ����\n");
		printf("ee\n");
	}//������������ţ���else��������䲻������ִ��
	//else if (18 <= age < 26);{}����������ʽ�߼�����Ӧ��Ϊage>=18 && age<26
	//printf("..");//��������ִ��18<=age Ϊ�����Ϊ1�������ұ߱ȣ��μ��ж�1/0

//����	
	/*int a = 0;
	int b = 2;
	if (a == 1);
	if (b == 2);
	printf("hehe\n");
	else
		printf("haha\n");//ע�����Ķ�Ӧ��ϵ��if else �ͽ���Ӧ
						 //����һ�����õĴ�����
						//���Լ�{}�ָ�*/

//�������1-100֮�������
	int a = 0;
	for (a = 1; a <= 100; a++)
	{    if (a % 2 == 1)
	         printf("%d ", a);
     }

//switch���
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
	case 2:
		printf("���ڶ�\n");
	case 3:
		printf("������\n");
	case 4:
		printf("������\n");
	case 5:
		printf("������\n");
	case 6:
		printf("������\n");
		break;//�������
	case 7:
		printf("������\n");//�������γ������ʽ���ó����
	}
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;//�����Լ����ڵ����
	case 7:
		printf("������\n");//�������γ������ʽ���ó����
	default:
		printf("��������");
		break;//�����ڵ������޹�ֵʱ��ʾ 
	}//switch����Ƕ��ʹ��

		return 0;
}