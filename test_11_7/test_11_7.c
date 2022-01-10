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

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //数组名
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]); // p[2] --> *(p+2)
//
//	// []是一个操作符  2和arr是两个操作数
//	// a+b
//	// b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]); //编译器在编译的时候: arr[2] --> *(arr+2) --> *(2+arr) --> 2[arr]
//	 
//	// arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	// 2[arr] <==> *(2+arr) 
//	return 0;
//}
////上面4个打印出来的结果都为3; 因为它们的底层性质都一样: *(arr+2)

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量,是一级指针
//
//	int** ppa = &pa;//pa也是个变量,&pa取出pa在内存中的起始地址
//	//ppa就是一个二级指针变量
//	// *ppa == pa
//	// *pa == a
//	//  所以 **ppa == a
//
//	int*** pppa = &ppa;
//	//同理, pppa是三级指针
//	//同理可以有4,5,6..级指针,但是除了1,2级以外的,都很少用到
//	return 0;
//}


//指针数组 - 是个数组

//int main()
//{
//	int arr[10];//整型数组 - 存放整型的数组就是整型数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5]; //整型指针的数组
//	char* parr[5]; //parr是一个数组,有5个元素,每个元素是一个字符指针
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu  //创建类型
//{
//	//成员变量
//	struct B sb;//结构体的成员可以是另一个结构体
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//} s1,s2; //s1和s2也是结构体变量
////s1和s2是全局变量
//
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30,202005034 };//创建对象
//	//这里的s是局部变量
//
//	return 0;
//}

//
//#include<stdio.h>
//struct Point
//{
//	int x;
//	int y;
//}p1;//创建对象
//
//struct Node
//{
//	int data;
//	struct Point P;
//	struct Node* next;//可以是指针
//}n1 = { 10,{4,5},NULL };//创建n1，并给n1初始化（全局变量）
//
//int main()
//{
//	struct Point p2;//创建对象
//	struct Point p3 = { 5,4 };//初始化（局部变量）
//	return 0;
//}

//#include<stdio.h>
//struct B
//{
//	char a;
//	short b;
//	double c;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s = { {'D',55,3.14},"w",20,"2020m1234" };
//	printf("%c\n", s.sb.a);
//	printf("%d\n", s.sb.b);
//	printf("%s\n", s.name);
//	printf("%.2f\n", s.sb.c);
//	struct Stu* ps = &s;  //结构体指针
//	printf("%c\n", (*ps).sb.a); //结构体解引用
//	printf("%c\n", ps->sb.a);  //ps->sb == (*ps).sb  指针
//	return 0;
//}


//#include<stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30,"2020m146" };
//	//写一个函数打印s的内容
//	
//	print1(s);   //传值调用    s有多大，t就要创建多大的空间来接收s，而且在t里面不可以修变s的数据  （浪费时间和空间，不够好）
//	print2(&s);   //传址调用    只传了一个指针大小的空间，4或者8个字节，可以在ps里面修改s的数据  （效率更高，更好）
//	//把结构体的参数传给函数的两种写法
//	//传值-慢，费空间，不能改值，所以安全
//	//传址-快，省空间，可以改值，所以可能不够安全  （但是这种是建议用的）
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()              
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b); //大部分情况下，都是先传b再传a，从右 往 左传； 因为传参的时候会临时创建空间，用于传参，所以也属于压栈操作；
//	return 0;
//};
//每一个函数调用都会在内存的栈区上开辟一块空间！
//内存中：栈区、堆区、静态区
//main（）在栈区中申请一块空间：
//    依次放入a，b，c（从上往下，串葫芦）
//    向Add()传参时，再放入b和a的临时空间，也是从上往下（压栈）
//        Add（）再占用一片空间
//           在Add()中创建z，定义int x,int y (x和y不在Add()占用的空间里)
//           Add()在用x和y时，是往前面访问传参时创建的临时空间，
//           z的值改变
//    返回z的值到c中
//    清空Add()和传参时创建的临时空间a，b  （从上往下清空，串葫芦）
// 
//因为传参时创建的临时b，a空间压着之前的a，b，c空间，所以这就叫压栈。
//
//函数栈帧的创建和销毁



//模拟实现strcpy
//strcpy - 字符串拷贝
//#include<string.h>
//#include<stdio.h>

//版本1
//void my_strcpy(char* dest,char* src) //dest目的地，src源头 
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	//可以用，但写得不好
//}
//版本2
//void my_strcpy(char* dest, char* src) //dest目的地，src源头 
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++; //后置++，先使用再++，所以这里先*解引用，再赋值，最后++
//	}
//	*dest = *src;
//}
//版本3
//#include<assert.h>
//void my_strcpy(char* dest, const char* src) //dest目的地，src源头 
//{
//	assert(src != NULL);//断言   如果arr2为空指针，则会报错，并提示assert的错误在哪一行
//	assert(dest != NULL);//很实用！不仅指针可以用，其他都可以用
//
//	while (*dest++ = *src++) 
//	{
//		; //既拷贝了'\0'，又使得循环停止（'\0'的ASCII值为0）
//	}
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//strcpy(arr1, arr2);// 1.目标空间的起始地址  2.源空间的起始地址
//	//后面的数据拷贝到前面里；arr2的\0也会跟着一起拷贝过去 
//	// //需要头文件string.h
//	//printf("%s\n", arr1);//结果为hello
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);//结果为hello
//	return 0;
//}


//const 修饰变量，这个变量就会被称为 常变量 ，不能被修改，但本质上还是变量。
//#include<stdio.h>
//int main()
//{
//	const int num = 10;
//	//num = 20;//err 报错
//
//	int const*  p = &num;
//	int n = 100;
//	//const修饰指针变量的时候
//	//const 如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变。
//	//      但是指针指向的内容可以被改变。
//	// 
//	*p = 20; //ok
//	p = &n;//err
//
//	//const int* p = &num;
//	//int n = 100;
//	////const修饰指针变量的时候
//	////const 如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的。
//	////      但是指针变量本身是可以被修改的。
//	//// 
//	////*p = 20; //err
//	//p = &n;//ok
//
//	printf("%d\n", num);
//	return 0;
//}




 //版本3

//strcpy 这个库函数 其实返回的是目标空间的起始地址


//#include<stdio.h>
//#include<assert.h>  
//char* my_strcpy(char* dest, const char* src) 
//
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)  
//	{
//		; 
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//健壮性 
//鲁棒性
// size_t - unsigned int  无符号整型类型
//#include<assert.h>
//#include<stdio.h>
//size_t my_strlen(const char* str)
//{
//	//assert(str != NULL);
//	assert(str);
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "11,3545,35";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

////写一个代码计算一个数字的二进制数里，有几个1 
//#include<stdio.h>
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//每运行一次都会减去一个二进制的 1，直到全部 1 变成 0
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	printf("%d\n", NumberOf1(n));
//	return 0;
//}
////写一个代码判断一个数字是否为2的n次方
////2的n次方的数字，二进制只有一个1
////k & (k - 1) == 0


