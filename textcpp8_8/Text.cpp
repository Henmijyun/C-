//#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <vector>
// 标准库的东西都放到std
//using namespace std;
// 1、项目中，尽量不要 using namespace std;
// 2、日常练习用 using namespace std;
// 3、项目，指定命名空间访问 + 展开常用

//namespace bit
//{
//	int rand = 0;
//}
//
//using namespace bit; 
////using 把命名空间的域展开，当作全局的变量一样。（不推荐）
////放到 namespace 中是为了避免冲突，但是用 using 展开的话，就冲突了。
////所以不建议展开
//int main()
//{
//	//printf("%d\n", rand); 
//	printf("%d\n", bit::rand); 
//	//先在局部找，再到全局里找（全局中有两个：库函数和自定义的int）
//	//为了避免冲突，创建命名空间bit
//	return 0;
//}
//
//using std::cout; //展开常用
//using std::endl;
//int main()
//{
//	//项目中：
//	std::vector<int> v; //指定命名空间访问
//	v.push_back(1); //只需要前面指定一次，下面就可以直接用了
//	v.push_back(2);
//
//	std::cout << "hello bit" << std::endl; //using展开常用前
//	cout << "hello bit" << endl; //using展开常用后
//
//
//	return 0;
//}

//
////命名空间的定义：
////test.cpp
//namespace N1
//{
//	int a; //定义变量
//	int b;
//
//	int Add(int left, int right) //定义函数
//	{
//		return left + right;
//	}
//
//	struct Node //定义类型
//	{
//		struct Node* next;
//		int val;
//	};
//
//	namespace N2 //嵌套
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//// ps：一个工程中的test.h和上面test.cpp中两个N1会被合并成一个。
////test.h
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}



//#include <iostream>
//using namespace std;
//// IO 流
//int main()
//{
//	//特点：自动识别类型 （%d%lf）
//	int i;
//	double d;
//
//	// >> 流提取
//	cin >> i >> d;
//
//	// << 流插入
//	cout << i << endl; //endl == '\n'
//	cout << d << endl;
//	cout << "hello world" << endl;
//	return 0;
//}



//#include <iostream>
//#include "Stack.h"
//using namespace std;
////缺省参数
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
////全缺省
//void TextFunc1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
////半缺省
////必须从右往左，连续缺省，不能间隔
////如下面参数中，只能先缺省c，再b，最后a
//void TextFunc2(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//
//
//
//
//
//int main()
//{
//	struct Stack st1;
//	StackInit(&st1, 100); 
//	//知道一定有100个数据要插入，直接传参100
//	//提前开100的空间，不用扩容，提高效率
//
//	struct Stack st2;
//	StackInit(&st2); 
//	//不知道多少数据，就不设定，起始默认为4个
//
//
//	Func(111);
//	Func();
//
//	TextFunc1();
//	TextFunc1(4); //从左往右给
//	TextFunc1(4,5);
//	//TextFunc1(,,6); //不支持
//	TextFunc1(4, 5, 6);
//
//
//	TextFunc2(7); 
//	TextFunc2(7, 8);
//	TextFunc2(7, 8, 9);
//	return 0;
//}
//

#include "Stack.h"

////C语言不允许同名函数存在，但是C++允许
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right) //参数类型不同
//{
//	return left + right;
//}
//
//void func(int i, char ch)
//{
//	cout << "void func(int i, char ch)" << endl;
//}
//void func(char ch, int i) //参数类型顺序不同
//{
//	cout << "void func(char ch, int i)" << endl;
//}
//
//void func1(int i)
//{}
//
//int func1(int i) //当同名函数的返回值不相同时，不构成重载，调用时也无法区分
//{}
//
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.1, 2.2) << endl;
//
//	func(1, 'a');
//	func('a', 1);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	//int& b;   //1. 引用在定义时必须初始化
//
//	int& c = a;
//	int& d = a;
//	int& e = c; //2. 一个变量可以有多个引用
//
//	int x = 10;
//	//3. 引用一旦引用一个实体，再不能引用其他实体
//	c = x; // c是x的别名？还是x赋值给c？ 
//
//	return 0;
//}


//1、做参数 —— a、输出型参数
void Swap(int& r1, int& r2)
{
	//不用引用的话，r1和r2是a和b的局部临时拷贝，不影响a和b
	//用了引用的话，r1和r2的修改会直接影响a和b
	int tmp = r1;
	r1 = r2;
	r2 = tmp;
}

typedef struct SeqList
{
	//...
}SL;


void SLPushBack(SL& s, int x) 
{}//相当于用引用代替指针，让函数内部改变也可以改变外面的值


typedef struct SListNode //单链表
{
	//..
}SLTNode,*PSLTNode; //对单链表的指针改名，再在后面的参数中使用&引用，使其不用二级指针（但理解更复杂）

typedef struct SListNode* PSLTNode;

//void SListPushBack(SLTNode*& phead, int x)
void SListPushBack(PSLTNode& phead, int x)
{
	if (phead == NULL)
	{
		phead = (SLTNode*)malloc(sizeof(SLTNode));
		//...
	}
}
int main()
{
	int a = 0, b = 2;
	Swap(a, b);

	SL sl;
	SLPushBack(sl, 1);//这样的话就可以 不用传地址 &sl
	SLPushBack(sl, 2);
	SLPushBack(sl, 3);

	SLTNode* list = NULL;
	SListPushBack(list, 1);//为了单链表可以不传二级指针（更难理解）
	SListPushBack(list, 2);
	SListPushBack(list, 3);

	return 0;
}