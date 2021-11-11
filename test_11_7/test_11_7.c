#define _CRT_SECURE_NO_WARNINGS 1
//指针
//int main()
//{
//	int a = 10; 
//	int* p = &a;//p为指针变量，存放地址的变量-->指针变量, 指针就是地址
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));//都是4个字节,那为什么要区分类型呢???
//	//printf("%d\n", sizeof(int*)); 
//	//printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344; //4个字节44 33 22 11
//	int* pa = &a;
//	//*pa = 0;    //把4个字节改为00; 00 00 00 00 (这里就是区别)
//
//	char* pc = &a;
//	//*pc = 0;     //把1个字节改为00;  00 33 22 11 (这里就是区别)
//	printf("%p\n", pa);
//	printf("%p\n", pc);//%p打印地址,发现虽然有警告,但是没有报错,可以用.那为什么要区分类型呢???
//
//
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);      //003FF854
//	printf("%p\n", pa + 1);  //003FF858  加1跳了4个字节
//
//	printf("%p\n", pc);       //003FF854
//	printf("%p\n", pc + 1);  //003FF855  加1跳了1个字节
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名 - 首元素的地址  int*可以改掉10个整型元素
//
//	//char* p = arr; //而char*只能改10个字节
//
//	//把数组中每一个元素都该成 1
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1; //括号让p先+i，再*解引用得到地址,再给地址赋值;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;//局部变量不初始化,默认是随机值;
//	int* p;//局部的指针变量,就被初始化为随机值;
//	*p = 20;
//	//电脑里面随机找的一个空间p,这是非法的,是野指针;
//	//随机空间改20,后果不堪设想..
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p++) = i; //arr只有10个元素,这里循环11次,超出了数组范围;
//	}
//	//超出数组范围的空间位置也会被赋值,这也是野指针;
//	return 0;
//}
//
//int* test() 
//{
//	int a = 10; //a在函数中是临时创建的,函数结束之后a就会消失,从而释放a的空间
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;  //这里*解引用的地址,是已经消失a之后,被释放空间的地址,是第三方,未知的地址;
//	return 0;
//}
////空间被释放后,还继续指向的地址,也是野指针;
//
//#include<stdio.h>
//int main()
//{
//	//当前不知道p应该初始化什么地址的时候,直接初始化为NULL
//	int* p = NULL; //NULL是库函数<stdio.h>里面的,是空白的意思.
//
//	//c语言本身是不会检查数据的越界行为的,所以自己要注意
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p = NULL;//这里把指针设置为空指针,空指针是没有分配给我们用户的,不能直接使用它的;
//	//*p = 10;  //这里的赋值是无效的赋值;
//
//	//判断指针的有效性
//	if (p != NULL)
//	{
//		*p = 10;//利用判断语句,就可以确保指针的有效性
//	}
//	return 0;
//}
////当指针不知道指向哪里的时候  -->置NULL
////当指向的空间被释放掉之后   -->置NULL
////当它指向有效空间的时候   -->给它有效的地址,或者知道它是有意义的
//// 
//// 然后每次使用指针变量的时候 --> 都进行判断有效性  --->这样就不容易出错

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;//未初始化
//	//下面:初始化: 为数组第1个位置, 判断: 指针的关系运算(比较大小), 调整: for里面3个都可以被省略
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//先解引用, 再++移动(指针+整数), 给每个元素赋值为0
//	}
//	return 0;
//}
////随着下标的增长,地址会由低到高发生变化, 低(地址) ------> 高(地址)

//#include<stdio.h>
//int main()
//{
//	//打印数组
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;  //指向第1个元素位置
//	int* pend = arr + 9; //指向第10个元素位置 (指针+-整数)
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;       //(指针+-整数)
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	指针和指针相减的前提:
//	 两个指针要指向同一块空间;
//	printf("%d\n", &arr[9] - &c[0]);//err;这里两个类型是不同的,不能进行指针相减
//
//	printf("%d\n", &arr[9] - &arr[0]); //结果为9 （指针-指针-->结果为两个指针之间的元素个数）
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d%d", &i,&j);
//
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d\n",arr[i][j]);
//
//		}
//	}
//	
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
////方法有3种:
//// 
////计数器
////int my_strlen(char* str) //strlen()原理是从 首元素 开始找,直到找到 \0 才结束;
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
////递归
////int my_strlen(char* str)
////{
////
////	if (*str != '\0')
////		return 1 + my_strlen(str+1);//这里不能写++,要写+1 ;最后一次返回1+0,第二次返回1+1,第三次返回1+2;
////	else
////		return 0;
////}
//
////指针-指针
//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	//strlen(); - 求字符串长度
//	
//	int len = my_strlen("abc");//这里字符串传给strlen()的时候,传的是首元素a的地址;
//	printf("%d\n", len);
//	return 0;
//}

//for (vp = &values[N_values]; vp > &values[0];)
//{
//	*--vp = 0;
//}
//
//for (vp = &values[N_values-1]; vp >= &values[0];vp--)
//{
//	*vp = 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名 是否为数组首元素的地址呢?
//	printf("%p\n", &arr[0]);//第一个元素的地址
//	//结果一样,证明数组的地址 (数组名) ,就是首元素的地址
//	//或者说是首元素的首个字节的地址
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i); //结果地址都一样,证明了 p+i 的地址就是 arr[i] 的地址
//		//也就是说: 
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++) //利用这个原理进行打印
//	{
//		printf("%d ", *(p + i));//结果为0123456789
//	}
//	return 0;
//}

int main()
{
	int arr[10]
}