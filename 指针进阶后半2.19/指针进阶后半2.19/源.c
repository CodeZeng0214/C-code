#define _CRT_SECURE_NO_WARNINGS 1
//���ڶ���ָ�봫�εȵȼ��μ�
// 
//	//�Ѷ���ָ����д����أ�
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	int* arr[10] = {0};
//	test(arr);//�����һ��ָ�������
//	printf("%d\n", a);//?
//
//	return 0;

//����ָ��-ָ������ָ��
// 
//	//�Ѷ���ָ����д����أ�
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	int* arr[10] = {0};
//	test(arr);//�����һ��ָ�������
//	printf("%d\n", a);//?
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//	// 
//	//pf����һ������ָ�����
//	int (*pf)(int, int) = &Add;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	return 0;

//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;//һ����ʽ��������߼�
//
//	return 0;
//}

//����ָ��ĵ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf����һ������ָ�����
//	//int (*pf)(int, int) = &Add;
//int (*pf)(int, int) = Add;//   Add === pf
//	//int ret = (*pf)(3, 5);//1
//	//int ret = pf(3, 5);//2��Ҳûë��
//	//int ret = Add(3, 5);//3
//	// ��������һ��
// 
//	//int ret = * pf(3, 5);//  ���У�����
//
//	//printf("%d\n", ret);
//
//	return 0;
//�������������������ǵ�ַ��������Ĳ���ȫ��ͬ��һ��

//��������
//0x0012ff48 - int
//int main()
//{
//	(*(void(*)())0)();
//
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void(*)() - ����ָ������//�������ָ������Ϊint*ȥ����p
//	//2. (void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3. *(void(*)())0 - ��0��ַ�����˽����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	//<c�����ȱ��>
//
//	return 0;

//������
//1
//void (* signal(int, void(*)(int) ) )(int);
//1. signal ��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2. signal�����ĵ�һ��������������int,�ڶ��������������Ǻ���ָ��
// �ú���ָ�룬ָ��һ������Ϊint,����������void�ĺ���
//3. signal�����ķ�������Ҳ��һ������ָ��
// �ú���ָ�룬ָ��һ������Ϊint,����������void�ĺ���
// signal��һ������������

////typedef - �����ͽ����ض���
////2
//typedef void(*pfun_t)(int) ;//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//pfun_t signal(int, pfun_t);

//typedef unsigned int uint;

//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*
//����ָ������ int* arr[5];

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};//pfArr���Ǻ���ָ�����飬����ͬ���͵ĺ���ָ��
//pfarr������[]��������
//	return 0;

//����ָ�������Ӧ��-������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1. ��    2. �� ****\n");
//	printf("**** 3. ��    4. �� ****\n");
//	printf("****     0. �˳�      ****\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//������-�������ͱ����ļӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a>b
//
//	do {
//		menu();
//		
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;

//���ú���ָ�������������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1. add    2. sub ****\n");
//	printf("**** 3. mul    4. div ****\n");
//	printf("****     0. exit      ****\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//������-�������ͱ����ļӡ������ˡ���
//	//a&b a^b a|b a>>b a<<b a>b
//
//	do {
//		menu();
//
//		//pfArr���Ǻ���ָ������
//		//ת�Ʊ� - ��C��ָ�롷
//
//		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf("%d", &input);//2
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������>:");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//����ָ��pfun
//void (*pfun)(const char*) = test;
//����ָ�������pfunArr
//void (*pfunArr[5])(const char* str);
//pfunArr[0] = test;
//ָ����ָ������pfunArr��ָ��ppfunArr
//void (*(*ppfunArr)[5])(const char*) = &pfunArr;
 
//�ص�����
/*
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************\n");
	printf("**** 1. add    2. sub ****\n");
	printf("**** 3. mul    4. div ****\n");
	printf("****     0. exit      ****\n");
	printf("**************************\n");
}

int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������2��������>:");
	scanf("%d %d", &x, &y);
	return pf(x, y);//�ڴ˵��ò�����
}

int main()
{
	int input = 0;
	//������-�������ͱ����ļӡ������ˡ���
	//a&b a^b a|b a>>b a<<b a>b

	do {
		menu();

		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ret = Calc(Add);//��add����ָ���������
			printf("ret = %d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret = %d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);//
			printf("ret = %d\n", ret);
			break;
		case 4:
			ret = Calc(Div);//
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}

	} while (input);
	return 0;
}*/

//qsort����-��������
//���Σ��ַ������ṹ�嶼���� 

//void qsort(void* base, //base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//			size_t num, //��������Ԫ�صĸ���
//			size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
//			int (*cmp)(const void* , const void*)//�������Ƚϴ����������е�2��Ԫ�صĺ���
//			);


//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	//�������ݵ�����
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//��ӡ
//	print_arr(arr, sz);
//}

//������������ʾ��
//�ṹ��
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	//��������������
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//��������������//����ĸ�İ�˹��ֵ
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}

//���Ҫ����ֻҪe1e2��������

//ģ��qsortʵ��һ��ð�������ͨ���㷨

//void Swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void*e1, const void*e2) )
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ�˵�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�رȽ�
//			//arr[j] arr[j+1]
//			if (cmp( (char*)base+j*width, (char*)base+(j+1)*width )>0)
//			{          //ע�����
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//�����Լ��ĺ������
//void test3()
//{
//	//�������ݵ�����
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//��ӡ
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
//
//	int sz = sizeof(s) / sizeof(s[0]);
//	//��������������
//	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
//	//��������������
//	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
//}
//����Ϊ����û��������


