#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ���������������������Ӷ���
//����һ��ѧ������
struct stu
{
	char name[20];//ע�����������������ĳ��ȣ�Ҳ�����ж��ٸ�name��������潲
	int age;
	double score;//�ṹ��ĳ�Ա����
};
//����һ��������
struct book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	struct stu s = { "����", 20, 85.5 };//�ṹ��ĳ�ʼ������Ϊs
	printf("%s %d %lf\n", s.name, s.age, s.score);//s.   ��Ϊ�ҵ��ṹ��ĳ�Ա
	struct stu* ps = &s;//struct stu*�нṹ��ָ��
	printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
	//��������Ч����ͬ  ��ͷ���ps�ṹ���ָ��  ��ͷ�ұ��ǽṹ��ĳ�Ա
	return 0;
}