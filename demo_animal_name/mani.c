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

////����
//#include<stdio.h>
//int main()
//{
//	//const-�����ԣ�
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	int arr[10] = { 0 };//����[]�б����ó�����ֵ�������У��������ó���������
//	
//	const int num = 4;//int num�ǰ�num����Ϊ4�����ڱ�����ǰ�����const,���const���εĳ�����
//	printf("%d\n",num);
//	num = 8;//ǰ��int num=4�Ǳ����������С����Ǽ�const��ɳ�����ʱ��num=8�ͻ�error
//	printf("%d\n", num);
//	3;//���泣��
//	3.14;
//
//	return 0;
//}

//#include<stdio.h>
//              //#define ����ı�ʶ������ (define�궨�壩
//#define MAX 10 //����һ��������MAX�ķ��ţ�����10�Ƕ���Ϊ10����˼
//int main()
//{
//	int arr[MAX] = {0};//�ö��������ĳ���������������[]��ʹ��
//	printf("%d\n", MAX);
//	return 0;
//}

////ö�ٳ���
////ö��-һһ�о٣��Ա��У�Ů�����ܡ���ԭɫ���죬�ƣ�������
////ö�ٹؼ��� - enum
//enum Sex           //�Ա�,Ӣ�ģ��У�Ů������
//{
//	MALE,
//	FEMALE,
//	SECRET
//};               //MALE,FEMALE,SECRET��3��ֵ-ö�ٳ���
#include<stdio.h>
//int main()
//{
//	//enum Sex s = MALE;//����s�������е�
//	printf("%d\n", MALE);//ö�ٳ�������ֵ�ģ���Ĭ��˳��Ϊ0��1��2...���Ҳ��ɱ��ı�
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//enum Color  //����2������ɫ�������
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;//����Ϊcolor����ɫΪ��ɫBLUE
//	color = YELLOW;//���colorֻ��ĳ��Ʒ���ƣ��Ǳ��������Ա���
//	//BLUE = 6;//�����ö�ٶ���ĳ��������밴Ĭ��0��1��2...��ɫ�����ܱ��ģ�����error
//	return 0;
//}

//�ַ���
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"�൱��'a''b''c''\0'------'\0'�ַ���������־
//
//	char arr2[] = { 'a','b','c',0};
//	//{'a','b','c'}ֻ��'a''b''c',û�н�����־��������{}���ַ���ʱ��Ҫ����'\0'����0�������ַ�������
//
//	printf("%s\n", arr1);//��ӡ�ַ�����%s
//	printf("%s\n", arr2);
//	"hello bit";
//	"";//���ַ���
//	return 0;
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//ÿ���ַ��������Ƕ�Ӧ��ֵ#aA$hud...   ���磺a-97 A-65
//	//ASCII ���룬ÿ���ַ�����ASCII��
//	//ASCII ��ֵ��ÿ��ASCII���Ӧ��ֵ
//}
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//���ȣ�3
//	char arr2[] = { 'a','b','c'};//���ȣ�����\0�����Ϊ���ֵ������'\0'�󣬳���Ϊ3��
//	printf("%d\n", strlen(arr1));//strlen - string length - ���������ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("c:\\2013\\music\\zhou.mp3\n");//Ϊ��ֹϵͳ��'\'���Ϊת���ַ�����'\'д��'\\'
//	//��ʱ�õ��Ľ����c:\2013\music\zhou.mp3�����ĵ�ַ
//	printf("%s\n", "\"");
//	return 0;
//}

////'\ddd'
//#include<stdio.h>
//#include<string.h>  //���㳤�ȵ�ͷ�ļ�
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//����Ϊ13������Ϊʲô��13��
//	printf("%c\n", '\32');//��ʾ"��"
//	//\32 -- 32��2��8�������� �����ܳ���8��9���ֳ���7����ֵ��  3*8^1+2*8^0 = 24+2 =26   26��ASCII������"��"
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32-->10���� 26->��ΪASCII��ֵ������ַ�
//	printf("%c\n", '\132');//��ʾ"Z"
//	//\132--  1*8^2+3*8^1+2*8^0 = 64+24+2 = 90,90��ASCII���ж�Ӧ���ַ���"Z"
//	//����\32��һ���ַ�"��"
//	return 0;
//}

//'\xdd'
//#include<stdio.h>
//int main()            // '\'�����ֻ�����֣�8���ƣ������'\x'�����֣�16���ơ�
//{
//	printf("%c\n", '\x61');//ʮ�����ƣ�6 1 -- 6*16^1+1*16^0 = 96+1= 97-->ASCII��ֵΪ��'a'
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int input = 0;
//	printf("���ϱ�½��֮��\n");
//	printf("��Ҫ�ú�ѧϰ��������(1,0)���س�>:\n");
//	scanf("%d", &input);     //���뺯����ѡ������1/0
//	if (1 == input)        //if-���    һ��' = '��ʾ��ֵ������' = '��ʾ�ж��Ƿ���ȡ�
//		printf("���������۷�\n");
//	//if (0 == input)   //����Ҳ������
//	//	printf("��ѧ�ˣ��ؼ�������\n");
//
//	else                   //else-����
//		printf("�����˼�����ס��С����\n");
//
//	return 0;
//}