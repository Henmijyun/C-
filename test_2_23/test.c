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



//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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



//杨辉三角
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <10; j++)
//		{
//			if (j == 0)  //赋值最左的竖行
//				arr[i][j] = 1;
//			if ((i == j) && (j != 0)) //赋值最右的斜行
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)  //赋值中间部分
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			if (arr[i][j] != 0)  //打印不为0的部分
//				printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//








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
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)  //生成
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//				*((*p + i) + j) = 1;
//			else if (i >= 2 && j >= 1)
//				*((*p + i) + j) = *((*p + i - 1) + j - 1) + *((*p + i - 1) + j);
//		}
//	}
//	for (i = 0; i < 10; i++) //打印
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//

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



//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//
//#include <stdio.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)//a到d的，ASCII值
//	{
//		//判断为真则1，假则0，和为3时，知道真凶
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer == 'c') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//
//


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//每个人都可能是1到5名
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) )
//							if (a * b * c * d * e == 120) //只出现过一次的时候
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)  //生成
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//				*((*p + i) + j) = 1;
//			else if (i >= 2 && j >= 1)
//				*((*p + i) + j) = *((*p + i - 1) + j - 1) + *((*p + i - 1) + j);
//		}
//	}
//	for (i = 0; i < 10; i++) //打印
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//int NumberOf1(int n)
//{
//	unsigned int m = n;
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//			count++;
//		m /= 2;
//	}
//	return count;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//void test(int(*p)[3])
//{
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//	}
//}
//int main()
//{
//	int arr[2][3] = { {1,2,3},{5,6,7} };
//	test(arr);
//	return 0;
//}
//




//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//void Spin(char* p, int k)
//{
//	assert(p);
//	int len = strlen(p); //元素个数
//	char* lift = p + k - 1; //左坐标：‘待旋转对象’的最右边
//	char* right = p + len - 1; //右坐标：数组的最右边
//	char tmp = 0;
//	while (k) //旋转k次
//	{
//		tmp = *lift;
//		*lift = *right;
//		*right = tmp;
//		lift--;
//		right--;
//		k--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	Spin(arr, k);
//	printf("%s", arr);
//	return 0;
//}



//杨氏矩阵
//有一个数字矩阵，
//矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//
//#include <stdio.h>
//#include <assert.h>
//
//#define ROW 3 //数组的行
//#define CRO 3 //数组的列
//
//int Find(int arr[ROW][CRO], int *const row, int* const cro,const int n)
//{
//	assert(row && cro && arr);
//	int x = 0;   //一行的最左
//	int y = CRO - 1;  //一行的最右
//	while (x < ROW && y >= 0)  //从上往下，纵列循环找
//	{
//		if (arr[x][y] < n)  //从上往下，一行行判断
//			x++;
//		else if (arr[x][y] > n) //从右往左，一列列判断
//			y--;
//		else
//		{
//			*row = x;
//			*cro = y;
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int arr[ROW][CRO] = { {1,2,3},{4,5,6},{7,8,9} };
//	int num = 0;
//	int x = 0; //左坐标
//	int y = 0; //右坐标
//	scanf("%d", &num);
//	int ret = Find(arr, &x, &y, num);
//	if (1 == ret)
//		printf("找到了，下标是（%d,%d）\n", x, y);
//	else
//		printf("没找到.\n");
//	return 0;
//}


//
//#include <stdio.h>
//void my_while(int arr[], int n, int* i)
//{
//    int a = 0;
//    while (n)
//    {
//        a = *i;
//        scanf("%d", &arr[a]);
//        *i += 1;
//        n--;
//    }
//}
//void Sequ(int arr[], int sz)
//{
//    //冒泡排序
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int flag = 1;//假设这一趟要排序的数据已经有序
//        //每一趟冒泡排序
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                flag = 0; //本趟排序的数据其实不完全有序
//            }
//        }
//        if (flag == 1)
//            break;//（优化）第一次已经有序的情况下，后面都是有序的
//    }
//}
//void print(int* p, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int n = 0; //1
//    int m = 0;  //2
//    int i = 0;
//    int arr[1000] = { 0 }; //3 5 2
//    scanf("%d %d", &n, &m);
//    my_while(arr, n, &i);
//    my_while(arr, m, &i);
//    Sequ(arr, n + m);
//    print(arr, n + m);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int arr[50] = { 0 };
//    int num = 0;
//    int del = 0;
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    scanf("%d", &num); //输入数量
//    for (i = 0; i < num; i++)
//    {
//        scanf("%d", &arr[i]); //输入
//    }
//    scanf("%d", &del); //删除数量
//    for (i = 0; i < num; i++)
//    {
//        if (arr[i] == del) //如果是需要删除的数
//        {
//            count++; //累计删除的个数
//            continue; //跳过本次循环
//        }
//        arr[j] = arr[i]; //非删除的数，赋值给arr[j]
//        j++; //从0开始，每次赋值后，++
//    }
//    for (i = 0; i < num - count; i++) //打印（总数-累计删除数）的数
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    int i = 0;
//    while (~scanf("%d", &num))//多组输入
//    {
//        int x = 0; //左坐标
//        int y = 0; //右坐标
//        y = num - 1;
//        for (i = 0; i < num; i++) //每一行
//        {
//            int j = 0;
//            for (j = 0; j < num; j++) //每一行对应的输出
//            {
//                if (j == x) //左坐标打印*
//                    printf("*");
//                else if (j == y) //右坐标打印*
//                    printf("*");
//                else
//                    printf(" "); //中间位置打印空格
//            }
//            x++; //坐标移动
//            y--; //同理
//            printf("\n"); //换行
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//void menu()
//{
//    printf("*********************\n");
//    printf("****1.add   2.sub****\n");
//    printf("****3.mul   4.div****\n");
//    printf("****    0.exit   ****\n");
//    printf("*********************\n");
//}
//void Calc(int(*pf)(int, int))  //用 函数指针 接收传过来的 函数
//{
//    int x = 0;
//    int y = 0;
//    printf("请输入两个操作数>:");
//    scanf("%d %d", &x, &y);
//    int ret = pf(x, y);      //回调函数
//    printf("结果为 %d\n", ret);
//}
//int main()
//{
//    //计算器 - 计算整型变量的加，减，乘，除
//    //a&b a^b a|b a<<b a>>b ....
//    int input = 0;
//    do
//    {
//        int ret = 0;
//        menu();
//        printf("请选择：>");
//        scanf("%d", &input);
//        switch (input) //用 回调函数 来实现下面代码，更简洁
//        {
//        case 1:
//            Calc(Add);
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("退出程序\n");
//            break;
//        default:
//            printf("选择错误，请重新选择！\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}





