#define _CRT_SECURE_NO_WARNINGS 1
//#include "XXXX.h"
//#pragma comment(lib,"XXXX.lib") //导入静态库

//字面常量  100; 'c';
//const修饰的常变量
//#define 定义的标识符常量
//枚举常量   一种自定义类型的方法

//#include<stdio.h>
//enum Sex  
//{
//	MALE,  //0
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//枚举取值只能取设定好的值:只能是MALE,FEMALE,SECRET其中的值
//	printf("\a\a\a\a\a\a");
//	return 0;
//}
//
//#include<stdio.h>
//enum Set
//{
//    Name,
//    Age,
//    Gender
//}s;
//int main(void)
//{
//  
//    int i = 0;
//    printf("%d\n", Name);
// 
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("Name    Age     Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18      man\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = -a;
//	int c = +b;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
////创建结构体
//struct Sut
//{
//    float a[5];
//    float b[5];
//    float c[5];
//    float d[5];
//    float e[5];
//}s[5] = { 0 };//创建结构体变量
//
//int main()
//{
//
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        //输入
//        scanf("%f %f %f %f %f", (s[i]).a, (s[i]).b, (s[i]).c, (s[i]).d, (s[i]).e);
//        printf("\n");
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%.1f %.1f %.1f %.1f %.1f ", (s[i]).a, (s[i]).b, (s[i]).c, (s[i]).d, (s[i]).e);
//        printf("%.1f\n", ((s[i]).a) + ((s[i]).b) + ((s[i]).c) + ((s[i]).d) + ((s[i]).e));
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    double Sut[5][5] = { 0 };
//    int i = 0;
//    int j = 0;
//    double add = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%lf %lf %lf %lf %lf", Sut[i][0], Sut[i][1], Sut[i][2], Sut[i][3], Sut[i][4]);
//   
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", Sut[i][j]);
//            add += Sut[i][j];
//        }
//        printf("%.1f\n", add);
//        add = 0;
//    }
//
//    return 0;
//}


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float add = 0;
//
//	while (i < 100)   //1 3 5 7 9  i最大99
//	{
//		add += ((1.0 / i) - (1.0 / (i + 1)));
//		i += 2; 
//	}
//	printf("%f\n", add);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int add = 110;
//
//	printf("%d/100\n", add);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("***************\n");
//	printf("*****1.play****\n");
//	printf("*****0.exit****\n");
//	printf("***************\n");
//}
//
//void game()
//{
//	//1.生成一个随机数
//	int guess = 0;
//	int ret = rand()%100+1;
//	//2.猜数字
//	printf("猜数字：》");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择》：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，重新输入");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x < y)
//	{
//		tmp = y;
//		y = x;
//		x = tmp;
//	}
//	if (x < z)
//	{
//		tmp = z;
//		z = x;
//		x = tmp;
//	}
//	if (y < z)
//	{
//		tmp = z;
//		z = y;
//		y = tmp;
//	}
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d\n", printf("%d  \n", printf("%d\n", 669))));
//	return 0;
//}

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//
//#include <stdio.h>
//int PriNum(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == PriNum(i))
//			printf("素数\n");
//		else
//			printf("不是素数\n");
//	}
//	return 0;
//}


//实现函数判断year是不是润年。
//#include <stdio.h>
//int BisTile(int x)
//{
//	if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == BisTile(i))
//			printf("%d ",i);
//	}
//
//	return 0;
//}

//递归方式实现打印一个整数的每一位
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);  //递归入口
//	printf("%d ", n % 10);  //递归出口，打印
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include <stdio.h>
//int FacRial(int n)//递归
//{
//	if (n == 1) //n=1 时停下来
//		return 1;
//	return n * FacRial(n - 1); //n-1 返回值 *n
//}
//
//int FacRial2(int n)//不用递归
//{
//	int i = 0;
//	int k = 1;
//	for (i = 1; i <= n; i++)
//	{
//		k = k * i;  //1*2*3*4..*n
//	}
//	return k;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = FacRial(num);//递归
//	int ret2 = FacRial2(num);//不用递归
//	printf("递归:%d\n不用递归:%d\n", ret, ret2);
//	return 0;
//}

//递归和非递归分别实现strlen
//#include <stdio.h>
//int MyStrlen(char* str)//递归
//{
//	if (*str != '\0')
//		return 1 + MyStrlen(str+1);
//	return 0;
//}
//
//int MyStrlen2(char* str2)//非递归
//{
//	int count = 0;
//	while (*str2 != '\0')
//	{
//		count++;
//		str2++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("递归:%d\n非递归:%d\n", MyStrlen(arr), MyStrlen2(arr));
//	return 0;
//}


