#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ķ���
#define MAX 10000//��Ӧ3.
enum Sex
{
	MALE=3,//��Ӧ4.ö�ٳ���Ĭ��������㿪ʼ,dan���Ը���ֵ
	FEMALE,
	SECRET,
};
int main()
{
//1.���泣��
	3.14;
	10;
	'a';//�ַ�a,�ַ��ų���
//2.const���εĳ�����
 const int num = 10;//constʹnum���г����ԣ����ܸı�����ԣ����ʻ��Ǳ���
	//num = 20;//����,���û��const���������20
	printf("num=%d\n", num);
//3.#define����ı�ʶ������
	printf("n=%d\n", MAX);//MAXΪ�����������ٶ���
//4.ö�ٳ���������һһ�оٵĳ����������Ա�
	enum Sex a = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);


}