//#include<stdio.h>
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//每运行一次都会减去一个二进制的 1，直到全部 1 变成 0
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n; //^异或；相同为0，相异为1
//	//统计一下ret的二进制中有几个1，就说明m和n的二进制位中有几个位不同
//	count = NumberOf1(ret);
//	/*for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}*/
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的二进制中的奇数位和偶数位
//	//00000000000000000000000000001010  10
//	int i = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;  //从int整型，强制类型转换成short短整型，4个字节变2个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0; //用改过类型的*p每次赋值给2个字节的数，4次只改变了8个字节
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]); //打印的是没改前的arr结果为 0 0 3 4 5  前面8个字节被改0，后面不变
//	}
//	return 0;
//}
//
//#include<stdio.h>
//void Exch(int* n,int* m)
//{
//	int count = *n;
//	*n = *m;
//	*m = count;
//}
//int main()
//{
//	int n = 15;
//	int m = 20;
//	Exch(&n, &m);
//	printf("n=%d m=%d\n", n, m);
//	return 0;
//}

//int main()
//{
//    int a = 3;
//    int b = 5;
//
//    //实用型:(执行效率高,日常推荐这种交换方法)
//    int tmp = 0;
//    tmp = a;
//    a = b;
//    b = tmp;
//
//    //加减法 (缺陷:如果ab的值很大,它们相加,可能会超出整型的值,导致数据丢失)=>(可能会溢出,而且效率不高,不推荐)
//    a = a + b;
//    b = a - b;
//    a = a - b;
//
//    //异或的方法 (不会溢出)(效率不高,不推荐)
//    //a 011
//    //b 101
//    a = a ^ b; //110=> a=> 6
//    b = a ^ b; //011=> b=> 3
//    a = a ^ b; //101=> a=> 5
//    return 0;
//}


// 8 1
// 7 2  6 3
// 6 4  5 5   5 6  4 7
// 5 8  3 9   4 10  3 11  4 12  3 13  3 14  2 15
// 4 16 3 17  2 18  .2  3 19 2 20  2 21  .2 3 22 2 23  2 24  .2  2 25 .2  .2 .1 
// 3 26 2 27  2 28  .2 .2 .1 2 29 .2 .2  2 30 .2 .2 .2
// 2 31  .2.2.1.2.1
// 32
//

//求两个数的最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m = a > b ? a : b;//最小公倍数
//	//while (1)
//	//{
//	//	if (m % a == 0 && m % b == 0)
//	//	{
//	//		printf("%d\n", m);
//	//		break;
//	//	}
//	//	m++;
//	//}
//	int i = 1;
//	while (1)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}
//
////逆序  abc 123.  ==>  123. abc (符号不变)
//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	//输入进来了
//	gets(arr); //按空格不会结束输入
//
//	//三步翻转法
//	//1.字符串整体翻转
//	int len = strlen(arr);//字符串长度(元素个数)，用于求字符串最后一位
//	reverse(arr, arr + len - 1);//逆序整个字符串
//	//printf("%s\n", arr);
//
//	//2.每个单词逆序
//	char* start = arr;
//	while (*start) //一直到\0为止
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;  //单词最右边
//		}
//		reverse(start, end - 1);//逆序一个单词
//		if (*end == ' ')
//			start = end + 1;  //调整到下一个单词的左边
//		else
//			start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	//原码
//	//10000000000000000000000000001010-原码  第一位是符号位1为负数，1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 10 
//	//11111111111111111111111111110101-反码  符号位不变，其他位按位取反，得到反码
//	//11111111111111111111111111111110-补码   反码+1，得到补码
//	return 0;
//}

//int main()
//{
//	//1-1       CPU只会加法，它是通过换算得到减法的
//	//1+(-1)
//	//00000000000000000000000000000001    1的原码
//	//10000000000000000000000000000001   -1的原码
//	//10000000000000000000000000000010
//	//-2  用原码来算，得到-2 
//	// 
//	//00000000000000000000000000000001    1的补码
//	//11111111111111111111111111111111   -1的补码
//	//100000000000000000000000000000000    多出一位，33位
//	//00000000000000000000000000000000    只读32位
//	//0   用补码来计算，得到0
//	//
//	// 
//	//10000000000000000000000000000001    -1的原码   原码
//	//11111111111111111111111111111110    -1的反码   取反（符号位不变）
//	//11111111111111111111111111111111    -1的补码   +1
//	// 再对-1补码进行 取反+1
//	//10000000000000000000000000000000    -1的补码的反码
//	//10000000000000000000000000000001    -1的补码+1   ==这里又变回了-1的 原码
//	//
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	//在调试窗口的内存中可以发现
//	// a的内存表示为：十六进制的 f6 ff ff ff
//	// a的二进制为：
//	//10000000000000000000000000001010   原码
//	// （在内存中存放补码）
//	//11111111111111111111111111110101   反码  +1变补码
//	//11111111111111111111111111110110   补码   
//	//
//	// 把补码转换为十六进制
//	//从1~9，后面分别用a~f，表示10~15，f+1=16进一 
//	// 1111 -> 1*2^0 + 1*2^1 + 1*2^2 + 1*2^3 =15;  1+2+4+8=15 =十六进制的 f
//	// 0110 -> 0*2^0 + 1*2^1 + 1*2^2 + 0*2^3 =6;  0+2+4+0=6 =十六进制的 6
//	//1111 1111 1111 1111 1111 1111 1111 0110    每4位 二进制位 表示一个16进制位
//	//   f    f    f    f    f    f    f    6  
//	//
//	return 0;
//}

////大端字节序和小端字节序
////
//int main()
//{
//	int a = 0x11223344;
//	// 11 22 33 44 --> 大端字节序      （如：‘一百六十八’中的‘一’为高位，‘八’为低位）（地址：左低，右高）
//	// 把数据的 低位字节序 的内容存放在高地址处，高位字节序 的内容存放在低地址处。
//	// 
//	// 44 33 22 11 --> 小端字节序
//	// 把数据的 低位字节序 的内容存放在低地址处，高位字节序 的内容存放在高地址处。
//	//
//	//可以知道当前编译器采用的是 小端字节序 的存储模式
//	return 0;
//}
//

////大端字节序和小端字节序
////
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//if (*p == 1)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//	return *p; //返回1表示小端，返回0表示大端;
//}
//int main()
//{
//	//写代码判断当前机器的字节序
//	//int a = 1;
//	//char* p = (char*)&a; //本来应该放在int*类型里面，但是这里放在char*，所以需要强制类型转换(char*)
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110   
//	//11111111111111111111111111111111  补码
//	//11111111  char 一个字节
//	//%d打印，整型提升：11111111111111111111111111111111  //第一个为1，前面全部加1
//	signed char b = -1; //有符号数，所以第一个1理解为负号
//	//11111111
//	//%d打印，整型提升：11111111111111111111111111111111
//	unsigned char c = -1; //无符号数，所以第一个1为有效数字
//	//11111111
//	//%d打印，整型提升：00000000000000000000000011111111   //unsigned char无符号char，高位全部补0
//	//第一位为0，原反补码相同，255
//	printf("a=%d,b=%d,c=%d", a, b, c);//结果为-1，-1，255
//	return 0;
//}
//
////补充：
//// char 到底是signed char  还是 unsigned char？？
////C语言标准并没有规定，取决于编译器
//// int 默认是 signed int（有符号）    只有char是没有规定默认 
//// shore 是 signed short 
////

