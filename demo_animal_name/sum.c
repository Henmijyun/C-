#define _CRT_SECURE_NO_WARNINGS 1
//int g_val = 2021;
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = % d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;//4个字节，32个bit位--->00000000000000000000000000000000(32个)
//	int b = ~a; // ~ 按（二进制）位取反 例：1010 -->0101 （1和0互相改变）     b是有符号的整型
//	//按位取反后变成32个 1，b=32个1
//	printf("%d\n", b);// -1    因为b是有符号的整型，所以第一位数是符号位，当它是1时变负号（-）
//	    //计算机存储负数时，用的是 补码，   但是使用时，打印的是这个数的原码。
//	
//	原码、反码、补码       
//	负数在内存中存储的时候，存储的是二进制的补码
//	 原码 -> 反码 -> 补码
//	原码-> 符号位不变，其他位置按位取反 --> 反码
//	反码-> 加一（+1）--> 补码
//	反过来就是：补码-1 再 按位取反 = 原码
//	所以       11111111111111111111111111111111
//		       11111111111111111111111111111110
//	符号位不变  10000000000000000000000000000001
//	符号位1=负号 0000000000000000000000000000001=1  所以得出b= -1
//	return 0;
//}
//#include<stdio.h>
//int d(int x, int y)
//{
//	if (x > 10)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 8;
//	int b = 50;
//	int c = 0;
//	c = d(a , b);
//	//scanf("%d%d", &a,&b);
//
//	printf("c=%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用(b变a)，再++(a再+1)
//	int b = ++a;//前置++，先++（a+1），再使用
//	//int b = a--;//a=9,b=10
//	//int b = --a;//a=9,b=9
//	printf("a=%d b=%d\n", a, b);//后置++：a=11,b=10； 前置++：a=11，b=11。
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//原来3.14是double类型的，（）里面填类型，强制类型转换，让3.14强制变int类型
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	// 假--0   真--非0
//	// && - 逻辑与
//	int a = 3;
//	int b = 5;
//	int c = a && b;//左边a为真，右边b也为真，所以c也为真（只要a或b其中一个为假（0），那么c也为假（0））
//	printf("c=%d\n", c);// c为真-->1   c为假-->0
//
//	// ||-逻辑或
//	int e = 0;
//	int f = 2;
//	int g = e || f;//只要e 或 f其中一个为真，则g为真。
//	printf("g=%d\n", g);//g=1   e和f都为假（0），g才为假
//	return 0;
//}
//#include<stdio.h>
////1. static 修饰局部变量
////使局部变量的生命周期变长
////2. static 修饰全局变量       另一个源文件里static int g_val = 2020;//全局变量
////改变了全局变量的作用域    让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法再使用了
////3. static 修饰函数
////也是改变了函数的作用域-不准确
////static 修饰函数改变了函数的链接属性
////外部链接属性-->内部链接属性
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);//2 3 4 5 6
//}
////声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);//error  另一个源文件里的全局变量static int g_val出了源文件就无法再使用
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);//error 另一个源文件里的Add函数被static了
//	return 0;
//}







//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];// [] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);// () - 函数调用操作符
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int a = 10; //exp1?exp2:exp3;    表达式1为真，结果为表达式2；表达式1为假，则为表达式3。
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//a>b为真，max得a；a>b为假，max则得b。
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max=%d\n", max);
//	return 0;
//}

//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏 - 带参数
//#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y) //宏，变成后面的公式   比自定义函数更简洁
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max=(a>b?a:b);  因为宏的定义，变成这个公式
//	printf("max=%d\n", max);
//	return 0;
//}
//// 
//#include<stdio.h>
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址  int* - 指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;// * - 解引用操作符     原本*p这个地址是数值是10，这里的=20是把*p地址的数改成20
//	printf("%d\n", a);//则int a也变20
//	//有一种变量是用来存放地址的 - 指针变量
//	//printf("%p\n", &a);
//
//	return 0;
//}

//指针的大小
//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//根据类型不同，指针随之改变
//	printf("%d\n", sizeof(pc));//4 个字节（32位平台）  如果是8个字节，则64位平台
//	//*pc = 'a';
//	//printf("%c\n", ch);
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;
//}

//创建一个结构体类型
#include<stdio.h>
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};                                 //;分号不可确少
#include<string.h>
int main()
{
	//利用结构体类型 - 创建一个改类型的变量
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++");//strcpy - string copy - 字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 15;                         //可以直接修改
	//printf("修改后的价格：%d元\n", b1.price);
	//struct Book* pb = &b1;//这里定义了一个指针类型struct Book 名叫 pb
	////利用pb打印出我的书名和价格
	////printf("%s\n", (*pb).name);//方法1   .结构体变量.成员
	////printf("%d\n", (*pb).price);//(*pb)的（）是为了系统不要误会*pb.name是一个指针变量
	//printf("%s\n", pb->name);//方法2   ->结构体指针->成员
	//printf("%d\n", pb->price);
	return 0;
}