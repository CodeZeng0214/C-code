#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <string.h>


//sterror
//int main()
//{
//	//���ļ�ʧ�ܷ��ؿ�ָ��
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", sterror(errno));//�Ѵ�����ת���ɴ�����Ϣ
//		perror("fopen");//���ô������룬ֱ�Ӿ��ܴ�ӡ�ĺ������������ӷ���
//		return 1;
//	}
//	//���ļ���ر��ļ�
//	fclose(pf);
////	pf = NULL;
//	return 0;
//}


//�ַ����ຯ��
//#include <ctype.h>//�⺯��
//
//int main()
//{
//	char ch = 'a';
//	//isdigit  ����������ַ����ط�0��ֵ��������������ַ�������0
//
//	if (ch >= 'A' && ch <= 'Z')
//	{
//
//	}
//
//	//int ret = isdigit(ch);
//	//int ret = islower(ch);
//	//printf("%d\n", ret);
//
//	return 0;
//}


//�ַ�ת������
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	return 0;


//�ڴ溯��

//memcpy-�ڴ濽��
// int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//01 00 00 00 02 00 00 00 ...
//	int arr2[20] = { 0 };
//	//strcpy()
//	//char* strcpy(char* dest, const char* src)
//	return 0;
//}
//����������������ܲ����ַ�������������������ڴ����
//#include <assert.h>
//
// ģ��ʵ��
//void* my_memcpy(void* dest, const void* src, size_t num)num�����ֽ�Ϊ��λ
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	while (num--)//4 3 2 1
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;//ǿ������ת������ʱ״̬
//		src = (char*)src + 1;
//	}
//	return ret;
//}

//memcpy����Ӧ�ÿ������ص����ڴ�
//memmove�������Դ����ڴ��ص������