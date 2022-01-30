#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>//包含Sleep函数
//循环语句do while
   //do 
        //循环语句
         //while（判断）
        //与while不同的是先执行再判断
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

    //break与continue类似前面的讨论

    //利用三种循环进行一些练习

    //计算n的阶乘
    int n0 = 0;
    int i0 = 0;
    int r = 1;
    scanf("%d", &n0);
    for (i0 = 1; i0 <= n0; i0++)
    {
        r *= i0;
    }
    printf("%d\n", r);

    //求1！+2！+····+10！
    int n = 0;
    int ret = 1;
    int sum = 0;
    for (n = 1; n <= 10; n++)
    {
        ret *= n;
        sum =sum+ret;    
    }
    printf("%d\n", sum);

    //在一个有序数组中查找一个数字n(二分法)
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;//要查找的数字
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    while (left <= right)
    {
      int mid = (left + right) / 2;
         if (arr[mid] < k)//范围舍左
       {
           left = mid + 1;
        }
         else if (arr[mid] > k)//范围舍右
        {
             right = mid - 1;
         }
         else
         {
             printf("找到了下标:%d\n", mid);
             break;//跳出循环
         }
    }
    if (left > right)
    {
        printf("找不到了");
    }

    //编写代码，演示多个字符，从两端向内靠近
    char arr1[] = "welcome to my world!!!!";
    char arr2[] = "#######################";
    int left0 = 0;
    int right0 = strlen(arr1) - 1;//减一是因为\n的存在
    while (left0 <= right0)
    {
        arr2[left0] = arr1[left0];
        arr2[right0] = arr1[right0];
        printf("%s\n", arr2);
        Sleep(1000);//单位是毫秒
        system("cls");//清空屏幕
        left0++;
        right0--;
    }
    printf("welcome my world");

    //编写代码实现，模拟用户登录情景，并且只能登陆三次
    int i = 0;
    char password[20] = { 0 };//假设密码为0214
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码：");
        scanf("%s", password);
        if (strcmp(password, "0214") == 0)//两个字符串比较用strcmp，不能用==
        {
            printf("登陆成功\n");
            break;
        }
        else
        {
            printf("密码错误，请重新输入！\n");
        }
    }
    if (i == 3)
        printf("三次密码均错误，拜拜\n");

    
    return 0;
}