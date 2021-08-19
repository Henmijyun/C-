#define _CRT_SECURE_NO_WARNINGS 1

/*#include<stdio.h>
int main(void)
{
	printf("hello,world\n");
	return 0;
}*/

//#include<stdio.h>
/*int main()
{
	printf("こんにちは、世界\n");//日本語でもよろしいじゃない？
	return 0;

}*/
/*int main()
{
	char cjx = 'A';         //char--字符类型   后面的英文cjx只是代表数据某名称
	printf("%c\n",cjx);     // %c--打印字符格式的数据   \n--换行的意思
	 %f--打印浮点数字（打小数）
	   %p--以地址的形式打印
	   %x--打印十六进制数字
	   %o....
	//short int   //短整型

	int age = 20;           //整型
	printf("%d\n", age);    // %d--打印整型十进制数据

	//long 长整型
    long  nom = 11100;
	printf("%d\n", nom);
	
	float f = 5.2;     //单精度浮点数
	printf("%f\n", f);
	
	double d = 3.14;    //双精度浮点数
	printf("%lf\n", d);//打印双精度浮点数时，用%f可能会丢失精度，所以用%lf更为合适

	//sizeof是用来计算括号起来东西的大小
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));// 4/8 C语言标准sizeof(long) >或= sizeof(int) 都行,4=4 8>4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	return 0; 
}*/

//int main()
//{
//	short age = 20;//向内存申请2个字节=16比特位，用来存放20这个数值
//	float weight = 95.6f;//向内存申请4个字节，存放小数，数值后面加f是指定95.6这个数值是float类型
//	char ch = 'w';
//	return 0;
//}


//常量，变量（局部，全局）
/*int num1 = 20;//全局变量-定义在代码块{}之外的变量
int main()
{
	int num1 = 10;//局部变量-定义在代码块{}内部的变量 ;名字相同的话，把这行去掉就直接显示全局
	printf("%d\n", num1);//局部和全局变量的名字尽量不要相同，容易误会出bug；
	                 //当局部和全局变量名字相同时，局部优先显示。
	return 0;
}*/

//计算两个数值的和
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;	//C语言语法规定，变量要定义在当前代码块的最前面
//
//	/*输入数据-使用输入函数scanf   
//	vs2019中加(_s) 
//	scanf_s() 的功能虽然与scanf() 相同，但却比 scanf() 安全，
//	因为 scanf_s() 是针对“ scanf()在读取字符串时不检查边界，可能会造成内存泄露”这个问题设计的。
//	scanf_s()用于读取字符串时，必须提供一个数字以表明最多读取多少位字符，以防止溢出。*/
//
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);//%d前面的（sum=）会在调试中显示出来
//	return 0;
//}

//变量的作用域
//#include<stdio.h>
//int global = 2020;//全局变量的作用域是整个工程
//void test()
//{
//	printf("test()--%d\n", global);//这里不运行，只是声明
//}
//int main()
//{
//	{
//		int num = 0;  //局部变量的作用域是，局部变量坐在的{}里面才起作用，
//		printf("num=%d\n", num);//如果把printf("num=%d\n", num);移到变量int num = 0;的{}以外，不起作用
//	}
//	printf("global=%d\n", global);
//	test();//在main里调用了void函数，所以会执行
//
//	//声明 extern外部符号的(其他源文件里的全局变数)
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

////生命周期
////局部变量的生命周期是在{}里面的，而全局变量的生命周期则是整个程序的生命周期
//#include<stdio.h>
//int main()
//{
//	{//生命周期开始
//		int a = 10;
//		printf("a=%d\n", a);//ok   
//	}//生命周期结束
//	printf("a=%d\n", a);//error(错误)
//	return 0;
//}

////常量
//#include<stdio.h>
//int main()
//{
//	//const-常属性，
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	int arr[10] = { 0 };//数组[]中必须用常量数值才能运行，不可以用常变量代替
//	
//	const int num = 4;//int num是把num定义为4，属于变量，前面加上const,变成const修饰的常变量
//	printf("%d\n",num);
//	num = 8;//前面int num=4是变量，可运行。但是加const变成常变量时，num=8就会error
//	printf("%d\n", num);
//	3;//字面常量
//	3.14;
//
//	return 0;
//}

