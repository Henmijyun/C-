#define _CRT_SECURE_NO_WARNINGS 1
//int g_val = 2021;
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = % d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;//4���ֽڣ�32��bitλ--->00000000000000000000000000000000(32��)
//	int b = ~a; // ~ ���������ƣ�λȡ�� ����1010 -->0101 ��1��0����ı䣩     b���з��ŵ�����
//	//��λȡ������32�� 1��b=32��1
//	printf("%d\n", b);// -1    ��Ϊb���з��ŵ����ͣ����Ե�һλ���Ƿ���λ��������1ʱ�为�ţ�-��
//	    //������洢����ʱ���õ��� ���룬   ����ʹ��ʱ����ӡ�����������ԭ�롣
//	
//	ԭ�롢���롢����       
//	�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	 ԭ�� -> ���� -> ����
//	ԭ��-> ����λ���䣬����λ�ð�λȡ�� --> ����
//	����-> ��һ��+1��--> ����
//	���������ǣ�����-1 �� ��λȡ�� = ԭ��
//	����       11111111111111111111111111111111
//		       11111111111111111111111111111110
//	����λ����  10000000000000000000000000000001
//	����λ1=���� 0000000000000000000000000000001=1  ���Եó�b= -1
//	return 0;
//}
//#include<stdio.h>
//int d(int x, int y)
//{
//	if (x > 10)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 8;
//	int b = 50;
//	int c = 0;
//	c = d(a , b);
//	//scanf("%d%d", &a,&b);
//
//	printf("c=%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ��(b��a)����++(a��+1)
//	int b = ++a;//ǰ��++����++��a+1������ʹ��
//	//int b = a--;//a=9,b=10
//	//int b = --a;//a=9,b=9
//	printf("a=%d b=%d\n", a, b);//����++��a=11,b=10�� ǰ��++��a=11��b=11��
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//ԭ��3.14��double���͵ģ��������������ͣ�ǿ������ת������3.14ǿ�Ʊ�int����
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	// ��--0   ��--��0
//	// && - �߼���
//	int a = 3;
//	int b = 5;
//	int c = a && b;//���aΪ�棬�ұ�bҲΪ�棬����cҲΪ�棨ֻҪa��b����һ��Ϊ�٣�0������ôcҲΪ�٣�0����
//	printf("c=%d\n", c);// cΪ��-->1   cΪ��-->0
//
//	// ||-�߼���
//	int e = 0;
//	int f = 2;
//	int g = e || f;//ֻҪe �� f����һ��Ϊ�棬��gΪ�档
//	printf("g=%d\n", g);//g=1   e��f��Ϊ�٣�0����g��Ϊ��
//	return 0;
//}
#include<stdio.h>
void test()
{
	int a = 1;
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	return 0;
}







//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];// [] - �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);// () - �������ò�����
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int a = 10; //exp1?exp2:exp3;    ���ʽ1Ϊ�棬���Ϊ���ʽ2�����ʽ1Ϊ�٣���Ϊ���ʽ3��
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//a>bΪ�棬max��a��a>bΪ�٣�max���b��
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max=%d\n", max);
//	return 0;
//}
