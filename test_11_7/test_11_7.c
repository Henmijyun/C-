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

#include<stdio.h>
int main()
{
	char ch = 'q';
	char* pc = &ch;

	//本质上是把"hello bit"这个字符串的首字符的地址存储在了ps中

	const char* ps = "hello bit"; //存放首字符 h 的地址
	char arr[] = "hello bit"; //全部放进去数组中
	
	//printf("%c\n", *ps);//结果为 h
	printf("%s\n", ps);//结果为 hello bit   通过首字符的地址，来找到整个字符串
	printf("%s\n", arr);//结果为 hello bit   同上
	return 0;
}

#include <stdio.h> 
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";

	char* str3 = "hello bit.";
	char* str4 = "hello bit.";

	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");//不相同  （两块不同的内存）

	if (str3 == str4)
		printf("str3 and str4 are same\n");//相同  （都指向同一个常量字符串）
	else
		printf("str3 and str4 are not same\n");

	return 0; 
}