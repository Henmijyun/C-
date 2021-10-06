#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int Add(int x, int y)  //因为return z中的z是int整型，所以它返回值的Add前面也要加int。
//	{
//		int z = 0;
//		z = x + y;
//		return z;
//	}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//} 吧


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";  //隐藏的/0也会被拷贝
//	char arr2[] = "#######";
//	char arr3[20];
//	strcpy(arr2, arr1);    //strcpy()函数 后面的值 拷贝到 前面的值 里:arr1-->arr2
//	strcpy(arr3, "11111111111");
//	printf("%s\n%s\n", arr2,arr3);
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
//	//memset
//	//memory - 内存  set - 设置
//	memset(arr3, '0', 5);   //memset()函数修改内存中的信息,memset( 修改的目标, 修改的内容, 修改的数量)
//	printf("%s\n", arr3);
//	return 0;
//}

//#include<stdio.h>
//Swap1(int x, int y) //传值调用 只是取外面的值来用,不影响外面的值
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//Swap2(int* pa, int* pb)  //传址调用 取外面地址,从而影响外面的值
//{
//	int tmp = 0;
//	tmp = *pa;      //解地址
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b); //打印改变前
//
//	Swap1(a, b);
//	//调用Swap1函数 - 传值调用
//	printf("a=%d b=%d\n", a, b);  
//
//	Swap2(&a, &b);
//	//调用Swap1函数 - 传址调用
//
//	printf("a=%d b=%d",a,b);  //打印改变后
//	return 0;
//}

//是素数返回1,不是素数返回0

//int is_prime(int n)
//{
//	//2 ->n-1
//	int a = 0;
//	for (a = 2; a <=sqrt(n); a++)
//	{
//		if (n % a == 0)
//			return 0;
//	}
//	return 1;
//}
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	//打印100~200之间的素数
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数(只能被1和自身整除)
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
//		return 1;
//	else 
//		return 0;   //不要在函数里面进行打印
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d ", year);   //在函数外部打印
//	}
//	return 0;
//}


//            本质上这里arr是一个指针
//int binary_search(int arr[], int k,int sz)
//{
//	//算法实现
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;  //中间元素下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//#include<stdio.h>
//int main()
//{
//	//二分查找:在一个有序数组中查找具体的某个数
//	//如果找到了返回,这个数的下标,找不到的返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算元素个数
//	//              传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了,下标是:%d\n",ret);
//	}
//	return 0;
//}

////改变函数外面的值，用传址调用的方式
//void Add(int* p)
//{
//	(*p)++;
//}
//#include<stdio.h>
//int main()  //调用函数，使得num每次增加1
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//	Add(&num);
//	printf("num=%d\n", num);//2
//	Add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}

//#include<stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int len = 0;
//	//1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2
//	printf("%d", printf("%d",printf("%d",43))); //43 2 1  先打印43，然后打印43的返回值，printf（）的返回值是它打印的值的个数-->2 ，如此类推最后打印1
//	return 0;
//}

//
// #include<stdio.h>
//
//int main()
//
//{
//	
//		int len = 0;
//	
//		//1
//		
//		len = strlen("abc");
//	
//		printf("%d\n", len);
//	
//		//2
//	
//		printf("%d\n", strlen("abc"));
//	
//		return 0;
//	
//}
 
//定义在后面时,前面要加上:函数的声明
//#include<stdio.h>
//int Add(int, int);  //句尾加;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////下面属于：函数的定义
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
////把函数写在int main()前面就可以不用声明

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