//编写一个函数 reverse_string(char* string)（递归实现）
//逆序之后数组的内容变成：fedcba
//#include <stdio.h>
//void reverse_string(char* string)
//{
//	char tmp = *string;
//	if (*(string) != '\0')
//	{
//		
//		reverse_string(string + 1);
//	}
//	*(string - 1)= tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//#include <stdio.h>
//unsigned int DigitSum(unsigned int n)
//{
//	int ret = 0;
//	if (n > 9)
//		ret = DigitSum(n / 10);
//	return (n % 10) + ret; //每次返回上一次相加的和
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。
//#include <stdio.h>
//int Squa(int x, int y) //x的y次方
//{
//	int i =1;
//	if (y > 1)
//		i = Squa(x, y - 1);
//	return x * i;   //每次返回 x与i 相乘的结果
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", Squa(n, k));
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//例如： 1 1 2 3 5 8 13 21 
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//#include <stdio.h>
//int Fib1(int n1)//递归
//{
//    if (n1 > 2)
//        return Fib1(n1 - 2) + Fib1(n1 - 1);
//	return 1;
//}
//
//int Fib2(int n2)//非递归
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n2 > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n2--;
//    }
//    return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("递归:%d\n非递归:%d\n", Fib1(n), Fib2(n));
//	return 0;
//}

//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
//#include <stdio.h>
//void reverse_string(char* string)
//{
//	int i = 0;
//	char tmp = *string;
//	if (*(string + 1) != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	*(string - 1)= tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




////数组
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	arr[0] = 99;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}



//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#include <stdio.h>
//void init(int arr[],int se) //变000
//{
//	int i = 0;
//	for (i = 0; i < se; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int se) //打印
//{
//	int i = 0;
//	for (i = 0; i < se; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* left, int* right) //逆转
//{
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[3] = { 10,2,3 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int* a = &arr[0];
//	int* b = &arr[se-1];
//	print(arr, se); //打印 10 2 3
//	reverse(a, b);  //逆转
//	print(arr, se);//打印 3 2 10
//	init(arr, se);  //变0
//	print(arr, se);//打印 0 0 0
//	return 0;
//}
//



////test.c 测试游戏的逻辑
//#include "game.h"
//
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//}
//
//void game()
//{
//	char ret = 0; //判断用
//
//	//存放下棋的数据
//	char board[ROW][COL] = { 0 };
//
//	//初始化棋盘为全空格
//	InitBoard(board, ROW, COL);
//
//	//打印棋盘
//	DisplayBoard(board, ROW, COL);
//
//	while (1)
//	{
//		//玩家下棋
//		player_move(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//
//		//判断输赢  玩家赢'*'  电脑赢'#'  平局'Q'  继续'C'
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//			break;
//
//
//		//电脑下棋
//		Computer_move(board, ROW, COL); //随机下棋
//		DisplayBoard(board, ROW, COL);
//		
//		//判断输赢
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//		printf("玩家赢\n");
//	else if (ret == '#')
//		printf("电脑赢\n");
//	else
//		printf("平局\n");
//
//}
//
//void test() 
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		srand((unsigned int)time(NULL));
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//游戏实现
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//			
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//









#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
}

void game()
{
	//扫雷游戏的实现
	char mine[ROWS][COLS] = { 0 }; //'0'  布置雷
	char show[ROWS][COLS] = { 0 }; //'*'  排查雷

	//初始化棋盘
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//打印棋盘
	//show_board(mine, ROW, COL); //看见雷
	//show_board(show, ROW, COL); //隐藏雷

	//布置雷
	set_mine(mine, ROW, COL);
	show_board(show, ROW, COL);

	//排查雷
	fine_mine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请输入:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误,请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}













//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
//#include <stdio.h>
//#include <string.h>
//void reverse_string_no_d(char* str)//不用递归
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = (str + len - 1);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string_d(char* str)//递归
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);    //最左变最右的字符
//
//	*(str + len - 1) = '\0';    //最右字符变'\0' ,方便下一次字符串计算长度
//	if (strlen(str + 1) >= 2)    //字符有两个以上才继续递归
//	{
//		reverse_string_d(str + 1); //递归
//	}
//
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string_no_d(arr);
//	reverse_string_d(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现
//#include <stdio.h>
//
//double Power(int n, int k)
//{
//	if (k > 0)
//		return n * Power(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Power(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//
//