//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000  补码
//	//10000000
//	// 
//	//整型提升：11111111111111111111111110000000   //类型是char 有符号char，第一位1，前面都加1
//	// 
//	//  用%u无符号整型打印：（认为无符号数）
//	//11111111111111111111111110000000 全部都是有效数字，原反补码相同 结果为4294967168
//	// 换成%d打印的话：（认为有符号数）
//	//第一个1为符号位，按位取反+1，得到原码
//	//00000000000000000000000001111111
//	//00000000000000000000000010000000  原码，打印 ，结果为-128
//	printf("%u\n", a);//无符号整型打印，结果为4294967168
//	printf("%d\n", a);//有符号整型打印，结果为-128
//	return 0;
//}
////补充：
////如果类型是unsigned char，无符号char，就算第一位为1，前面还都补0

//#include<stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000  正数，原反补相同
//	//10000000
//	// 类型是char，有符号，所以第一位是1，前面都加1；
//	//11111111111111111111111110000000
//	// %u无符号打印，数字全部有效；
//	//所以结果：4294967168
//	printf("%u\n", a);//4294967168
//	return 0;
//}
////先看类型是unsigned char（无符号）还是signed char、char（有符号），进行整型提升；
////再看打印是%d（有符号）还是%u（无符号），再进行打印
//
// 
//char类型变量的取值范围
//char的内存中： 10000000 -> -128
// 有符号的char的取值范围是：-128 ~ 127
// char:
// 00000000=> 01111111=> 10000000=> 11111111 ; 0=> 127=> -128=> -1  一个圆圈轮回
// 
//
//int main()
//{
//	//i+j  i的补码 和 j的补码 相加
//	//10000000000000000000000000010100  -20
//	//11111111111111111111111111101011  反
//	//11111111111111111111111111101100  补
//	int i = -20;
//	//00000000000000000000000000001010  10 正反补一样
//	//i+j （用补码进行相加）
//	//11111111111111111111111111110110  i+j补码，再把结果用%d进行打印，因为第一个1为负数
//	//10000000000000000000000000001001  先取反再+1
//	//10000000000000000000000000001010   结果为 -10
//	unsigned int j = 10;
//	printf("%d\n", i + j); //-10
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned int i;  //单独看i的时候，看的是i的类型unsigned int
//	for (i = 9; i >= 0; i--) //i的类型是无符号数，判断条件i>=0，恒成立，不会跳出循环
//	{
//		printf("%u\n", i);//而当打印i的时候，要看的不是类型，而是%d还是%u；
//		// %d 或者 %u 会把 i 进行解析，打印的时候看要用 %d 还是 %u，来决定 i 是输出 有符号 还是 无符号。
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = -10;
//	unsigned int b = -10;
//	printf("%d,%u\n", a, a);//输出结果为：-10,4294967286
//	printf("%d,%u\n", b, b);//输出结果为：-10,4294967286
//	//结果一样
//	return 0;
//}
//从结果可以看出：
//虽然初始化的类型不同，但是输出是一样的; 所以打印输出的时候是看printf()函数里面用的是% d 还是% u;
//printf()函数里面:
//用% d，打印有符号数，就算b的类型是无符号 unsigned int，也会输出有符号的 - 10;
//同理
//用% u，打印无符号数，a 的类型是有符号 int，也会输出无符号的 4294967286;(二进制符号位有效化的结果)

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//char类型可存放的，最小值：-128  最大值：127
//	//-1 -2 ... -127 -128 127 126 125 ... 2 1 0 -1 -2...-127 -128 127...
//	printf("%d", strlen(a));  //结果是255
//	//strlen()函数遇到0的时候，就停下来，所以-1~-128 + 127~0共255个元素
//	return 0;
//}
////有符号的signed char：范围是 -128 ~ 127 （最左边是符号位）
////无符号的unsigned char：范围是 0 ~ 255 （最左边的一位是有效数字）


//#include<stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//死循环
//	}
//	//当i=255的时候，是char的最大值，再加1会被截取，变成0；
//	//所以i永远不会大于255，所以不会跳出循环
//	//无符号的char：11111111  =>255
//	//加1之后：    100000000  char截取后面8位 => 00000000 => 0
//	return 0;
//}


//int main()
//{
//	int n = 9; //4个字节
//
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);               //9        以整型的视角去输出整型数
//	printf("*pFloat的值为：%f\n", *pFloat);   //0.000000 以浮点数的视角去输出整型数
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);             //1091567616 以整型数的视角去输出浮点数
//	printf("*pFloat的值为：%f\n", *pFloat);   //9.000000   以浮点数的视角去输出浮点数
//	//说明浮点数 和整型 在内存中的存储方式是不一样的。
//	return 0;
//}

//int main()
//{
//	float f = 5.5f;//f表示浮点数 单精度浮点数
//	//101.1
//	// 1.011*2^2    小数点移动几位，就是2的几次方
//	// S=0 M=1.011 E=2
//	// S=0 M=011 E=2+127 //存的时候
//	// 先放S->E->M
//	// 0 10000001 011 00000000000000000000 (M不够后面就补满0)
//	// 0100 0000 1011 0000 0000 0000 0000 0000
//	// 4    0    b    0     0    0    0    0
//	// 40 b0 00 00 （十六进制）
//	//以上是浮点数存入内存中的过程 （十进制->二进制->十六进制）
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 'q';
//	char* pc = &ch;
//
//	//本质上是把"hello bit"这个字符串的首字符的地址存储在了ps中
//
//	const char* ps = "hello bit"; //存放首字符 h 的地址
//	char arr[] = "hello bit"; //全部放进去数组中
//	
//	//printf("%c\n", *ps);//结果为 h
//	printf("%s\n", ps);//结果为 hello bit   通过首字符的地址，来找到整个字符串
//	printf("%s\n", arr);//结果为 hello bit   同上
//	return 0;
//}

//#include <stdio.h> 
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//不相同  （两块不同的内存）
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//相同  （都指向同一个常量字符串）
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0; 
//}

