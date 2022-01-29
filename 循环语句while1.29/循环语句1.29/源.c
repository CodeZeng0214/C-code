#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//循环语句
int main()
{
 //while语句
    //while（表达式）
       //循环语句；
    
    //在屏幕上打印1-10
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    
    //while中的break和contine
    int a = 1;
    while (a <= 10)
    {
        if (a == 5)
            break;//在while循环中用于永久的终止循环
        printf("%d ", a);
        a++;
    }
    int b = 0;
    while (b <= 9)
    {   b++;
        if (b == 5)
            continue;//用于跳过本次循环的continue下面的代码
        printf("%d ", b);
    }//合理利用F10进行调试

    //getchar读取一个字符，即键盘上的操作，变为可对应的字符
    /*int ch = getchar();
        printf("%c\n", ch);
        putchar(ch);//输出一个字符*/
    int ch;
    //ctrl+z读取结束
    while ((ch = getchar()) != EOF)//!=不等  EOF是end of file文件结束的意思
                                //结合缓冲区概念，当缓冲区满时返回-1，故加EOF表示结束循环
    {
        putchar(ch);
    }

    //密码例子
    char mima[20] = { 0 };
    printf("请输入密码\n");//输入123456//此处不能随便用空格，空格会分开读取从而影响以后的读取//可以用第  行解决
                        //getchar和scanf这样的输入函数是从缓冲区中拿函数
    scanf("%s", mima);//此处会留下\n在缓冲区
    printf("请确认密码（Y/N）");
    int tmp = 0;
    while ((tmp = getchar()) != '\n')
    {
        ;
    }//利用循环清理多余的东西
    getchar();//单次清理缓冲区，拿走\n
    int ch0 = getchar();//若没有清理，此处getchar拿的是缓冲区留下的东西
    if (ch0 = 'Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认失败\n");
    }

    //例子打印数字类型字符
    int ch1;
    while ((ch1 = getchar()) != EOF)
    {
       
        if (ch1 < '0' || ch1 > '9')
            continue;
            putchar(ch1);
        
    }


    return 0;
}
     