//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void revrs_arr (char* p, int sz)//冒泡排序恢复原样
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				char tmp = *(p + j);
//				*(p + j ) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//	}
//}
//
//int jud_rot(char* p1, char* p2) //判断检测是否相同
//{
//	int len1 = strlen(p1);
//	int len2 = strlen(p2);
//	int i = 0;
//	if (len1 != len2)
//		return 0;
//	//左旋转
//	for (i = 0; i < len1 - 1; i++)
//	{
//		int j = 0; //类似冒泡排序
//		for (j = 0; j < len1 - 1 - i; j++)//最终：DCBAA
//		{
//			char tmp = *(p1 + j);
//			*(p1 + j) = *(p1 + j + 1);
//			*(p1 + j + 1) = tmp;
//			if (strcmp(p1, p2) == 0)//相等时跳出
//			{
//				//复原
//				revrs_arr(p1, len1);
//				return 1;
//			}
//		}
//	}
//	//复原
//	revrs_arr(p1, len1);
//	//右旋转
//	for (i = 0; i < len1 - 1; i++)
//	{
//		int j = 0; //类似冒泡排序
//		for (j = len1 - 1 - i; j > 0; j--)//最终：DCBAA
//		{
//			char tmp = *(p1 + j);
//			*(p1 + j) = *(p1 + j - 1);
//			*(p1 + j - 1) = tmp;
//			if (strcmp(p1, p2) == 0) //相等时跳出
//			{
//				//复原
//				revrs_arr(p1, len1); 
//				return 1;
//			}
//		}
//	}
//	//复原
//	revrs_arr(p1, len1);
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[20] = { 0 };
//	while (~scanf("%s", arr2))
//	{
// 		int ret = jud_rot(arr1, arr2);
//		if (1 == ret)
//			printf("arr2是由arr1旋转所得\n");
//		else if (0 == ret)
//			printf("arr2不是由arr1旋转所得\n");
//	}
//	return 0;
//}





//模仿qsort的功能实现一个通用的冒泡排序
//
//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)//比较int类型的函数
//{
//	return *(int*)e1 - *(int*)e2; //返回相减的差
//}
//
//void my_swap(char* p1, char* p2, int width)//交换函数
//{
//	int i = 0;
//	for (i = 0; i < width; i++) //每个char类型进行交换
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//void print(int* base, int sz) //打印
//{
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(base + i));
//	}
//}
//void my_qsort(void* base, int sz, int width, 
//	         int (*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width,
//				  (char*)base + (j + 1) * width) > 0) //返回值 > 0 进行交换
//			{
//				//交换
//				my_swap((char*)base + j * width, 
//					   (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp_int); //交换
//	print(arr, sz); //打印
//	return 0;
//}



//练习使用库函数，qsort排序各种类型的数据

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
	double result;
};

int cmp_char(const void* e1, const void* e2)//比较char类型的函数
{
	// 返回两个字符串对比strcmp函数的返回值
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name); 
}

int cmp_int(const void* e1, const void* e2)//比较int类型的函数
{
	// 返回相减的差
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age; 
}

int cmp_double(const void* e1, const void* e2)//比较double类型的函数
{
	//返回相减的差
	return ((struct Stu*)e1)->result - ((struct Stu*)e2)->result;
}

void test_struct()
{
	struct Stu arr[3] = { {"wang", 22, 68.4},
				{"cao", 26, 60.0},{"zhang", 23, 77.5} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//char
	qsort(arr, sz, sizeof(arr[0]), cmp_char);
	printf("%s %s %s\n", arr[0].name, arr[1].name, arr[2].name);
	//int
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("%d %d %d\n", arr[0].age, arr[1].age, arr[2].age);
	//double
	qsort(arr, sz, sizeof(arr[0]), cmp_double);
	printf("%.2f %.2f %.2f\n", arr[0].result, arr[1].result, arr[2].result);
}

int main()
{
	test_struct();
	return 0;
} 