//#include<stdio.h>
//int main()
//{
//	//指针数组
//	//数组 - 数组中存放的是指针（地址）
//	//int* arr[4]; 
//	//数组中有三个元素，每个元素是一个指针int*
//	//是一个存放整型指针的数组
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int* arr[3] = { &a,&b,&c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);  //跟上面一样的结果，模拟出一个二维数组，但是它不是二维数组
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int* arr1[10];   整型指针的数组
//char* arr2[4];   一级字符指针的数组
//char** arr3[5];   二级字符指针的数组
//

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	//arr;//arr - 数组名是首元素的地址 - arr[0]的地址
//
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr 就是一个数组指针 - 其中存放的是数组的地址
//	// 这时 parr 为数组指针名字， int(*)[10] 为数组指针的类型
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd 是一个数组指针
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	
//	printf("%p\n", arr); //00000060707BF8D8 打印地址结果一致，但是表达的意思不同;
//	printf("%p\n", &arr); //00000060707BF8D8  上面arr的地址为首元素的地址，下面&arr的地址为整个数组的地址;
//
//	//当我们用这两个地址进行指针初始化的时候，就能明显感受到不同
//	int* p1 = arr;          //整型指针
//	int(*p2)[10] = &arr;     //数组指针
//
//	printf("%p\n", p1); //结果同上
//	printf("%p\n", p2); //结果同上
//
//	//创建指针后地址也是一样，但是指针的 加减 有了明显的变化
//	printf("%p\n", p1 + 1); //+1跳过了一个int的距离 - int* - 4个字节
//	printf("%p\n", p2 + 1); //+1跳过了40个int的距离 - int(*)[10] - 一个数组里面10个int，10*4->需要跳过40个字节
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i)); //可以用，但是不太好（多此一举），还不如直接用int* ;这里的（*pa）相当于arr
//	}
//	return 0;
//}

//#include<stdio.h>
//void print1(int arr[3][5],int r,int c) //传统写法
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c) //p为数组指针，表示arr第一行的地址
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//
//			// *(p+i) 相当于第一行的数组名arr[0]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//
//	print2(arr, 3, 5);//arr是二维数组名，表示二维数组 首元素 地址
//	//而二维数组的 首元素 是：第一行！ --> 相当于把 第一行的地址 传入函数中
//	return 0;
//}


//#include <stdio.h>
//void test(int arr[])//ok 
//{}
//void test(int arr[10])//ok 
//{}
//void test(int* arr)//ok
//{}
//void test2(int* arr[20])//ok
//{}
//void test2(int** arr)//ok 解引用第一次得到首元素int*，再解一次得到它的地址
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])//ok
//{}
//void test(int arr[][])//NO！ 
//{}
//void test(int arr[][5])//ok  二维数组的 行可以省略，列不可以省略
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。 
////这样才方便运算。
////
//void test(int* arr)//NO！  
//{}
//void test(int* arr[5])//NO！  
//{}
//void test(int(*arr)[5])//ok  这里就是用的数组指针 
//{}
//void test(int** arr)//NO！  传过去的不是二级指针！ 
//{}
//int main() 
//{
//	int arr[3][5] = { 0 }; 
//	test(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//
//	while (i<100) 
//	{
//		printf("呵呵 呵呵\n");
//		i++;
//	}
//	
//	return 0;
//}


//#include<stdio.h>
//int i;
////i是全局变量，不初始化，默认是0
//int main()
//{
//	i--; //-1
//	//sizeof这个操作符，算出来的结果的类型是unsigned int （无符号整型）
//	//所以-1需要类型转换，-1的符号位变成有效数字-->超级大
//	if (i > sizeof(i))
//	{
//		printf(">\n"); //所以是>
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	return 0;
//}

////求出0~100000之间的所有“水仙花数”并输出。
////“水仙花数”是指 一个n位数，其各位数字的n次方之和，恰好等于该数本身。
////如：153 = 1^3+ 5^3+ 3^3 ,则 153 是一个 “水仙花数”。
//
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		//1.计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow是用来 求次方数
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//结果为 6,12
//	return 0;
//}

//#include<stdio.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//								{9802,"wang",19},
//								{9803,"zhao",18}
//	};  //这里创建的是结构体数组
//	fun(students + 1); //数组名相当于 首元素 地址，地址+1，指向第二个元素。
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>//断言的头文件 （养成指针传参时，断言的好习惯）
//void reverse(char* str)
//{
//	assert(str);//断言 str != NULL
//
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//上
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


////20块钱买汽水，1元1瓶，2个空瓶可以换1瓶汽水，共能喝多少瓶？
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//		total = 2 * money - 1;  //这种算法更好
//	//int total = money; 
//	//int empty = money;
//	////开始置换空瓶
//	//while (empty >= 2)      //常规
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d\n", total);
//	return 0;
//}

////输入一个整型数组，实现一个函数
////来调整该数组中的数字的顺序，使得数组中所有的奇数位于数组的前半部分
////所有偶数位于数组的后半部分
//#include<stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//void move(int* p, int sz)
//{
//	int* left = p;
//	int* right = p + sz - 1;
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while ((left < right) && ((*left) % 2 == 1))
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while ((left < right) && ((*right) % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//unsigned char 0~255
//
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000
//
//	unsigned char b = 100;
//	//00000000000000000000000001100100 数字是整型
//	//01100100  类型是char
//
//	unsigned char c = 0;
//	//发生整型提升 （无符号unsigned前面全部补0）
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100  相加之后截断
//	//00101100  44   
//	c = a + b;
//	//00000000000000000000000000101100  44
//	printf("%d %d", a + b, c);  //结果为 300  44 （因为放入char，而char最大只能放入255）
//	return 0;
//}

////杨辉三角:
////1
////1 1
////1 2 1
////1 3 3 1
////1 4 6 4 1
////1 5 10 10 5 1
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (i != 9)
//		{
//			for (k = 9; k - i; k--) //这里是为了打印出来效果更像菱形
//			{
//				printf(" ");
//			}
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////4个杀人嫌疑犯的供词：
//// A：不是我杀的
//// B：是C杀的
//// C：是D杀的
//// D：C在撒谎
////已知3个人在说真话，1个人在撒谎，请问凶手是谁？
//#include<stdio.h>
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);//每个表达式成立的话，得1，全部加起来为3的话，3个表达式成立
//		}
//	}
//	return 0;
//}

////5名运动员比赛前进行预测：
//// A：B第二，我第三
//// B：我第二，E第四
//// C：我第一，D第二
//// D：C最后，我第三
//// E：我第四，A第一
////比赛结束后，每个选手说对了一半，请确定每个选手的排名
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
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
//						if (
//							(b == 2) + (a == 3) == 1
//							&& (b == 2) + (e == 4) == 1
//							&& (c == 1) + (d == 2) == 1
//							&& (c == 5) + (d == 3) == 1
//							&& (e == 4) + (a == 1) == 1
//							) //每个判断条件正确为1，错误为0，每个人只猜对一半的话，两个表达式相加等于1
//						{
//							if ((a * b * c * d * e) == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//								//结果为：a=3 b=1 c=5 d=2 e=4
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//void print(int* ptr, int sz)  //一级指针传参，用一级指针 int* 接收
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//void test(char* p) //用什么类型接收，就要用对应的类型传参
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);
//	
//	char ch = 'w';
//	test(&ch);//char*
//	char* p1 = &ch;
//	test(p1);
//
//	return 0;
//}


