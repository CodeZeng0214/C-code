#define _CRT_SECURE_NO_WARNINGS 1

//��̬�ڴ濪�ٳ����Ĵ���

//1.��NULLָ��Ľ����ô���
//���Ա��������ж�
//void test()
//{
//	int* p = (int*)malloc(int_max / 4);
//	*p = 20;//���p��ֵ��null���ͻ�������
//	free(p);
//}


//2 �Զ�̬���ٿռ��Խ�����
//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//}


//3.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//ok?
//}

//4 ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}
//Ҫ�ӿ�ʼ��ָ���ͷŲ���


//5 ��ͬһ�鶯̬�ڴ����ͷ�
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}


//6 ��̬�����ڴ������ͷţ��ڴ�й©��
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}
//�����ͷŲ���ʹ�õĶ�̬���ٵĿռ������ڴ�й©��


//����һ
#include <string.h>
//
//str����GetMemory������ʱ����ֵ���ݣ�����GetMemory�������β�p��str��һ����ʱ������
//��GetMemory�����ڲ���̬����ռ�ĵ�ַ�������p�У�����Ӱ�����str�����Ե�GetMemory��������֮��str��Ȼ��NULL������strcpy��ʧ�ܡ�
//
//��GetMemory��������֮���β�p���٣�ʹ�ö�̬���ٵ�100���ֽڴ����ڴ�й©���޷��ͷš�
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//��ַ��ӡ
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//��
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//?
//	//printf("hello world");//char *p = "hello world";
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//�Ķ�   ����ָ��
// void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}


//������
//GetMemory �����ڲ���������������ջ���ϴ�����
//���˺�����p����Ŀռ�ͻ����˲���ϵͳ
//���صĵ�ַ��û��ʵ�ʵ����壬���ͨ�����صĵ�ַ��ȥ�����ڴ���ǷǷ������ڴ��
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��������
//������ʽ
//struct S
//{
//	int n;
//	int arr[];//��С��δ֪
//};
//
//struct S
//{
//	int n;//4
//	int arr[0];//��С��δ֪
//};
//������������Сʱ����������������ڴ�
//�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�
//С������Ӧ���������Ԥ�ڴ�С��

//ʾ��
//int main()
//{
//	//����arr�Ĵ�С��10������
//	struct S*ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//����
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+20*sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL
//	return 0;
//}
//���ַ�ʽ���Լ���malloc�Ĵ����������ﵽ�ڴ���Ƭ��Լ���