#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�Լ򵥼ӷ�Ϊ��
int Add(int x, int y)
{
	int z;
	z = x + y;
	return z;//����zֵ
}//�˴�����Add�����������Ӧ
int main()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);//&ÿ������Ķ�����scanf������ǰҪ��&
	//��һ�ַ�����û�üӺ�����
	int sum = a + b;
	printf("%d\n", sum);
	//�ڶ��ַ��������˼Ӻ�����
	int sum0 = Add(a, b);//�˴���Add����ǰ�����
	printf("%d\n", sum0);
	return 0;
}//��Ȼ���Ƶ�һ�ַ�����㣬�������븴��ʱ���ڶ��ֶ���һ�ο���һֱʹ�÷�������
