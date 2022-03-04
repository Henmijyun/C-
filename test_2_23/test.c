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


////打印菱形
////上面7行,下面6行,每行+2个* 
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	//打印上半个菱形
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
//	//打印下半个菱形
//	for (i = 0; i < num - 1; i++) //打印 num 行
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < i + 2; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < (2 * num - 3) - i * 2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//// 求出0~100000之间的所有“水仙花数”并输出。
////“水仙花数”是指 一个n位数，其各位数字的n次方之和，恰好等于该数本身。
////如：153 = 1^3+ 5^3+ 3^3 ,则 153 是一个 “水仙花数”。
//
//#include<math.h> //pow函数的头文件
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i <= 100000; i++)
//    {
//        //判断i是否为自幂数
//        //1.计算i的位数 - n
//        int n = 1;
//        int tmp = i;
//        while (tmp / 10)
//        {
//            n++;
//            tmp = tmp / 10;
//        }
//        //2.计算i的每一位的n次方之和
//        tmp = i;
//        int sum = 0;
//        while (tmp)
//        {
//            //pow函数是用来 求次方数
//            sum += pow(tmp % 10, n);    //pow(x, y); 如果计算2的3次方, x是2, y是3;
//            tmp = tmp / 10;
//        }
//        //判断
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//
//#include <stdio.h>
//int main()
//{
//	int cola = 0; //汽水1元1瓶
//	scanf("%d", &cola); //输入钱数,相当于输入第一次购买的汽水数
//	int empty = cola; //空瓶子,20元则20个空瓶
//	while (empty / 2)
//	{
//		cola += empty / 2; //每次换来的汽水累加
//		empty = empty / 2 + empty % 2; // %2是当瓶子为奇数时,多出一个空瓶
//	}
//	printf("%d\n", cola);
//	return 0;
//}



////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//
//#include <stdio.h>
//#include <string.h>
//
//void Seque(int arr[], int sz)
//{
//	int* left = arr;    //左坐标
//	int* right = &arr[sz - 1]; //右坐标
//	while (left < right) //循环
//	{
//		int* tmp = left; //tmp每次循环变回最左坐标
//		if (*tmp % 2 == 0) //判断是否为偶数
//		{
//			while (tmp < right) //把偶数放到最右
//			{
//				int a = *tmp;
//				*tmp = *(tmp + 1);
//				*(tmp + 1) = a;
//				tmp++;
//			}
//			right--; //右坐标向左移动一位
//		}
//		else
//		{
//			left++; //上面判断不是偶数,则左坐标右移一位
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Seque(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//char*(*p)[5] = &arr;
// 
// 



//
////模拟实现库函数strlen
//#include <stdio.h>
//#include <assert.h>
//
//unsigned int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p) //*p为\0时跳出循环
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
////	return 0;
////}
//
//
//
////模拟实现库函数strcpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "XXXXXXXXXXX";
//	char arr2[] = "abcdef";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//1100 1000
//0110 0100
//1 0010 1100


//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
#include <stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int(*p)[10] = &arr;
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)  //生成
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
				*((*p + i) + j) = 1;
			else if (i >= 2 && j >= 1)
				*((*p + i) + j) = *((*p + i - 1) + j - 1) + *((*p + i - 1) + j);
		}
	}
	for (i = 0; i < 10; i++) //打印
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", *((*p + i) + j));
		}
		printf("\n");
	}


	return 0;
}


//#include<stdio.h>
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}