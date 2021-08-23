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
#include<stdio.h>
void test()
{
	int a = 1;
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	return 0;
}







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
