#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//���ú����ݹ���һ���ַ������򣬲���ʹ�ÿ⺯��
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//��ʾ�ַ�����ַ��ǰһ��
	}

	return count;
}
//ѭ��ʵ��
void reverse_string2(char* str)
{
	int left = 0;
	int right = my_strlen(str)-1;

	while (left<right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
//ϸ�ڱ䶯
void reverse_string1(char* str)
{
	int left = 0;
	int right = my_strlen(str) - 1;

	while (left < right)
	{
		char tmp = *(str + left);//str[left]����Ч��һ��;
		*(str + left) = *(str+right);
		*(str+right) = tmp;
		left++;
		right--;
	}
}

void reverse_string(char* str)
{
	char tmp = *str;//1
	int len = my_strlen(str);//
	*str = *(str + len - 1);//2
	*(str + len - 1) = '\0';//3
	//�ж�����
	if(my_strlen(str+1)>=2)//�������ʣ������ʲô
	{
		reverse_string(str + 1);//4
	}

	*(str + len - 1) = tmp;//5
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ

	printf("%s\n", arr);//fedcba
	return 0;
}

//ʵϰ����Ҫ��

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));//���ǵ�������
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}










