#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>//����Sleep����
//ѭ�����do while
   //do 
        //ѭ�����
         //while���жϣ�
        //��while��ͬ������ִ�����ж�
int main()
{
    /*
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    */

    //break��continue����ǰ�������

    //��������ѭ������һЩ��ϰ

    //����n�Ľ׳�
    int n0 = 0;
    int i0 = 0;
    int r = 1;
    scanf("%d", &n0);
    for (i0 = 1; i0 <= n0; i0++)
    {
        r *= i0;
    }
    printf("%d\n", r);

    //��1��+2��+��������+10��
    int n = 0;
    int ret = 1;
    int sum = 0;
    for (n = 1; n <= 10; n++)
    {
        ret *= n;
        sum =sum+ret;    
    }
    printf("%d\n", sum);

    //��һ�����������в���һ������n(���ַ�)
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//Ҫ���ҵ�����
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
      int mid = (left + right) / 2;
         if (arr[mid] < k)//��Χ����
       {
           left = mid + 1;
        }
         else if (arr[mid] > k)//��Χ����
        {
             right = mid - 1;
         }
         else
         {
             printf("�ҵ����±�:%d\n", mid);
             break;//����ѭ��
         }
    }
    if (left > right)
    {
        printf("�Ҳ�����");
    }

    //��д���룬��ʾ����ַ������������ڿ���
    char arr1[] = "welcome to my world!!!!";
    char arr2[] = "#######################";
    int left0 = 0;
    int right0 = strlen(arr1) - 1;//��һ����Ϊ\n�Ĵ���
    while (left0 <= right0)
    {
        arr2[left0] = arr1[left0];
        arr2[right0] = arr1[right0];
        printf("%s\n", arr2);
        Sleep(1000);//��λ�Ǻ���
        system("cls");//�����Ļ
        left0++;
        right0--;
    }
    printf("welcome my world");

    //��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½����
    int i = 0;
    char password[20] = { 0 };//��������Ϊ0214
    for (i = 0; i < 3; i++)
    {
        printf("���������룺");
        scanf("%s", password);
        if (strcmp(password, "0214") == 0)//�����ַ����Ƚ���strcmp��������==
        {
            printf("��½�ɹ�\n");
            break;
        }
        else
        {
            printf("����������������룡\n");
        }
    }
    if (i == 3)
        printf("������������󣬰ݰ�\n");

    
    return 0;
}