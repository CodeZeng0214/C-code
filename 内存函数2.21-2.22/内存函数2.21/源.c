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

//ģ��ʵ��memmove
void my_memmmove(char* dest, const char* src, size_t num)
{
	//�ؼ������ڴ��ص�ʱ��ǰ��󿼻��ǴӺ���ǰ
		void* ret = dest;
	assert(dest && src);

	if (dest < src)
	{
		//ǰ->��
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else 
	{
		//��->ǰ
		while (num--)//19
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;

}

///memcpy - ֻҪʵ���˲��ص������Ϳ�����,��VS�е�ʵ�ּȿ��Կ������ص���Ҳ���Կ����ص��ڴ�

//memcmp - �ڴ�Ƚ�
//
//int main()
//{
//	float arr1[] = { 1.0, 2.0,3.0,4.0 };
//	float arr2[] = { 1.0, 3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp - strcmp
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	//40
//	int arr[10] = { 0 };//20
//	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ��
//	//01 00 00 00
//	//01 01 01 01
//	return 0;
//}