//#include<stdio.h>
//              //#define 定义的标识符常量 (define宏定义）
//#define MAX 10 //定义一个常量叫MAX的符号，后面10是定义为10的意思
//int main()
//{
//	int arr[MAX] = {0};//用定义符定义的常量，可以在数组[]中使用
//	printf("%d\n", MAX);
//	return 0;
//}

////枚举常量
////枚举-一一列举（性别：男，女，保密。三原色：红，黄，蓝。）
////枚举关键字 - enum
//enum Sex           //性别,英文：男，女，保密
//{
//	MALE,
//	FEMALE,
//	SECRET
//};               //MALE,FEMALE,SECRET这3个值-枚举常量
#include<stdio.h>
//int main()
//{
//	//enum Sex s = MALE;//名叫s的人是男的
//	printf("%d\n", MALE);//枚举常量是有值的，且默认顺序为0，1，2...并且不可被改变
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//enum Color  //（例2：）颜色，红黄蓝
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;//名称为color的颜色为蓝色BLUE
//	color = YELLOW;//这个color只是某物品名称，是变量，可以被改
//	//BLUE = 6;//这个是枚举定义的常量，必须按默认0，1，2...颜色本身不能被改，所以error
//	return 0;
//}

//字符串
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"相当于'a''b''c''\0'------'\0'字符串结束标志
//
//	char arr2[] = { 'a','b','c',0};
//	//{'a','b','c'}只有'a''b''c',没有结束标志。所以用{}打字符串时，要加入'\0'或者0，代表字符结束。
//
//	printf("%s\n", arr1);//打印字符串用%s
//	printf("%s\n", arr2);
//	"hello bit";
//	"";//空字符串
//	return 0;
//	//数据在计算机上存储的时候，存储的是2进制
//	//每个字符都有它们对应的值#aA$hud...   比如：a-97 A-65
//	//ASCII 编码，每个字符都有ASCII码
//	//ASCII 码值，每个ASCII码对应的值
//}
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//长度：3
//	char arr2[] = { 'a','b','c'};//长度：不加\0，结果为随机值；加上'\0'后，长度为3。
//	printf("%d\n", strlen(arr1));//strlen - string length - 用来计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("c:\\2013\\music\\zhou.mp3\n");//为防止系统把'\'理解为转义字符，把'\'写作'\\'
//	//这时得到的结果是c:\2013\music\zhou.mp3这样的地址
//	printf("%s\n", "\"");
//	return 0;
//}

////'\ddd'
//#include<stdio.h>
//#include<string.h>  //计算长度的头文件
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//长度为13，但是为什么是13呢
//	printf("%c\n", '\32');//显示"→"
//	//\32 -- 32是2个8进制数字 （不能出现8，9这种超过7的数值）  3*8^1+2*8^0 = 24+2 =26   26在ASCII码中是"→"
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32-->10进制 26->作为ASCII码值代表的字符
//	printf("%c\n", '\132');//显示"Z"
//	//\132--  1*8^2+3*8^1+2*8^0 = 64+24+2 = 90,90在ASCII码中对应的字符是"Z"
//	//所以\32是一个字符"→"
//	return 0;
//}

//'\xdd'
//#include<stdio.h>
//int main()            // '\'后面的只是数字：8进制；如果是'\x'加数字：16进制。
//{
//	printf("%c\n", '\x61');//十六进制：6 1 -- 6*16^1+1*16^0 = 96+1= 97-->ASCII码值为：'a'
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//
//int main(void)
//{
//	int input = 0;
//	printf("考上北陆大之后\n");
//	printf("你要好好学习吗？请输入(1,0)按回车>:\n");
//	scanf("%d", &input);     //输入函数，选择输入1/0
//	if (1 == input)        //if-如果    一个' = '表示赋值，两个' = '表示判断是否相等。
//		printf("走上人生巅峰\n");
//	else if (0 == input)   //这种也可以用
//		printf("别学了，回家卖红薯\n");
//
//	else                   //else-其他
//		printf("最是人间留不住啊小伙子\n");
//	system("pause");
//	return 0;
//}

//while语句
//#include<stdio.h>
//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//			line++;
//	}
//	if (line >= 20000)    //一直循环，直到>或=20000
//		printf("好offer\n");
//	
//	return 0;
//}