//ָ���������������

////һά����
// 
// //sizeof(������) - ��������ʾ���������-���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ
// 
// 
//int a[] = { 1,2,3,4 };

//printf("%d\n", sizeof(a));//16
//printf("%d\n", sizeof(a + 0));//��һ��Ԫ�صĵ�ַ4/8����ƽ̨λ��
//printf("%d\n", sizeof(*a));//����ĵ�һ��Ԫ��4
//printf("%d\n", sizeof(a + 1));//�ڶ���Ԫ�ص�ַ4/8
//printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�صĴ�С4

//printf("%d\n", sizeof(&a));//��������ĵ�ַ��С4/8
//printf("%d\n", sizeof(*&a));//�������Ĵ�С16
//printf("%d\n", sizeof(&a + 1));//�������ռ�ĵ�ַ�Ĵ�С
//printf("%d\n", sizeof(&a[0]));//��ַ
//printf("%d\n", sizeof(&a[0] + 1));//��ַ

////�ַ�����

//char arr[] = { 'a','b','c','d','e','f' };//û��\0

//printf("%d\n", sizeof(arr));//����Ĵ�С6
//printf("%d\n", sizeof(arr + 0));a�ĵ�ַ4/8
//printf("%d\n", sizeof(*arr));//һ���ַ���С1
//printf("%d\n", sizeof(arr[1]));//ͬ��
//printf("%d\n", sizeof(&arr));//4/8
//printf("%d\n", sizeof(&arr + 1));//�ڶ���Ԫ�صĵ�ַ��С4/8
//printf("%d\n", sizeof(&arr[0] + 1));//ͬ��

//strlen-���ַ����ĵĳ���--��\0��
//printf("%d\n", strlen(arr));//���ֵ
//printf("%d\n", strlen(arr + 0));//���ֵ
//printf("%d\n", strlen(*arr));//���Ǵ���ַ����ASILLֵ�ʳ�����
//printf("%d\n", strlen(arr[1]));//ͬ����
//printf("%d\n", strlen(&arr));//��һ���ַ��������ַ������ֵ
//printf("%d\n", strlen(&arr + 1));//ͬ��
//printf("%d\n", strlen(&arr[0] + 1));//ͬ��

//char arr[] = "abcdef";//��\0
//sizeof��\0

//printf("%d\n", sizeof(arr));//�����С
//printf("%d\n", sizeof(arr + 0));//��һ��Ԫ�صĵ�ַ
//printf("%d\n", sizeof(*arr));//��һ��Ԫ��
//printf("%d\n", sizeof(arr[1]));//1
//printf("%d\n", sizeof(&arr));//1
//printf("%d\n", sizeof(&arr + 1));//4/8
//printf("%d\n", sizeof(&arr[0] + 1));//4/8

//strlen����\0ֹͣ 
//printf("%d\n", strlen(arr));//6
//printf("%d\n", strlen(arr + 0));//6
//printf("%d\n", strlen(*arr));//������
//printf("%d\n", strlen(arr[1]));//������
//printf("%d\n", strlen(&arr));//�ӵ�һ����ʼ��6
//printf("%d\n", strlen(&arr + 1));�������ʼ�������ֵ
//printf("%d\n", strlen(&arr[0] + 1));//�ӵڶ���Ԫ�ؿ�ʼ����5

//char* p = "abcdef";//�����ַ��ĵ�ַ�浽p��

//printf("%d\n", sizeof(p));//���ַ�Ĵ�С4/8
//printf("%d\n", sizeof(p + 1));//ͬ��
//printf("%d\n", sizeof(*p));//a��1
//printf("%d\n", sizeof(p[0]));a��1
//printf("%d\n", sizeof(&p));//��ַ4/8
//printf("%d\n", sizeof(&p + 1));//��ַ
//printf("%d\n", sizeof(&p[0] + 1));//�ڶ���Ԫ�صĵ�ַ4/8

//printf("%d\n", strlen(p));//�ӵ�һ���ַ���ʼ��6
//printf("%d\n", strlen(p + 1));//5
//printf("%d\n", strlen(*p));//����
//printf("%d\n", strlen(p[0]));//����
//printf("%d\n", strlen(&p));//�����ǵ�ַ�ڣ����ֵ//��϶���ָ�����
//printf("%d\n", strlen(&p + 1));//ͬ�ϣ����ֵ
//printf("%d\n", strlen(&p[0] + 1));//5

//�ܽ�strlen�Ǻ���ģ��ģ��ʣ����ڴ�����ָ�룬���ҵ���ȡλ�õ���ʼ��ֻ�ܼ����ַ�����С����\0Ϊ��ֹ
//sizeof��ϵ���ڲ������ֽ�λ��λ����Ԫ�ش�С

////��ά����
//int a[3][4] = { 0 };
//printf("%d\n", sizeof(a));
//printf("%d\n", sizeof(a[0][0]));
//printf("%d\n", sizeof(a[0]));
//printf("%d\n", sizeof(a[0] + 1));
//printf("%d\n", sizeof(*(a[0] + 1)));
//printf("%d\n", sizeof(a + 1));
//printf("%d\n", sizeof(*(a + 1)));
//printf("%d\n", sizeof(&a[0] + 1));
//printf("%d\n", sizeof(*(&a[0] + 1)));
//printf("%d\n", sizeof(*a));
//printf("%d\n", sizeof(a[3]));