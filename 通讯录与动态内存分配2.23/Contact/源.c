#define _CRT_SECURE_NO_WARNINGS 1

//��̬�ڴ濪��
#include <stdlib.h>


//1 malloc

//int main()
//{
//	//���迪��10�����εĿռ� - 10* sizeof(int)
//	//int arr[10];//ջ��
//	
//	//��̬�ڴ濪�ٵ�
//	int* p = (int*)malloc(1000000000*sizeof(int));//void*
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		//printf  + strerror
//		perror("main");//main: xxxxxxxxx//��ӡ����
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] --> *(p+i)
//	}
//
//	//���տռ�
//	free(p);
//	p = NULL;//�Լ����ְ�p��ΪNULL
//freeֻ�������ͷ��ڶ��ϵĿռ�
//	return 0;
//}

//2 calloc

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//�Զ���ʼ����

//3 realloc

//	//������Ҫpָ��Ŀռ������Ҫ20��int�Ŀռ�
//	//realloc�����ռ�
//
//	int*ptr = (int*)realloc(p, 20*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}