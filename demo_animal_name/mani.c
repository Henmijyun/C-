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
	printf("����ˤ��ϡ�����\n");//�ձ��Z�Ǥ���������ʤ���
	return 0;

}*/
/*int main()
{
	char cjx = 'A';         //char--�ַ�����   �����Ӣ��cjxֻ�Ǵ�������ĳ����
	printf("%c\n",cjx);     // %c--��ӡ�ַ���ʽ������   \n--���е���˼
	 %f--��ӡ�������֣���С����
	   %p--�Ե�ַ����ʽ��ӡ
	   %x--��ӡʮ����������
	   %o....
	//short int   //������

	int age = 20;           //����
	printf("%d\n", age);    // %d--��ӡ����ʮ��������

	//long ������
    long  nom = 11100;
	printf("%d\n", nom);
	
	float f = 5.2;     //�����ȸ�����
	printf("%f\n", f);
	
	double d = 3.14;    //˫���ȸ�����
	printf("%lf\n", d);//��ӡ˫���ȸ�����ʱ����%f���ܻᶪʧ���ȣ�������%lf��Ϊ����

	//sizeof�����������������������Ĵ�С
	printf("%d\n", sizeof(char)); //1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));// 4/8 C���Ա�׼sizeof(long) >��= sizeof(int) ����,4=4 8>4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	return 0; 
}*/

//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16����λ���������20�����ֵ
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С������ֵ�����f��ָ��95.6�����ֵ��float����
//	char ch = 'w';
//	return 0;
//}


//�������������ֲ���ȫ�֣�
/*int num1 = 20;//ȫ�ֱ���-�����ڴ����{}֮��ı���
int main()
{
	int num1 = 10;//�ֲ�����-�����ڴ����{}�ڲ��ı��� ;������ͬ�Ļ���������ȥ����ֱ����ʾȫ��
	printf("%d\n", num1);//�ֲ���ȫ�ֱ��������־�����Ҫ��ͬ����������bug��
	                 //���ֲ���ȫ�ֱ���������ͬʱ���ֲ�������ʾ��
	return 0;
}*/

//����������ֵ�ĺ�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//
//	/*��������-ʹ�����뺯��scanf   
//	vs2019�м�(_s) 
//	scanf_s() �Ĺ�����Ȼ��scanf() ��ͬ����ȴ�� scanf() ��ȫ��
//	��Ϊ scanf_s() ����ԡ� scanf()�ڶ�ȡ�ַ���ʱ�����߽磬���ܻ�����ڴ�й¶�����������Ƶġ�
//	scanf_s()���ڶ�ȡ�ַ���ʱ�������ṩһ�������Ա�������ȡ����λ�ַ����Է�ֹ�����*/
//
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);//%dǰ��ģ�sum=�����ڵ�������ʾ����
//	return 0;
//}

//������������
//#include<stdio.h>
//int global = 2020;//ȫ�ֱ���������������������
//void test()
//{
//	printf("test()--%d\n", global);//���ﲻ���У�ֻ������
//}
//int main()
//{
//	{
//		int num = 0;  //�ֲ��������������ǣ��ֲ��������ڵ�{}����������ã�
//		printf("num=%d\n", num);//�����printf("num=%d\n", num);�Ƶ�����int num = 0;��{}���⣬��������
//	}
//	printf("global=%d\n", global);
//	test();//��main�������void���������Ի�ִ��
//
//	//���� extern�ⲿ���ŵ�(����Դ�ļ����ȫ�ֱ���)
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

////��������
////�ֲ�������������������{}����ģ���ȫ�ֱ����������������������������������
//#include<stdio.h>
//int main()
//{
//	{//�������ڿ�ʼ
//		int a = 10;
//		printf("a=%d\n", a);//ok   
//	}//�������ڽ���
//	printf("a=%d\n", a);//error(����)
//	return 0;
//}
