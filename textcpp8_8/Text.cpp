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



#include <iostream>
using namespace std;
//缺省参数
void Func(int a = 0)
{
	cout << a << endl;
}
//全缺省
void TextFunc1(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}
//半缺省
//必须从右往左，连续缺省，不能间隔
//如下面参数中，只能先缺省c，再b，最后a
void TextFunc2(int a, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}

struct Stack
{
	int* _a;
	int _top;
	int _cap
};
int main()
{
	Func(111);
	Func();

	TextFunc1();
	TextFunc1(4); //从左往右给
	TextFunc1(4,5);
	//TextFunc1(,,6); //不支持
	TextFunc1(4, 5, 6);


	TextFunc2(7); 
	TextFunc2(7, 8);
	TextFunc2(7, 8, 9);
	return 0;
}