//#include<stdio.h>
//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//一级指针
//	int** ppa = &pa;//二级指针
//	//把二级指针进行传参
//	test(ppa);
//	printf("%d\n", a);
//	
//	test(&pa); //OK 传 一级指针变量的地址 
//	
//	int* arr[10] = { 0 };
//	test(arr); //OK 传 存放一级指针的数组 （指针数组）
//	return 0;
//}

//
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//	//函数指针 - 存放函数地址的指针
//	// &函数名 - 取到的就是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add); //函数名 == &函数名
//
//	int(*pf)(int, int) = &Add; //pf就是一个函数指针变量 （用：指向的内容 和 返回的内容 来定义）
//
//	return 0;
//}

//void test(char* str)
//{
//}
//int main()
//{
//	void(*pt)(char*) = &test;
//	return 0;
//}

////函数指针的使用
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//pt是一个函数指针变量
//	int (*pt)(int, int) = &Add;
//	//int (*pt)(int, int) = Add; //这样写也没问题  Add == pt
//
//	int ret = (*pt)(3, 5); //可以把 (*pt) 这个解引用看成是：Add 这个函数名 （用函数指针来调用函数）
//	//int ret = Add(3, 5);
//	//int ret = pt(3, 5); //这三个一样的，（*pt）这里的 * 是没有实际意义，只是为了更好理解它，就算写成（****pt）也一样
//
//	printf("%d\n", ret); //结果为8
//	return 0;
//}


////理解：代码1
////(*(void(*)())0)()  //0是一个int类型，把它强制类型转换为 函数指针类型，再把它整体看作为一个函数
//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	// 
//	//1. void(*)() - 函数指针类型
//	//2. (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	//
//	return 0;
//}

////理解：代码2
//void(*signal(int, void(*)(int)))(int);
////signal是一个函数，把 函数指针 作为参数来使用，再把这个函数作为 函数名 作成一个函数指针
////
////  1.signal和()先结合，说明signal是函数名
////  2.signal函数的第一个参数的类型是int，第二个参数的类型是函数指针
////     该函数指针，指向一个参数为int，返回类型是void的函数
////  3.signal函数的返回类型也是一个函数指针
////     该函数指针，指向一个参数为int，返回类型是void的函数
////
////  signal是一个函数的声明
////
////为了更好理解，可以看成是这样：
//void(*)(int) signal(int, void(*)(int));//错误写法
////void(*)(int)是返回类型 signal是函数，(int, void(*)(int))是它的传参参数
//// 但是这种写法是错误的，不能这样写
//// 
//// 函数的返回类型如果是函数指针的话
////  * 必须要跟signal名字靠在一起，所以
//// void(*signal(int, void(*)(int)))(int);
////      必须写作这样子
////
////typedef - 对类型进行重定义
//typedef void(*pfun_t)(int) ;//对 void(*)(int)的函数指针类型 重命名为 pfun_t
//pfun_t signal(int, pfun_t);
//
////与void(*signal(int, void(*)(int)))(int);//完全等价，完全相同
//
////typedef unsigned int uint; //unsigned int 重命名为 uint
//int main()
//{
//	return 0;
//}

////函数指针数组 - 存放函数指针的数组
//// 
////整型指针 int*
//// 整型指针数组 int* arr[5];
////
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add,Sub };// pfArr 就是 函数指针数组，  
//	//  {pf1,pf2} 这样进行初始化也行
//	//可以拆分看作 pfArr[2] 数组名，int(*)(int,int) 函数指针类型
//
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add   2.sub****\n");
//	printf("****3.mul   4.div****\n");
//	printf("****    0.exit   ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	//计算器 - 计算整型变量的加，减，乘，除
//	//a&b a^b a|b a<<b a>>b ....
//	int input = 0;
//	do
//	{
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);  //pfArr就是函数指针数组
//			printf("结果为：%d\n", ret);  //转移表 - 《C和指针》里把这个内容称为转移表
//		}                                //因为它利用数组作为跳板，进行转移动作
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误，请重新选择！");
//		}
//
///*		//用函数指针数组来实现下面代码，更简洁
//		switch (input)
//		{
//		case 1:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("结果为 %d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("结果为 %d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("结果为 %d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("结果为 %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//*/
//	} while (input);
//	return 0;
//}


//void test(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	//函数指针 pfun
//	void (*pfun)(const char*) = &test;
//	//函数指针数组 pfunArr
//	void (*pfunArr[5])(const char*);
//	pfunArr[0] = test;
//	//指向函数指针数组 pfunArr 的指针 ppfunArr
//	void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//	return 0;
//}
//
//int main()
//{
//	int arr[10];
//	//数组元素类型 - int
//	//arr数组的类型是 int [10]
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add   2.sub****\n");
//	printf("****3.mul   4.div****\n");
//	printf("****    0.exit   ****\n");
//	printf("*********************\n");
//}
//int Calc(int(*pf)(int, int))  //用 函数指针 接收传过来的 函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数>:");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);      //回调函数
//	 
//}
//int main()
//{
//	//计算器 - 计算整型变量的加，减，乘，除
//	//a&b a^b a|b a<<b a>>b ....
//	int input = 0;
//	do
//	{
//		int ret = 0;
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//
//		//用 回调函数 来实现下面代码，更简洁
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);  
//			printf("结果为 %d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("结果为 %d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("结果为 %d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("结果为 %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//冒泡排序
//#include<stdio.h>
//void bubble_sort(int arr[], int sz) //冒泡排序函数
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)  //i最大为9，（从0开始数）+（10个元素只要对比9次）
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);  //排序前
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);  //排序后 
//	return 0;
//}



////快速排序的库函数 qsort();
//// 
////void qsort(void* base,  //base 中存放的是待排序数据中第一个对象的地址
////	        size_t num,  //num 是排序数据元素的个数
////	        size_t size,  //size 是排序数据中一个元素的大小，单位是字节
////		    int (*cmp)(const void*, const void*) //函数指针  是用来比较待排序数据中的2个元素的函数
////		    );
//
////base用的是void* ，无类型指针 - 任意一个数据的地址都可以放入这个指针中
////size_t - unsigned int  无符号整型类型
////因为用无类型指针来接收，所以不知道元素的大小（元素大小决定了指针每一步走多少个字节）
////因此需要传元素的大小入函数中
//#include<stdio.h>
//#include<stdlib.h>  //qsort();函数的头文件
//#include<string.h>  //strcmp();函数的头文件
//int cmp_int(const void* e1, const void* e2) //整型 ，返回值：>0 或 0 或 <0 
//{
//	return *(int*)e1 - *(int*)e2;
//	//默认是升序，但是如果把 e1 和 e2 的位置交换：
//	//return *(int*)e2 - *(int*)e1;  //就会变成 降序 。
//}
////因为接收的是无类型指针，所以需要强制类型转换
////返回值：>0 或 0 或 <0 
//void print_arr(int arr[], int sz) //打印
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void test1()  //用qsort();排序整型
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//struct Stu  //创建结构体
//{
//	char name[20];
//	int age;
//};
//int sort_by_age(const void* e1, const void* e2) //结构体,年龄
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age; //结构体中的age相减，返回值：>0 或 0 或 <0 
//}
//int sort_by_name(const void* e1, const void* e2)  //结构体,名字 
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()  //用qsort();排序结构体
//{
//	//使用qsort()函数排序结构体数据
//	struct Stu s[] = { {"wan",28} ,{"xu",22}, {"cao",20}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按年龄排序
//	//qsort(s, sz, sizeof(s[0]), sort_by_age);  //按数字大小排序
//	//按照名字来排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name); //按首字母的 ASCII码值 进行比较（字母相同，就比较下一个，如此类推）
//
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


