//#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <vector>
// ��׼��Ķ������ŵ�std
//using namespace std;
// 1����Ŀ�У�������Ҫ using namespace std;
// 2���ճ���ϰ�� using namespace std;
// 3����Ŀ��ָ�������ռ���� + չ������

//namespace bit
//{
//	int rand = 0;
//}
//
//using namespace bit; 
////using �������ռ����չ��������ȫ�ֵı���һ���������Ƽ���
////�ŵ� namespace ����Ϊ�˱����ͻ�������� using չ���Ļ����ͳ�ͻ�ˡ�
////���Բ�����չ��
//int main()
//{
//	//printf("%d\n", rand); 
//	printf("%d\n", bit::rand); 
//	//���ھֲ��ң��ٵ�ȫ�����ң�ȫ�������������⺯�����Զ����int��
//	//Ϊ�˱����ͻ�����������ռ�bit
//	return 0;
//}
//
//using std::cout; //չ������
//using std::endl;
//int main()
//{
//	//��Ŀ�У�
//	std::vector<int> v; //ָ�������ռ����
//	v.push_back(1); //ֻ��Ҫǰ��ָ��һ�Σ�����Ϳ���ֱ������
//	v.push_back(2);
//
//	std::cout << "hello bit" << std::endl; //usingչ������ǰ
//	cout << "hello bit" << endl; //usingչ�����ú�
//
//
//	return 0;
//}

//
////�����ռ�Ķ��壺
////test.cpp
//namespace N1
//{
//	int a; //�������
//	int b;
//
//	int Add(int left, int right) //���庯��
//	{
//		return left + right;
//	}
//
//	struct Node //��������
//	{
//		struct Node* next;
//		int val;
//	};
//
//	namespace N2 //Ƕ��
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//// ps��һ�������е�test.h������test.cpp������N1�ᱻ�ϲ���һ����
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
//// IO ��
//int main()
//{
//	//�ص㣺�Զ�ʶ������ ��%d%lf��
//	int i;
//	double d;
//
//	// >> ����ȡ
//	cin >> i >> d;
//
//	// << ������
//	cout << i << endl; //endl == '\n'
//	cout << d << endl;
//	cout << "hello world" << endl;
//	return 0;
//}



#include <iostream>
using namespace std;
//ȱʡ����
void Func(int a = 0)
{
	cout << a << endl;
}
//ȫȱʡ
void TextFunc1(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}
//��ȱʡ
//���������������ȱʡ�����ܼ��
//����������У�ֻ����ȱʡc����b�����a
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
	TextFunc1(4); //�������Ҹ�
	TextFunc1(4,5);
	//TextFunc1(,,6); //��֧��
	TextFunc1(4, 5, 6);


	TextFunc2(7); 
	TextFunc2(7, 8);
	TextFunc2(7, 8, 9);
	return 0;
}


