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

//int Fan()
//{
//	printf("############こ###########\n");
//	printf("############ん###########\n");
//	printf("############ち###########\n");
//	printf("############は###########\n");
//	printf("####1.開始　　2.終わり###\n\n");
//	printf("番号1と2を選んでください\n");
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int a1 = 0;
//	Fan();
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("ゲーム開始\n\n好きな性別を選んでください:\n##1.男　　2.女##\n");
//		while (a ==1 )
//		{
//			if (a1 == 1)
//			{
//				printf("#111111111\n");
//				break;
//			}
//			else if (a1 == 2)
//			{
//				printf("##122222\n");
//				break;
//			}
//			else
//			{
//				printf("性別もう一回入力してください。\n##1.男　　2.女##\n");
//				goto again;
//
//			}
//
//		}
//
//		break;
//	case 2:
//		printf("終わり");
//		break;
//	default:
//		printf("誤りが発生した、もう一回入力してください。");
//		break;
//
//	}
//
//	return 0;
//}

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


////汉诺塔问题
//#include<stdio.h>
//void move(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		printf("圆盘编号%d：从%c移动到%c。\n", n, x, z);
//	}
//	else
//	{
//		move(n - 1, x, z, y);
//		printf("圆盘编号%d：从%c移动到%c。\n", n, x, z);
//		move(n - 1, y, x, z);
//	}
//}
//
//int main()
//{
//	char ch1 = 'a';//abc三个柱子
//	char ch2 = 'b';
//	char ch3 = 'c';
//	int n = 0;    //n是盘子数
//	printf("请输入盘子个数:\n");
//	scanf("%d", &n);
//	move(n, ch1, ch2, ch3);
//
//	return 0;
//}

////青蛙跳台阶问题
//#include<stdio.h>
//int frog(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    if (n == 2)
//    {
//        return 2;
//    }
//    return frog(n - 1) + frog(n - 2);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ways = frog(n);
//    printf("%d\n", ways);
//    return 0;
//}
//
////数组
//#include<stdio.h>
//int main()
//{
//	int a = 25;
//	int b = 3;
//	float c;
//	//printf("一つ目の数字を入力して下さい\n");
//	//scanf("%d", &a);
//
//	//printf("二つ目の数字を入力して下さい\n");
//	//scanf("%d", &b);
//
//	c = (float)a / b;//这种形式不省略，显示小数点后面的数
//	printf("%d/%d=%.3f\n", a, b, c);
//
//	return 0;
//}

//#include<stdio.h>
//main()
//{
//	//创建一个数组-存放整型-10个;   []里面的数量必须是常数，不能是变数
//	int arr[10] = { 1,2,3 };  //不完全初始化,剩下的元素默认初始化为0
//	char arr2[5] = { 'a',98,'c'};  //98这里是b，因为b的ASCII值为98；
//	char arr3[5] = "abc";  //ok，"abc\000"
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//计算 arr4所占空间的大小-->包括\0共7个元素,char 7*1=结果为 7
//
//	printf("%d\n", strlen(arr4));//strlen 求字符串的长度;[a b c d e f \0];只计算\0之前的字符个数,结果为 6
//
//	//1. strlen 和 sizeof没有什么关联
//	//2. strlen 是求字符串长度的-只能针对字符串求长度 - 库函数 - 使用需要引用头文件
//	//3. sizeof 计算变量、数组、类型的大小-单位是字节 - 操作符
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";           //a b c \0
//	char arr2[] = { 'a','b','c' }; //a b c 
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//arr2后面没有\0，所以结果是随机值
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0] ,下标从0开始
//	//printf("%c\n", arr[3]);//打印单个字符d，[]里面填要打印的字符下标,d的下标为3
//	//如果打印整个字符串,建议使用循环函数
//	int i = 0;
//	//for (i = 0; i < (int)strlen(arr); i++)  //这里把strlen函数嵌入for函数中,求出arr[]的长度后带入公式
//	//{                                 //strlen的默认返回值是一个无符号整型值,前面(int)强制类型转换,使它变成有符号整型值
//	//	printf("%c ", arr[i]);
//	//}
//	int len = strlen(arr);  //建议用这种写法,不把strlen放入for
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);//总大小 - 除于 - 一个元素的大小 - 等于 - 元素个数
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr2[a]);//数组用下标来打印,下标从0开始,建议用循环函数来打印
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//二维数组的'行'可以被忽略，但'列'不能被忽略
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} }; //这里是:三行四列 的数组:第一个数表示横向的行数,第二个数表示竖向的列数.
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h> 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d\n", arr[i]);//当i等于10的时候，越界访问了     
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);//1
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名) --> 这时,数组名表示整个数组,sizeof(数组名)计算的是整个数组的大小,单位是字节
//	//2. &数组名,这时数组名代表整个数组,&数组名,取出的是整个数组的地址
//
//	printf("%p\n", arr); //数组首元素地址
//	printf("%p\n", arr+1);//+4个字节,数组第二个地址
//
//	printf("%p\n", &arr[0]);//数组首元素地址 (同上)
//	printf("%p\n", &arr[0]+1);//+4个字节,数组第二个地址 (同上)
//
//	printf("%p\n", &arr);//虽然看起来跟前面一样,但是这个是:整个数组的地址
//	printf("%p\n", &arr+1);//+28个字节,因为数组有7个数4*7=28,所以+1跳到整个数组后面的地址
//	return 0;
//}

int main()
{
	toulandeyitian();
	return 0;
}