////模仿qsort实现一个自定义冒泡排序的通用算法
//#include<stdio.h>
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,
//				int sz,
//				int width,
//				int (*cmp)(const void* e1, const void* e2)
//				)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟的排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素比较
//			//arr[j]  arr[j+1]
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)   //例如：相减a-b>0的话，a>b
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				//这里的Swap函数，必须要在前面创建，这样才可以在这里使用，后面创建的话不行。
//			}
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2)  //两个数值传进来比较大小，例如：相减a-b>0的话，a>b
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//自定义qsort函数
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//int main()
//{
//	test();
//	return 0;
//}



////void* 指针的好处：可以存放任意类型的地址
////坏处：不能解引用和加减，要使用里面的地址的话，必须先强制类型转换，再用
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	void* p = &a;//无具体类型的指针
//	p = &ch; //因为没有具体类型，所以可以存放 任意类型 的地址
//	*p;//错误，无法解引用，因为不知道访问几个字节
//	p++;//也是错误
//	//要使用的话，必须先将 无类型指针 进行 强制类型转换
//	return 0;
//}



//一维数组：
////sizeof(数组名) - 数组名表示整个数组的 - 计算的是整个数组的大小
////&数组名 - 数组名表示整个数组，取出的是整个数组的地址
////除此之外，所有的数组名都是数组首元素的地址
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 }; //4*4=16
//	printf("%d\n", sizeof(a));//16  整个数组的大小
//	printf("%d\n", sizeof(a + 0));//4或8  a+0是第一个元素的地址，sizeof(a+0)计算的是地址的大小
//	printf("%d\n", sizeof(*a));//4   *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
//	printf("%d\n", sizeof(a + 1));//4或8  a+1是第二个元素的地址，sizeof(a+1)计算的是地址的大小
//	printf("%d\n", sizeof(a[1]));//4 - 计算的是第二个元素的大小
//
//	printf("%d\n", sizeof(&a));//4或8  &a虽然是数组的地址，但也是地址，sizeof(&a)计算的是一个地址的大小
//	printf("%d\n", sizeof(*&a));//16   &a是&数组a的地址，再解引用，结果还是a数组。- 计算的是数组的大小
//	printf("%d\n", sizeof(&a + 1));//4或8  &a是取数组地址，&a+1相当于跳过一个数组之后，下一块空间的起始地址。是数组后面的空间的地址。
//	printf("%d\n", sizeof(&a[0]));//4或8   第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//4或8  第二个元素的地址
//
//	return 0;
//}


////字符数组
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));  //6
//	printf("%d\n", sizeof(arr + 0));  //4或8  只要是地址，就是4或8个字节（32位和64位）
//	printf("%d\n", sizeof(*arr));   //1
//	printf("%d\n", sizeof(arr[1]));  //1
//	printf("%d\n", sizeof(&arr));  //4或8
//	printf("%d\n", sizeof(&arr + 1)); //4或8     &arr+1,跳过一整个数组
//	printf("%d\n\n", sizeof(&arr[0] + 1));  //4或8
//
//	//strlen求字符串长度
//	printf("%d\n", strlen(arr));  //随机值（找不到'\0'）
//	printf("%d\n", strlen(arr + 0));  //随机值
//	//printf("%d\n", strlen(*arr));  //err报错
//	//printf("%d\n", strlen(arr[1]));  //err报错
//	printf("%d\n", strlen(&arr));  //随机值
//	printf("%d\n", strlen(&arr + 1));  //随机值-6 随机值
//	printf("%d\n", strlen(&arr[0] + 1));  //随机值-1 随机值
//
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));  //7  包括\0
//	printf("%d\n", sizeof(arr + 0));  //4或8
//	printf("%d\n", sizeof(*arr));   //1
//	printf("%d\n", sizeof(arr[1]));  //1
//	printf("%d\n", sizeof(&arr));  //4或8
//	printf("%d\n", sizeof(&arr + 1)); //4或8
//	printf("%d\n\n", sizeof(&arr[0] + 1));  //4或8
//
//	printf("%d\n", strlen(arr));  //6
//	printf("%d\n", strlen(arr + 0));  //6
//	//printf("%d\n", strlen(*arr));  //err报错
//	//printf("%d\n", strlen(arr[1]));  //err报错
//	printf("%d\n", strlen(&arr));  //6
//	printf("%d\n", strlen(&arr + 1));  //随机值
//	printf("%d\n", strlen(&arr[0] + 1));  //5
//
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p));  //4或8
//	printf("%d\n", sizeof(p + 1));  //4或8
//	printf("%d\n", sizeof(*p));   //1    
//	printf("%d\n", sizeof(p[0]));  //1
//	printf("%d\n", sizeof(&p));  //4或8   p指针的地址
//	printf("%d\n", sizeof(&p + 1)); //4或8  p指针后面的地址
//	printf("%d\n\n", sizeof(&p[0] + 1));  //4或8  p[1]的地址
//
//	printf("%d\n", strlen(p));  //6
//	printf("%d\n", strlen(p + 1));  //5
//	printf("%d\n", strlen(*p));  //err报错
//	printf("%d\n", strlen(p[0]));  //err报错
//	printf("%d\n", strlen(&p));  //随机值
//	printf("%d\n", strlen(&p + 1));  //随机值
//	printf("%d\n", strlen(&p[0] + 1));  //5
//	return 0;
//}
//
//


