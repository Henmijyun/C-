#define _CRT_SECURE_NO_WARNINGS 1


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int bottle = 0;//空瓶
//	int soda = 0;//汽水
//	
//	scanf("%d", &money);
//	bottle = money;
//	soda = money;
//	while (bottle >= 2)
//	{
//		bottle = bottle / 2 + (bottle % 2);
//		 1
//	}
//	printf("%d\n", soda);
//	return 0;
//}



//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = (i / 100) % 10;
//		d = (i / 1000) % 10;
//		e = (i / 10000) % 10;
//		if (i >= 100 && i < 1000 && i == (a * a * a) + (b * b * b) + (c * c * c))
//		{
//			printf("%d ", i);
//		}
//		else if (i >= 1000 && i < 10000 
//			&& i == (a * a * a * a) + (b * b * b * b) + (c * c * c * c) + (d * d * d * d)
//			)
//		{
//			printf("%d ", i);
//		}
//		else if (i >= 10000 && i < 100000 
//			&& i == (a * a * a * a * a) + (b * b * b * b * b) + (c * c * c * c * c) 
//			+ (d * d * d * d * d) + (e * e * e * e * e)
//			)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印菱形
//7行,每行+2个*

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++) //打印num行
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < num - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//for (i = 0; i < num - 1; i++) 
//	//{
//
//	//	int j = 0;
//	//	//打印空格
//	//	for (j = 1; j < i * 2 + 1; j++)
//	//	{
//	//		printf(" ");
//	//	}
//	//	//打印*
//	//	for (j = 0; j < 2*(num-1) - i; j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//
//
//	return 0;
//}

//
//
////逆序  abc 123.  ==>  123. abc (符号不变)
//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//    char tmp = 0;
//    while (left < right)
//    {
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    //输入进来了
//    gets(arr); //按空格不会结束输入    或者：scanf("%[^\n]",arr);这种写法遇到\n才会停止，可以读空格
//    //三步翻转法
//    //1.字符串整体翻转
//    int len = strlen(arr);//字符串长度(元素个数)，用于求字符串最后一位
//    reverse(arr, arr + len - 1);//逆序整个字符串
//    //printf("%s\n", arr);
//
//    //2.每个单词逆序
//    char* start = arr;
//    while (*start) //一直到\0为止
//    {
//        char* end = start; //end调整到下一个单词的左边
//        while (*end != ' ' && *end != '\0')
//        {
//            end++;  //单词最右边
//        }
//        reverse(start, end - 1);//逆序一个单词
//        if (*end == ' ')
//            start = end + 1;  //调整到下一个单词的左边
//        else
//            start = end;
//    }
//    printf("%s\n", arr);
//    return 0;
//}


////比较两个浮点数的大小
//#include <stdio.h>
//#include <math.h>
//#include <float.h>
//
//#define EPSION 0.0000001
//
//int main()
//{
//	//double x = 1.0;
//	//double y = 0.1;
//	//printf("%.50f\n", x);
//	//printf("%.50f\n", y);
//	//printf("%.50f\n", x - 0.9);//浮点数在存储的时候，会发生精度丢失
//	//printf("%.50f\n", y);
//
//	//if ((x - 0.9) == y) //err 这种比较方式是错误的
//	//	printf("you can see me!\n");
//	//else
//	//	printf("oops!\n");  //输出oops
//
//	//比较方法：
//	// 
//	//方法1：  用 自定义最小精度 来比较
//	//定义#define EPSION 0.0000001 用这个值进行精度范围比较，范围为：正负EPSION
//	//如果: EPSION > 两个值的差 > -EPSION ,则视为两个数相等
//	//if (((x - 0.9) - y) > -EPSION && ((x - 0.9) - y) < EPSION)
//	//	printf("you can see me!\n"); //输出you can see me!
//	//else
//	//	printf("oops!\n");
//
//	//方法2：  用 库函数给的最小精度 来比较
//	//fabs()函数:求绝对值 ; 头文件: math.h
//	//DBL_EPSILON 最小精度; 浮点类型的取值范围的 头文件: float.h
//	//if (fabs((x - 0.9) - y) < DBL_EPSILON)
//	//	printf("you can see me!\n");  //输出you can see me!
//	//else
//		//printf("oops!\n");
//	//比较两个浮点数的公式为:
//	//if (fabs((x - y) < DBL_EPSILON) 为真,(两个浮点数的差,小于最小精度值) 则两个浮点数是 相等的
//	//
//
//
//	double a1 = 0.000000000000000000001;
//	double a2 = 0.0000000000001;
//	double b = 0.0;
//	//fabs(a-b) < DBL_EPSILON   与0.0比较的话,相当于a-0.0
//	//fabs(a-0.0) < DBL_EPSILON  a-0.0 ,相当于 a本身
//	//则: fabs(a) < DBL_EPSILON
//	if (fabs(a1) < DBL_EPSILON)
//		printf("a1与0.0相等\n");
//	else
//		printf("a1与0.0不相等\n");
//	//
//	if (fabs(a2) < DBL_EPSILON)
//		printf("a2与0.0相等\n");
//	else
//		printf("a2与0.0不相等\n");
//
//	return 0;
//}


////比较浮点数与0.0的大小
//#include <stdio.h>
//#include <math.h>
//#include <float.h>
//
//int main()
//{
//	double a1 = 0.000000000000000000001;
//	double a2 = 0.0000000000001;
//	double b = 0.0;
//	//fabs(a-b) < DBL_EPSILON   与0.0比较的话,相当于a-0.0
//	//fabs(a-0.0) < DBL_EPSILON  a-0.0 ,相当于 a本身
//	//则: fabs(a) < DBL_EPSILON
//	if (fabs(a1) < DBL_EPSILON)
//		printf("a1与0.0相等\n");
//	else
//		printf("a1与0.0不相等\n");
//	//
//	if (fabs(a2) < DBL_EPSILON)
//		printf("a2与0.0相等\n");
//	else
//		printf("a2与0.0不相等\n");
//
//	return 0;
//}

//比较浮点数与0.0的大小
#include <stdio.h>
#include <math.h>
#include <float.h>

int main()
{
	double a1 = 0.000000000000000000001;
	double a2 = 0.0000000000001;
	double b = 0.0;
	//fabs(a-b) < DBL_EPSILON   与0.0比较的话,相当于a-0.0
	//fabs(a-0.0) < DBL_EPSILON  a-0.0 ,相当于 a本身
	//则: fabs(a) < DBL_EPSILON
	if (fabs(a1) < DBL_EPSILON)
		printf("a1与0.0相等\n");
	else
		printf("a1与0.0不相等\n");
	//
	if (fabs(a2) < DBL_EPSILON)
		printf("a2与0.0相等\n");
	else
		printf("a2与0.0不相等\n");

	return 0;
}