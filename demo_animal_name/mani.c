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

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int input = 0;
//	printf("考上北陆大之后\n");
//	printf("你要好好学习吗？请输入(1,0)按回车>:\n");
//	scanf("%d", &input);     //输入函数，选择输入1/0
//	if (1 == input)        //if-如果    一个' = '表示赋值，两个' = '表示判断是否相等。
//		printf("走上人生巅峰\n");
//	//if (0 == input)   //这种也可以用
//	//	printf("别学了，回家卖红薯\n");
//
//	else                   //else-其他
//		printf("最是人间留不住啊小伙子\n");
//
//	return 0;
//}