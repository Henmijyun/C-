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
//
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//
//int main(void)
//{
//	int input = 0;
//	printf("���ϱ�½��֮��\n");
//	printf("��Ҫ�ú�ѧϰ��������(1,0)���س�>:\n");
//	scanf("%d", &input);     //���뺯����ѡ������1/0
//	if (1 == input)        //if-���    һ��' = '��ʾ��ֵ������' = '��ʾ�ж��Ƿ���ȡ�
//		printf("���������۷�\n");
//	else if (0 == input)   //����Ҳ������
//		printf("��ѧ�ˣ��ؼ�������\n");
//
//	else                   //else-����
//		printf("�����˼�����ס��С����\n");
//	system("pause");
//	return 0;
//}

//while���
//#include<stdio.h>
//int main()
//{
//	printf("�������\n");
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//			line++;
//	}
//	if (line >= 20000)    //һֱѭ����ֱ��>��=20000
//		printf("��offer\n");
//	
//	return 0;
//}

//����
//#include<stdio.h>       //printf��scanf��Щ�ǿ⺯����C���Կ��Դ���
//int add(int x, int y)  //int add �������Զ��庯�����Լ���Ƶ�
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

////����
//#include<stdio.h>
//int main()
//{
//	     //����һ�����10���������ֵ�����
//	
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//�±��0��ʼ��[n]���±�=n-1
//	//0~9  
//	int i = 0;
//	while (i < 10)     
//	{
//		printf("%d ", arr[i]);
//		i++;                  //��ѭ������ټ���++���Ӷ����1~10��ȫ����ֵ
//	}
//	printf("%d\n", arr[4]);//���±����ʽ����Ԫ��  arr[�±�]��
//	char ch[20];//����ַ�
//	float arr2[5];//��Ÿ�������
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	// 5/2=2����Ϊ1: 5/2-->2  5%2-->1  
//	int a = 5 % 2;// %����ȡģ(����)
//	printf("%d\n", a);//1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	// <<����   >>���� 
//	int a = 1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	int b = a << 3;//a����3��bitλ����b
//	            //b=00000000000000000000000000001000
//			   //���㹫ʽ: 1*2^3 + 0*2^2 + 0*2^1 + 0*2^0 = 8+0+0+0 = 8
//	printf("%d\n", b);//�ó�b=8
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//��2���ƣ�λ����    �����ƣ� ...   1       1      1       1 
//	// & ��λ��                ...  1*2^3   1*2^3   1*2^3   1*2^3
//	// | ��λ��                ...    8       4      2       1
//	// ^ ��λ���
//	int a = 3; //011--> 1*2^1 + 1*2^0 = 2+1 = 3----2+1----0011
//	int b = 5; //5-----4+1-----0101   ���� 13-----8+4+1----1101
//
//	int c = a & b;//��1
//	// &  011   0+1-0 ��1+1-1  ��������1�ŵ�1
//	//    101
//	//�ó� 001
//
//	int c = a | b;//��7
//	// |  011   0+1-1 ��1+1-1  ֻҪ��һ��1�͵�1
//	//    101
//	//�ó� 111
//
//	int c = a ^ b;//��6
//	//���ļ�����ɣ���Ӧ�Ķ�����λ��ͬ����Ϊ0; ��Ӧ�Ķ�����λ���죬��Ϊ1��
//	// ^  011
//	//    101
//	//�ó� 110
//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;// '=' ��ֵ     '==' �ж����
//	a = a + 10;//��ʽ1
//	a += 10;   //��ʽ2    ��ʽ1��2����ȫ���
//	//��
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *= %= >>= <<= &= |= ^=
//	return 0;
//}

//��Ŀ������  ��һ����������
//˫Ŀ������  ��������������
//��Ŀ������   (����������)
//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;// + ˫Ŀ��������a��b������������
//	//C�����б�ʾ���Ǳ�ʾ���
//	//  0-��    ��0-��
//	int a = 10;
//	printf("%d\n", a);//�����߼�a=10Ϊ��
//	printf("%d\n", !a);//ǰ���'��'�߼����߼���'!a'Ϊ0���Ǽ١�
//	//���'a'='0'����'!a'Ϊ'1'��

	//int a = -2;//��Ŀ������ ��2ȡ��
	//int b = -a;//��aȡ��
	//int c = +3;//+���Ŷ���ʡ��

	//int a = 9514834161055555;
	////sizeof ������� ���������� ��ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(a));   //4  ������ʽ��һ��
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);   //4  a��()����ʡ��
	////printf("%d\n", sizeof int);//error int�ģ�������ʡ�ԣ�������error

	//int arr[10] = { 0 };//10������Ԫ�ص�����
	////10*sizeof(int) = 40
	//printf("%d\n", sizeof arr);//40
	////���������Ԫ�ظ���
	//// ���� = �����ܴ�С / ÿ��Ԫ�صĴ�С
	//int sz = 0;
	//sz = sizeof(arr) / sizeof(arr[0]);
	//printf("sz=%d\n", sz);//10
//	return 0;
//}

//'\0'-ת������
//0-����0
//'0'-->�ַ�0��ASCIIֵ��48

// EOF - end of file - �ļ�������־= -1

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
//	int arr[] = { 1,2,3,4,5,6 };// 6*4=24   ��1��int��4���ֽ�-->6������6��int��
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //arr���ܴ�С���ڣ�arr[0]��һ��Ԫ�صĴ�С= Ԫ�ظ���-->6
//
//	return 0;
//}
