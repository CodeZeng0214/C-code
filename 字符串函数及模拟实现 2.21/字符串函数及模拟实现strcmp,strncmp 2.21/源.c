#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* str)//const����ʹ�Լ��ĺ�������ȫ
//{
//	//����Ҳ��Ϊ�˱�����һ������
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0');
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	//int len = strlen(arr);//������\0����Ҫ������Ϊֹ
//	int len = my_strlen(arr);//ģ��ʵ��strlen����
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)//strlen����Ľ�����޷������������޷������������õ���ֵ
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//�ַ�������
//int main()
//{
//	char* str = "xxxxxxxxxxxxxxxxxxx";//Ŀ��ռ����ɱ䣬�����ǳ����ַ���
////char arr[5] = "####";
//	//arr = "hello";//err
//	//char* p = "hello";
//	//strcpy(arr, "hello");//string copy//������h�ĵ�ַ//���ַ�������û��\0
//	//char arr2[] = { 'a', 'b', 'c' };//���ܿ���
//	char* p = "hello world";
//	strcpy(str, p);//?
//	//printf("%s\n", arr);
//	return 0;
//}


//�ַ���׷��

//ģ��ʵ��
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//��һ���ҵ�\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//�ڶ�����׷�Ӳ�����\0
//	while (*dest++ = *src++)
//	{
//		;//����++//�����жϾ�
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";//world
//	char arr2[] = "world";
//	//my_strcat(arr1, arr2);//�ַ���׷�ӣ����ӣ���\0��ʼ׷��
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}


//strcat�����Լ����Լ�׷�ӣ���Ϊ�ڲ�ԭ��ì��

//strcmp-�Ƚ��ַ�����С

//int ret = strcmp("abbb", "abq");//<0
//	int ret = strcmp("aaa", "aaa");
//	printf("%d\n", ret);
//	return 0;
//}
//�����ǱȽ��ַ�����Ԫ�صİ�˹��ֵ

//ģ��ʵ��
//int my_strcmp(const char* str1, const char* str2)
//{
	//	assert(s1 && s2);
	//	while (*s1 == *s2)
    //	{
//		    if (*s1 == '\0')
//		    {
//			     return 0;
//		    }
//		       s1++;
//		       s2++;
//	    }
//	        if (*s1 > *s2)
//	       {
//	        	return 1;
//	        }
//	       else
//	       {
//		     return -1;
//	       }
//}


//strncpy�ȼ�n�����г��������Ƶ��ַ�������
//int main()
//{
//	char* p = "aqcdef";
//	char* q = "abcqwert";
//	//int ret = strcmp(p, q);
//	int ret = strncmp(p, q, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}


//strstr-��һ���ַ���������һ���ַ���
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		//abcdef
//		//  cdef
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	//��arr1�в����Ƿ����arr2����
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%s\n", ret);
//	}
//	return 0;
//}


//�ָ��
//char* strtok(char* str, const char* sep);
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��
//strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ����������
//���ҿ��޸ġ���
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ���
//�е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����
//�ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣


// 
//strtok
//zpw@bitedu.tech
//@.
//
//int main()
//{
//	char arr[] = "zpw@bitedu.tech hehe";
//	char* p = "@. ";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	//zpw\0bitedu\0tech\0
//
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//

//����������ļ򻯰�
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);


/ ʹ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ�ܵ��ǣ��������ô�����
//ȫ�ֵĴ�����
//int errno;//5

//#include <errno.h>
//
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
// //����������е���Ϣ

//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//...
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}