//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));  //48
//	printf("%d\n", sizeof(a[0][0]));  //4  a[0][0] - 是第一行第一个元素
//	//a[0] 就可以理解为：第一行的数组名
//
//	printf("%d\n", sizeof(a[0]));//16  sizeof(a[0]) - 数组名a[0]单独放在sizeof内部，
//	//a[0]表示的是：整个第一行。sizeof(a[0])计算的是第一行的大小。
//
//	printf("%d\n", sizeof(a[0] + 1));  //4  解释：a[0]作为数组名并没有单独放在sizeof内部，也没有&取地址，
//	//所以a[0]就是第一行第一个元素的地址。
//	//所以 a[0]+1 ,就是第一行第二个元素的地址。
//
//	printf("%d\n", sizeof(*(a[0] + 1)));  //4  解释：*(a[0]+1)是第一行第二个元素（int所以是4） 
//
//	printf("%d\n", sizeof(a + 1));  //4   a是二维数组的数组名，并不是取地址。
//	//也没有单独放在sizeof内部，所以a就表示二维数组首元素的地址，即：第一行的地址。
//	// a+1 的话，就是 二维数组 第二行的地址。
//
//	printf("%d\n", sizeof(*(a + 1)));  //16  a+1是第二行的地址，所以*(a+1)表示第二行
//	//所以计算的就是第二行的大小  *(a+1) == a[1]
//
//	printf("%d\n", sizeof(&a[0] + 1));  //4   a[0]是第一行的数组名，
//	//&a[0]取出的就是第一行的地址，那么 &a[0]+1 就是第二行的地址
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));  //16   &a[0]+1 是第二行的地址，
//	// *(&a[0]+1) 就是第二行,所以计算的第二行的大小
//
//	printf("%d\n", sizeof(*a));  //16  a作为二维数组的数组名，没有&，没有单独放在sizeof内部，
//	//a就是首元素的地址，即第一行的地址，所以*a就是第一行，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[3]));  //16    a[3]其实是第四行的数组名（如果有的话）
//	//所以其实不存在，也是通过类型计算大小的
//
//	//3+5
//	//表达式：
//	//1.值属性 - 8
//	//2.类型属性 - int
//
//	return 0;
//}
//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2  计算s的大小，s是short类型
//	printf("%d\n", s);//5  sizeof内部的表达式，不会改变sizeof外部的信息
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2  5
//
//	//a是首元素的地址，a+1就是第二位的地址，再解引用就是 2
//	// ptr是数组a后面的地址，因为强制类型转换为int*，而不是int(*)[5]的类型，所以ptr-1的话，就是往前移动一个int的位置，指向最后一个元素 。5
//	return 0;
//}


////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000。如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1); //指针+1，跳过这个指针结构体Test类型大小是20个字节，所以+1就是跳过20个字节
//	//结果为：0x100014
//	//
//	printf("%p\n", (unsigned long)p + 0x1); //p从 指针类型 强制转换为 整型类型long，整型+1就是+1。指针+1才是跳过对应的大小。
//	//结果为：0x100001
//	//
//	printf("%p\n", (unsigned int*)p + 0x1); //p 强制转换为 int*，int*为4个字节，所以就是跳过4个字节
//	//结果为：0x100004
//	//
//	return 0;
//}
////考察的是：指针类型决定了指针的运算！(加减正数的运算)

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	//小端存储：
//	//  01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//
//	int* ptr1 = (int*)(&a + 1); //ptr1指向 a数组后面的地址
//	
//	int* ptr2 = (int*)((int)a + 1); //prt2指向 a[1]的地址
//	
//	printf("%x,%x", ptr1[-1], *ptr2);  //%x 用十六进制来打印
//	// ptr1[-1] --> 0x00000004 --> 4 （4前面的0会被忽略掉）
//	// *ptr2 --> 0x02000000 --> 2000000 (0x和2前面的0，会忽略掉，不打印)
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) }; //为什么{}里面是（）？？？本应该是{{}，{}，{}}
//	//其实，这里是 逗号表达式 ，而不是数组元素
//	//相当于{}里面是，1,3,5
//	//1,3
//	//5,0
//	//0,0
//	int* p;
//	p = a[0]; //a[0]首元素地址
//	printf("%d", p[0]); // 结果为 1
//	// p[0] == *(p+0)
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];  //因为它指向的数组是int[4],所以每走4个整型为一行，相当于 int[][4]
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//&p[4][2] - &a[4][2]  --> -4
//	// 10000000000000000000000000000100  原码  %d打印这个原码，所以是-4
//	// 11111111111111111111111111111011
//	// 11111111111111111111111111111100  补码
//	// 但是 %p 打印地址时，不区分正负，直接读取补码，全部是有效数字
//	// 
//	// 所以 %p 是：FF FF FF FC
//	// 
//	//结果为：FFFFFFFC,-4
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 1 2 3 4 5
//	// 6 7 8 9 10
//	//
//	int* ptr1 = (int*)(&aa + 1); //（&aa表示整个数组的地址）指向10后面的地址
//	int* ptr2 = (int*)(*(aa + 1));//（aa表示第一行的地址）指向第二行的地址，相当于首元素地址6
//	//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//ptr1-1 相当于减一个int*的大小，4个字节 ---> 指向 10
//	//ptr2-1 也是4个字节 --> 指向 5
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//3个 char*指针 的数组
//	char** pa = a; //a[0]的地址 附给 pa
//	pa++; //跳过4个字节
//	printf("%s\n", *pa); //相当于指向 a[1]
//	//结果为：at
//	return 0;
//}

//#include<stdio.h>
////注意1. 自增 自减 ，和 []中的加减 都会改变指针的位置
////注意2. 指针是传址调用，每次++或者--都会改变它原本的指向
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" }; //4个 char*指针 的数组
//	char** cp[] = { c + 3,c + 2,c + 1,c }; //4个 char**指针 的数组
//	// c表示首数组的地址，+1就跳过一个数组
//	// **cp相当于： { "FIRST","POINT","NEW","ENTER"}
//	//
//	char*** cpp = cp;
//	printf("%s\n", **++cpp); 
//	//++cpp --> cpp 指向 cp[1]
//	//打印 POINT
//	//
//	printf("%s\n", *-- * ++cpp + 3); 
//	//因为是指针，所以前面cpp指向了cp[1]的话，cp[1]位置会存到cpp里面去。
//	// 所以，这里的++cpp是在上一个cpp指向了cp[1]的基础上，再++
//	//++cpp --> cp[2]  解一层引用，指向的是 数组c+1
//	// c+1 指针再--  指针变成指向 c
//	// 指向c，c为： "ENTER"， 再+3，  
//	// char*c[0]是首元素地址， E N T E R，跳过3个元素，到 E R 的E
//	// 打印的是剩下的字符串 ER
//	//
//	printf("%s\n", *cpp[-2] + 3);
//	//*cpp[-2] 理解为： **(cpp-2)+3
//	// 刚才 cpp 指向了 cp[2],现在再-2 --> cp[0] 也就是 c+3 --> c[3] 就是 FIRST
//	// c[3]再解引用 ，然后 +3 
//	// 打印的是 ST
//	//
//	printf("%s\n", cpp[-1][-1] + 1);
//	//cpp[-1][-1] == *(*(cpp-1)-1)
//	// 因为上面的-2是在[]里面，所以不影响cpp的位置
//	// cpp 指向的还是 cp[2], 先-1，得到 cp[1] 的地址，再解引用,得到 c+2
//	// c+2 指向的地址再-1，得到的是 c+1 的地址，解引用，NEW
//	// NEW +1
//	//打印的是 EW
//	//
//	return 0;
//}

