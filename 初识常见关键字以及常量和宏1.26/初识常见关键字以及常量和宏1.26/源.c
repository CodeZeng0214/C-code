#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//初识关键字（后面会详细介绍）以下是在c语言中的应用，不一定在新的c语言是这样用到的

typedef unsigned int uint;
int main()
{
	//auto
	{
		int a = 10;//局部变量，自动创建，自动销毁auto省略了
	}//注意关键字不能作为赋值名
	
	 //register
	{
		register int num = 100;//把数据存储在寄存器中
		              //计算机中，数据可以存放在网盘，硬盘，内存，高速缓存（几十kb），寄存器（容量最小）
	}                                       //造价越高，速度越快，空间越小
	                                       //故将大量频繁被使用的数据，放在寄存器中，现在编译器一般会自动识别并存放

     //define和include不是关键字，是预处理指令

      // typedef类型重定义//结合第五行
	unsigned int num = 100; 
	uint  num = 100;//上下相同就是意义
	
	//关键字static 静态的 三个用法1.修饰局部变量2.修饰全局变量3.修饰函数
	//例子见笔记
	//其中test为自定义函数 vold为空/无函数
    //static修饰的全局变量只能在本源文件使用，在别的源文件即使声明也无法使用
	//全局变量在其他源文件内部可以使用是因为其自身具有外部链接属性，static使其变成了内部连接属性
	//同理当static修饰函数后也会发生上面的情况

	//#define定义常量和宏
	//define是一个预处理指令
	//1.写在函数前#define max 1000具有与int相同的作用
	//2.定义宏//写在函数之前 define ADD(X,Y) X+Y//作用为将两个数加起来为了避免运算顺序混乱，则加括号后面改为（（X+（Y））

	return 0;
}