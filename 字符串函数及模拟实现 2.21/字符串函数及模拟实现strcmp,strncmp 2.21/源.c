#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int my_strlen(const char* str)//const可以使自己的函数更安全
//{
//	//断言也是为了避免万一发生的
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
//	//int len = strlen(arr);//必须有\0，它要读到其为止
//	int len = my_strlen(arr);//模拟实现strlen函数
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)//strlen里面的结果是无符号数，两个无符号数相减不会得到负值
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//字符串拷贝
//int main()
//{
//	char* str = "xxxxxxxxxxxxxxxxxxx";//目标空间必须可变，不能是常量字符串
////char arr[5] = "####";
//	//arr = "hello";//err
//	//char* p = "hello";
//	//strcpy(arr, "hello");//string copy//传的是h的地址//故字符串不能没有\0
//	//char arr2[] = { 'a', 'b', 'c' };//不能拷贝
//	char* p = "hello world";
//	strcpy(str, p);//?
//	//printf("%s\n", arr);
//	return 0;
//}


//字符串追加

//模拟实现
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//第一步找到\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//第二步，追加并包含\0
//	while (*dest++ = *src++)
//	{
//		;//利用++//必须有断句
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";//world
//	char arr2[] = "world";
//	//my_strcat(arr1, arr2);//字符串追加（连接）从\0开始追加
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}


//strcat不能自己给自己追加，因为内部原理矛盾

//strcmp-比较字符串大小

//int ret = strcmp("abbb", "abq");//<0
//	int ret = strcmp("aaa", "aaa");
//	printf("%d\n", ret);
//	return 0;
//}
//本质是比较字符串内元素的阿斯玛值

//模拟实现
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


//strncpy等加n的是有长度受限制的字符串函数
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


//strstr-在一个字符串找另外一个字符串
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
//	//在arr1中查找是否包含arr2数组
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	return 0;
//}


//分割函数
//char* strtok(char* str, const char* sep);
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：
//strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容
//并且可修改。）
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串
//中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标
//记。
//如果字符串中不存在更多的标记，则返回 NULL 指针。


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

//上面是下面的简化版
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);


/ 使用库函数的时候
//调用库函数失败的是，都会设置错误码
//全局的错误码
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
// //翻译错误码中的信息

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