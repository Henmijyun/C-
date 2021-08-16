#define _CRT_SECURE_NO_WARNINGS 1

/*#include<stdio.h>
int main(void)
{
	printf("hello,world\n");
	return 0;
}*/

//#include<stdio.h>
/*int main()
{
	printf("こんにちは、世界\n");//日本語でもよろしいじゃない？
	return 0;

}*/
/*int main()
{
	char cjx = 'A';         //char--字符类型   后面的英文cjx只是代表数据某名称
	printf("%c\n",cjx);     // %c--打印字符格式的数据   \n--换行的意思
	 %f--打印浮点数字（打小数）
	   %p--以地址的形式打印
	   %x--打印十六进制数字
	   %o....
	//short int   //短整型

	int age = 20;           //整型
	printf("%d\n", age);    // %d--打印整型十进制数据

	//long 长整型
    long  nom = 11100;
	printf("%d\n", nom);
	
	float f = 5.2;     //单精度浮点数
	printf("%f\n", f);
	
	double d = 3.14;    //双精度浮点数
	printf("%lf\n", d);//打印双精度浮点数时，用%f可能会丢失精度，所以用%lf更为合适

	//sizeof是用来计算括号起来东西的大小
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));// 4/8 C语言标准sizeof(long) >或= sizeof(int) 都行,4=4 8>4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	return 0; 
}*/

//int main()
//{
//	short age = 20;//向内存申请2个字节=16比特位，用来存放20这个数值
//	float weight = 95.6f;//向内存申请4个字节，存放小数，数值后面加f是指定95.6这个数值是float类型
//	char ch = 'w';
//	return 0;
//}


//常量，变量（局部，全局）
/*int num1 = 20;//全局变量-定义在代码块{}之外的变量
int main()
{
	int num1 = 10;//局部变量-定义在代码块{}内部的变量 ;名字相同的话，把这行去掉就直接显示全局
	printf("%d\n", num1);//局部和全局变量的名字尽量不要相同，容易误会出bug；
	                 //当局部和全局变量名字相同时，局部优先显示。
	return 0;
}*/

//计算两个数值的和
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;	//C语言语法规定，变量要定义在当前代码块的最前面
//
//	/*输入数据-使用输入函数scanf   
//	vs2019中加(_s) 
//	scanf_s() 的功能虽然与scanf() 相同，但却比 scanf() 安全，
//	因为 scanf_s() 是针对“ scanf()在读取字符串时不检查边界，可能会造成内存泄露”这个问题设计的。
//	scanf_s()用于读取字符串时，必须提供一个数字以表明最多读取多少位字符，以防止溢出。*/
//
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);//%d前面的（sum=）会在调试中显示出来
//	return 0;
//}

//变量的作用域
//#include<stdio.h>
//int global = 2020;//全局变量的作用域是整个工程
//void test()
//{
//	printf("test()--%d\n", global);//这里不运行，只是声明
//}
//int main()
//{
//	{
//		int num = 0;  //局部变量的作用域是，局部变量坐在的{}里面才起作用，
//		printf("num=%d\n", num);//如果把printf("num=%d\n", num);移到变量int num = 0;的{}以外，不起作用
//	}
//	printf("global=%d\n", global);
//	test();//在main里调用了void函数，所以会执行
//
//	//声明 extern外部符号的(其他源文件里的全局变数)
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

////生命周期
////局部变量的生命周期是在{}里面的，而全局变量的生命周期则是整个程序的生命周期
//#include<stdio.h>
//int main()
//{
//	{//生命周期开始
//		int a = 10;
//		printf("a=%d\n", a);//ok   
//	}//生命周期结束
//	printf("a=%d\n", a);//error(错误)
//	return 0;
//}
