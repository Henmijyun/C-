#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//#include<stdio.h>
//void print(int n)      //以输入:123 为例：
//{
//	if (n > 9)         //第一次123>9进去,123/10=12,第二次12>9再进去,12/10=1,第三次进去1!>9,跳出递归
//	{
//		print(n / 10); //第三次时n=1跳出,1%10=1,打印1,返回上一层12%10=2,打印2,再返回上一层123%10=3,打印3
//	}
//	printf("%d ", n % 10);//所以得出的结果为1 2 3
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
////int my_strlen(char* str)   //这个自定义函数可以实现求字符串长度,但创建了临时变量,而且不是递归
////{
////	int count = 0;
////	while (*str != '\0') //因为从首元素开始,b不是\0,就记录一次,bit共3次,count从0加到了3,再返回count的值
////	{
////		count++;
////		str++;     //str++每+一次,往后走一个单位 b -> i -> t -> \0
////	}
////	return count;
////}
//int my_strlen(char* str)  //递归的方法
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////把大事化小
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);  //求字符串长度的 库函数
//	//printf("%d\n", len);
//	//模拟实现一个求字符串长度的 自定义函数
//	int len = my_strlen(arr); //arr是数组,数组传参,传过去的不是整个数组,而是第一个元素的地址
//	printf("len=%d\n", len);  
//	return 0;
//}
//
//#include<stdio.h>
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;        //例如5，5>1,进去5*Fac2,进去5-1=4，4>1,再进去4*Fac2，如此类推5-4-3-2-1，
//	else
//		return n * Fac2(n - 1);  //当1=1返回1，跳出递归，不断返回值,使1*2*3*4*5，最好返回计算结果
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d", &n);
//
//	ret1 = Fac1(n);//循环的方式
//	printf("%d\n", ret1);
//
//	ret2 = Fac2(n);//递归的方式
//	printf("%d\n", ret2);
//	return 0;
//}



////斐波那契数列：1 1 2 3 5 8 13 21 34 55... 前面两个数之和等于第三个数。
////int count = 0;
////int Fid(int n)
////{
////	if (n == 3)//测试第三个斐波那契数的计算次数
////	{
////		count++;
////	}
////	if (n <= 2)
////		return 1;
////	else
////		return Fid(n - 1) + Fid(n - 2);//这时用递归就不是便利的方法了
////		
////}
//int Fid(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	//TDD--测试驱动开发
//	ret = Fid(n);
//	printf("ret = %d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}
//
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

int Fan()
{
	printf("############こ###########\n");
	printf("############ん###########\n");
	printf("############ち###########\n");
	printf("############は###########\n");
	printf("####1.開始　　2.終わり###\n\n");
	printf("番号1と2を選んでください\n");
}
#include<stdio.h>
int main()
{
	int a = 0;
	int a1 = 0;
	Fan();
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("ゲーム開始\n\n好きな性別を選んでください:\n##1.男　　2.女##\n");
		while (a ==1 )
		{
			if (a1 == 1)
			{
				printf("#111111111\n");
				break;
			}
			else if (a1 == 2)
			{
				printf("##122222\n");
				break;
			}
			else
			{
				printf("性別もう一回入力してください。\n##1.男　　2.女##\n");
				goto again;

			}

		}

		break;
	case 2:
		printf("終わり");
		break;
	default:
		printf("誤りが発生した、もう一回入力してください。");
		break;

	}

	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 30;
//	int c = a - b;
//	int d = a % b;
//	printf("aの値は%dです。\nbの値は%dです。\ncの値は%dです。\ndの値は%dです。\n", a, b, c, d);
//	return 0;
//}


123454