//函数
//#include<stdio.h>       //printf、scanf这些是库函数，C语言库自带的
//int add(int x, int y)  //int add 这种是自定义函数，自己设计的
//{
//	int z = (x * y);
//	return z;
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int sum = 0;
//	int a = 5;
//	int b = 6;
//	sum = add(num1, num2);
//	printf("%d\n", sum);
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

////数组
//#include<stdio.h>
//int main()
//{
//	     //定义一个存放10个整型数字的数组
//	
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//下标从0开始，[n]的下标=n-1
//	//0~9  
//	int i = 0;
//	while (i < 10)     
//	{
//		printf("%d ", arr[i]);
//		i++;                  //用循环语句再加上++，从而打出1~10的全部数值
//	}
//	printf("%d\n", arr[4]);//用下标的形式访问元素  arr[下标]；
//	char ch[20];//存放字符
//	float arr2[5];//存放浮点数字
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	// 5/2=2余数为1: 5/2-->2  5%2-->1  
//	int a = 5 % 2;// %用于取模(余数)
//	printf("%d\n", a);//1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//移（2进制）位操作符
//	// <<左移   >>右移 
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a << 3;//a左移3个bit位等于b
//	            //b=00000000000000000000000000001000
//			   //计算公式: 1*2^3 + 0*2^2 + 0*2^1 + 0*2^0 = 8+0+0+0 = 8
//	printf("%d\n", b);//得出b=8
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//（2进制）位操作    二进制： ...   1       1      1       1 
//	// & 按位与                ...  1*2^3   1*2^3   1*2^3   1*2^3
//	// | 按位或                ...    8       4      2       1
//	// ^ 按位异或
//	int a = 3; //011--> 1*2^1 + 1*2^0 = 2+1 = 3----2+1----0011
//	int b = 5; //5-----4+1-----0101   例： 13-----8+4+1----1101
//
//	int c = a & b;//得1
//	// &  011   0+1-0 ，1+1-1  必须两个1才得1
//	//    101
//	//得出 001
//
//	int c = a | b;//得7
//	// |  011   0+1-1 ，1+1-1  只要有一个1就得1
//	//    101
//	//得出 111
//
//	int c = a ^ b;//得6
//	//异或的计算规律：对应的二进制位相同，则为0; 对应的二进制位相异，则为1。
//	// ^  011
//	//    101
//	//得出 110
//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;// '=' 赋值     '==' 判断相等
//	a = a + 10;//方式1
//	a += 10;   //方式2    方式1和2，完全相等
//	//例
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= %= >>= <<= &= |= ^=
//	return 0;
//}

//单目操作符  （一个操作数）
//双目操作符  （两个操作数）
//三目操作符   (三个操作数)
//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;// + 双目操作符（a和b两个操作数）
//	//C语言中表示我们表示真假
//	//  0-假    非0-真
//	int a = 10;
//	printf("%d\n", a);//正常逻辑a=10为真
//	printf("%d\n", !a);//前面加'！'逻辑反逻辑，'!a'为0，是假。
//	//如果'a'='0'，则'!a'为'1'。

	//int a = -2;//单目操作符 给2取负
	//int b = -a;//给a取负
	//int c = +3;//+正号都会省略

	//int a = 9514834161055555;
	////sizeof 计算的是 变量或类型 所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));   //4  几个方式都一样
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);   //4  a的()可以省略
	////printf("%d\n", sizeof int);//error int的（）不可省略，所以是error

	//int arr[10] = { 0 };//10个整型元素的数组
	////10*sizeof(int) = 40
	//printf("%d\n", sizeof arr);//40
	////计算数组的元素个数
	//// 个数 = 数组总大小 / 每个元素的大小
	//int sz = 0;
	//sz = sizeof(arr) / sizeof(arr[0]);
	//printf("sz=%d\n", sz);//10
//	return 0;
//}

//'\0'-转移文字
//0-数字0
//'0'-->字符0，ASCII值：48

// EOF - end of file - 文件结束标志= -1

//#include<stdio.h>
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = max(a, b);
//	printf("c=%d\n", c);
//	int arr[] = { 1,2,3,4,5,6 };// 6*4=24   （1个int，4个字节-->6个数，6个int）
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //arr的总大小除于（arr[0]）一个元素的大小= 元素个数-->6
//
//	return 0;
//}