////打印1~100奇数
////判断奇数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for ( a=1;a <= 100;a++) 
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//	//int a = 1;
//	//while (a)
//	//{
//	//	scanf("%d", &a);
//	//	if (a/2==5)
//	//	{
//	//		printf("奇数\n");
//	//	}
//	//	else if (a < 0)
//	//	{
//	//		printf("不正确,重新输入\n");
//	//	}
//	//	else
//	//	{
//	//		printf("偶数\n");
//	//	}
//	//}
//	return 0;
//}

//杨氏矩阵：
// 有一个数学矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的。
// 请编写程序在这样的矩阵中查找某个数字是否存在。
// 要求：时间复杂度小于O(N);
//

//1 2 3
//2 3 4
//4 5 6
//#include<stdio.h>
//int find_num(int arr[3][3], int r, int c, int k) //不用指针实现
//{
//	int x = 0;
//	int y = c - 1;
//	while (x < r && y >= 0) //时间复杂度为 O(1)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;//找到了
//		}
//	}
//	return 0;//找不到
//}

//int find_num(int arr[3][3], int *px, int *py, int k) //指针实现（为了知道坐标）
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0) // 防止越界  时间复杂度为 O(1)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;//找到了
//		}
//	}
//	return 0;//找不到
//}
//int main()
//{
//	int  arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//N - 查找的次数最坏的情况下是N次
//	//需要 O(1) 
//	//查找数字,比如找 7
//	int k = 7;
//	//如果找到返回1，找不到返回0
//	int x = 3;//行
//	int y = 3;//列
//	//&x,&y
//	//1.传入参数
//	//2.带回值
//	int ret = find_num(arr, &x, &y, k);//把arr数组，3行3列，需要找的数k，放入函数find_num中，ret接收返回值
//	if (ret == 1)
//	{
//		
//		printf("找到了\n");
//		printf("坐标为%d %d", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}


//数组
//字符串
//数据结构
//

////字符串左旋
//// 题目内容：
//// 实现一个函数，可以左旋字符串中的k个字符。
//// 例如：
//// ABCD左旋一个字符得到BCDA
//// ABCD左旋两个字符得到CDAB
////
//
//#include<stdio.h>
//#include<string.h>
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋转一个字符
//		//1.
//		char tmp = *str;
//		//2.后边的n-1个字符往前挪动
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp放在最后
//		*(str + n - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;//旋转k个字符
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

////三步反转法
//#include<assert.h>
//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//
//	int n = strlen(str);
//	reverse(str, str + k - 1);//左
//	reverse(str + k, str + n - 1);//右
//	reverse(str, str + n - 1);//整体
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;//旋转k个字符
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1=AABCD 和 s2=BCDAA ，返回1
////给定s1=abcd 和 s2=ACBD，返回0
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int is_string_rotate(char* str1, char* str2)
//{
//	//判断长度是否相等
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//	//1.str1字符串后面追加一个str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	//判断str2是否为str1的字串
//	int ret = strstr(str1, str2);//用库函数来判断
//	//如果str2是str1中的字串，返回str2起始元素的地址，则返回值为指针
//	//如果不是，返回空指针NULL
//	return ret != NULL;//成立返回1，不成立返回0
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[20] = "hello";
//	//只要空间够大，就可以用 strcat()函数 对 arr数组 进行追加。
//	//"hello bit\0"
//	//strcat(arr,"bit");
//	
//	//strcat(arr, arr);//err
//
//	strncat(arr, arr, 5);//hellohello
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////三个版本：
////1.计算器
////2.递归
////3.指针-指针
//int my_strlen(const char* str)
//{
//	int count = 0;//计数器
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";// ""的后面默认隐藏一个\0
//	//char arr[] = { 'a','b','c'};// {}里面没有\0，所以strlen计算结果为随机值
//	//模拟实现
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");//结果为>
//		//strlen返回类型是size_t，无符号整型类型，所以两个无符号整型类型的数相减，得到的还是正数。
//		//size_t == unsigned int
//		//3-6 = -3 但是这个负号会变成有限数字，则变成一个非常大的数字
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[20] = { 'a','b' };
//	//arr = "hello";//err
//	char* p = "hello";
//	strcpy(arr, p);//string copy  把p地址的数据复制到arr地址中,隐藏的'\0'也会被复制过去
//	//直接写 strcpy(arr,"hello"); 也一样，同理
//	//会把原本的数据'a''b'覆盖，删除
//	//
//	char arr2[] = { 'a','b','c'/*,'\0' */ };//没有隐藏的'\0'，strcpy函数需要遇到'\0'才能停下来，所以会err
//	strcpy(arr, arr2);
//	printf("%s\n", arr);
//	//
//	char arr3[5] = "####";
//	char* p2 = "hello world";
//	strcpy(arr3, p2);
//	printf("%s\n", arr3);//数组空间不够大，但是strcpy函数会硬来，硬塞进去导致越界访问
//	//
//	char* str = "xxxxxxxxxxxxxxx";
//	char* p3 = "hello world";
//	strcpy(str, p3);//????这里会出问题，str不是数组，是一个常量字符串，不能被修改，所以err
//	return 0;
//}


//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* src) //返回的是目标空间的起始位置
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找目标字符串中的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加源字符串,包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回的是目标空间的起始位置
//}
//int main()
//{
//	char arr[20] = "hello \0###########";
//	//strcat(arr, "world"); //字符串追加（连接）
//	//printf("%s\n", arr);
//	char arr2[] = "world";
//	my_strcat(arr, arr2);  //两种方法都一样
//	printf("%s\n", arr);  //hello world
//	//追加时,从'\0'开始，覆盖'\0'，会把源字符串里面的字符全部加进去，包括'\0'
//	printf("%s\n", my_strcat(arr, arr2)); //hello worldworld
//	return 0;
//}


////strcat();不能自己给自己追加
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//err  因为拷贝过程中，把路径上自己末尾的'\0'覆盖掉了，所以无法复制'\0'，导致死循环
//	printf("%s\n", arr);
//	return 0;
//}

//比较字符串的大小
#include<stdio.h>
#include<string.h>
int main()
{
	char* p = "obc";
	char* q = "abcdef";
	/*if (p > q) //err 这里比较的是p和q的地址
	{
		printf(">\n");
	}
	if("obc"> "abcdef")//err  这里也是比较o和a的地址
	*/

	//strcmp - 字符串比较大小
	//比较的不是字符串的长度，是字符的大小，如：abc > abbbbcd ,a=a,b=b,c>b,c后面就可以不用看了
	//相等的情况下，按顺序一直比较到\0的位置，如果都相等，则两个字符串相等，如：abc\0 == abc\0   \0为结束标志
	int ret = strcmp("obb", "abcdef"); //公式1 > 公式2 -> 返回1 ；公式1 < 公式2 -> -1 ;公式1 == 公式2 -> 0 ;
	printf("%d\n", ret);//所以这里结果为：打印 1  o>a (与长度无关，比较ASCII值有关)
	return 0;
}

