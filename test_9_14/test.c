#define _CRT_SECURE_NO_WARNINGS 1

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
//
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//#include<stdio.h>
//void print(int n)      //������:123 Ϊ����
//{
//	if (n > 9)         //��һ��123>9��ȥ,123/10=12,�ڶ���12>9�ٽ�ȥ,12/10=1,�����ν�ȥ1!>9,�����ݹ�
//	{
//		print(n / 10); //������ʱn=1����,1%10=1,��ӡ1,������һ��12%10=2,��ӡ2,�ٷ�����һ��123%10=3,��ӡ3
//	}
//	printf("%d ", n % 10);//���Եó��Ľ��Ϊ1 2 3
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
////int my_strlen(char* str)   //����Զ��庯������ʵ�����ַ�������,����������ʱ����,���Ҳ��ǵݹ�
////{
////	int count = 0;
////	while (*str != '\0') //��Ϊ����Ԫ�ؿ�ʼ,b����\0,�ͼ�¼һ��,bit��3��,count��0�ӵ���3,�ٷ���count��ֵ
////	{
////		count++;
////		str++;     //str++ÿ+һ��,������һ����λ b -> i -> t -> \0
////	}
////	return count;
////}
//int my_strlen(char* str)  //�ݹ�ķ���
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////�Ѵ��»�С
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);  //���ַ������ȵ� �⺯��
//	//printf("%d\n", len);
//	//ģ��ʵ��һ�����ַ������ȵ� �Զ��庯��
//	int len = my_strlen(arr); //arr������,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);  
//	return 0;
//}
//
//#include<stdio.h>
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;        //����5��5>1,��ȥ5*Fac2,��ȥ5-1=4��4>1,�ٽ�ȥ4*Fac2���������5-4-3-2-1��
//	else
//		return n * Fac2(n - 1);  //��1=1����1�������ݹ飬���Ϸ���ֵ,ʹ1*2*3*4*5����÷��ؼ�����
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d", &n);
//
//	ret1 = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret1);
//
//	ret2 = Fac2(n);//�ݹ�ķ�ʽ
//	printf("%d\n", ret2);
//	return 0;
//}



////쳲��������У�1 1 2 3 5 8 13 21 34 55... ǰ��������֮�͵��ڵ���������
////int count = 0;
////int Fid(int n)
////{
////	if (n == 3)//���Ե�����쳲��������ļ������
////	{
////		count++;
////	}
////	if (n <= 2)
////		return 1;
////	else
////		return Fid(n - 1) + Fid(n - 2);//��ʱ�õݹ�Ͳ��Ǳ����ķ�����
////		
////}
//int Fid(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	//TDD--������������
//	ret = Fid(n);
//	printf("ret = %d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}
//
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

int Fan()
{
	printf("############��###########\n");
	printf("############��###########\n");
	printf("############��###########\n");
	printf("############��###########\n");
	printf("####1.�_ʼ����2.�K���###\n\n");
	printf("����1��2���x��Ǥ�������\n");
}
#include<stdio.h>
int main()
{
	int a = 0;
	int a1 = 0;
	Fan();
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("���`���_ʼ\n\n�ä����Ԅe���x��Ǥ�������:\n##1.�С���2.Ů##\n");
		while (a ==1 )
		{
			if (a1 == 1)
			{
				printf("#111111111\n");
				break;
			}
			else if (a1 == 2)
			{
				printf("##122222\n");
				break;
			}
			else
			{
				printf("�Ԅe�⤦һ���������Ƥ���������\n##1.�С���2.Ů##\n");
				goto again;

			}

		}

		break;
	case 2:
		printf("�K���");
		break;
	default:
		printf("�`�꤬�k���������⤦һ���������Ƥ���������");
		break;

	}

	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 30;
//	int c = a - b;
//	int d = a % b;
//	printf("a�΂���%d�Ǥ���\nb�΂���%d�Ǥ���\nc�΂���%d�Ǥ���\nd�΂���%d�Ǥ���\n", a, b, c, d);
//	return 0;
//}


123454