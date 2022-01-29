#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//for循环  for（初始化；判断；调整）
              //循环语句；
              //判断完执行代码块再进行调整
              //初始化只有一次

int main()
{
    //打印1-10
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    //break与continue
    //break和while差不多 但continue不会造成死循环，因为跳不过i++
    //一定要避免在内部改变循环变量，可能会造成一些失去控制的情况
    //建议左开右闭可以直观看出循环次数
    
    //for循环括号内是可以省略的，但判断一般不省略会造成死循环
    //for也可以嵌套
    //外面初始和内部初始会造成不一样的结果
    //判断句为0即为假，不会有循环
    return 0;
}
    
    