#define _CRT_SECURE_NO_WARNINGS 1
//#include "XXXX.h"
//#pragma comment(lib,"XXXX.lib") //���뾲̬��

//���泣��  100; 'c';
//const���εĳ�����
//#define ����ı�ʶ������
//ö�ٳ���   һ���Զ������͵ķ���

//#include<stdio.h>
//enum Sex  
//{
//	MALE,  //0
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//ö��ȡֵֻ��ȡ�趨�õ�ֵ:ֻ����MALE,FEMALE,SECRET���е�ֵ
//	printf("\a\a\a\a\a\a");
//	return 0;
//}
//
//#include<stdio.h>
//enum Set
//{
//    Name,
//    Age,
//    Gender
//}s;
//int main(void)
//{
//  
//    int i = 0;
//    printf("%d\n", Name);
// 
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("Name    Age     Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18      man\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = -a;
//	int c = +b;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
////�����ṹ��
//struct Sut
//{
//    float a[5];
//    float b[5];
//    float c[5];
//    float d[5];
//    float e[5];
//}s[5] = { 0 };//�����ṹ�����
//
//int main()
//{
//
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        //����
//        scanf("%f %f %f %f %f", (s[i]).a, (s[i]).b, (s[i]).c, (s[i]).d, (s[i]).e);
//        printf("\n");
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%.1f %.1f %.1f %.1f %.1f ", (s[i]).a, (s[i]).b, (s[i]).c, (s[i]).d, (s[i]).e);
//        printf("%.1f\n", ((s[i]).a) + ((s[i]).b) + ((s[i]).c) + ((s[i]).d) + ((s[i]).e));
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    double Sut[5][5] = { 0 };
//    int i = 0;
//    int j = 0;
//    double add = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%lf %lf %lf %lf %lf", Sut[i][0], Sut[i][1], Sut[i][2], Sut[i][3], Sut[i][4]);
//   
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", Sut[i][j]);
//            add += Sut[i][j];
//        }
//        printf("%.1f\n", add);
//        add = 0;
//    }
//
//    return 0;
//}


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float add = 0;
//
//	while (i < 100)   //1 3 5 7 9  i���99
//	{
//		add += ((1.0 / i) - (1.0 / (i + 1)));
//		i += 2; 
//	}
//	printf("%f\n", add);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int add = 110;
//
//	printf("%d/100\n", add);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("***************\n");
//	printf("*****1.play****\n");
//	printf("*****0.exit****\n");
//	printf("***************\n");
//}
//
//void game()
//{
//	//1.����һ�������
//	int guess = 0;
//	int ret = rand()%100+1;
//	//2.������
//	printf("�����֣���");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ�񡷣�");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("���������������");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x < y)
//	{
//		tmp = y;
//		y = x;
//		x = tmp;
//	}
//	if (x < z)
//	{
//		tmp = z;
//		z = x;
//		x = tmp;
//	}
//	if (y < z)
//	{
//		tmp = z;
//		z = y;
//		y = tmp;
//	}
//	printf("%d %d %d\n", x, y, z);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d\n", printf("%d  \n", printf("%d\n", 669))));
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//
//#include <stdio.h>
//int PriNum(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == PriNum(i))
//			printf("����\n");
//		else
//			printf("��������\n");
//	}
//	return 0;
//}


//ʵ�ֺ����ж�year�ǲ������ꡣ
//#include <stdio.h>
//int BisTile(int x)
//{
//	if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (1 == BisTile(i))
//			printf("%d ",i);
//	}
//
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);  //�ݹ����
//	printf("%d ", n % 10);  //�ݹ���ڣ���ӡ
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//#include <stdio.h>
//int FacRial(int n)//�ݹ�
//{
//	if (n == 1) //n=1 ʱͣ����
//		return 1;
//	return n * FacRial(n - 1); //n-1 ����ֵ *n
//}
//
//int FacRial2(int n)//���õݹ�
//{
//	int i = 0;
//	int k = 1;
//	for (i = 1; i <= n; i++)
//	{
//		k = k * i;  //1*2*3*4..*n
//	}
//	return k;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = FacRial(num);//�ݹ�
//	int ret2 = FacRial2(num);//���õݹ�
//	printf("�ݹ�:%d\n���õݹ�:%d\n", ret, ret2);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include <stdio.h>
//int MyStrlen(char* str)//�ݹ�
//{
//	if (*str != '\0')
//		return 1 + MyStrlen(str+1);
//	return 0;
//}
//
//int MyStrlen2(char* str2)//�ǵݹ�
//{
//	int count = 0;
//	while (*str2 != '\0')
//	{
//		count++;
//		str2++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("�ݹ�:%d\n�ǵݹ�:%d\n", MyStrlen(arr), MyStrlen2(arr));
//	return 0;
//}


//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//����֮����������ݱ�ɣ�fedcba
//#include <stdio.h>
//void reverse_string(char* string)
//{
//	char tmp = *string;
//	if (*(string) != '\0')
//	{
//		
//		reverse_string(string + 1);
//	}
//	*(string - 1)= tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//#include <stdio.h>
//unsigned int DigitSum(unsigned int n)
//{
//	int ret = 0;
//	if (n > 9)
//		ret = DigitSum(n / 10);
//	return (n % 10) + ret; //ÿ�η�����һ����ӵĺ�
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//#include <stdio.h>
//int Squa(int x, int y) //x��y�η�
//{
//	int i =1;
//	if (y > 1)
//		i = Squa(x, y - 1);
//	return x * i;   //ÿ�η��� x��i ��˵Ľ��
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d\n", Squa(n, k));
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺 1 1 2 3 5 8 13 21 
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//#include <stdio.h>
//int Fib1(int n1)//�ݹ�
//{
//    if (n1 > 2)
//        return Fib1(n1 - 2) + Fib1(n1 - 1);
//	return 1;
//}
//
//int Fib2(int n2)//�ǵݹ�
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n2 > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n2--;
//    }
//    return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("�ݹ�:%d\n�ǵݹ�:%d\n", Fib1(n), Fib2(n));
//	return 0;
//}

//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba
//#include <stdio.h>
//void reverse_string(char* string)
//{
//	int i = 0;
//	char tmp = *string;
//	if (*(string + 1) != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	*(string - 1)= tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




////����
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	arr[0] = 99;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}



//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include <stdio.h>
//void init(int arr[],int se) //��000
//{
//	int i = 0;
//	for (i = 0; i < se; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int se) //��ӡ
//{
//	int i = 0;
//	for (i = 0; i < se; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int* left, int* right) //��ת
//{
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[3] = { 10,2,3 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int* a = &arr[0];
//	int* b = &arr[se-1];
//	print(arr, se); //��ӡ 10 2 3
//	reverse(a, b);  //��ת
//	print(arr, se);//��ӡ 3 2 10
//	init(arr, se);  //��0
//	print(arr, se);//��ӡ 0 0 0
//	return 0;
//}
//



////test.c ������Ϸ���߼�
//#include "game.h"
//
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//}
//
//void game()
//{
//	char ret = 0; //�ж���
//
//	//������������
//	char board[ROW][COL] = { 0 };
//
//	//��ʼ������Ϊȫ�ո�
//	InitBoard(board, ROW, COL);
//
//	//��ӡ����
//	DisplayBoard(board, ROW, COL);
//
//	while (1)
//	{
//		//�������
//		player_move(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//
//		//�ж���Ӯ  ���Ӯ'*'  ����Ӯ'#'  ƽ��'Q'  ����'C'
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//			break;
//
//
//		//��������
//		Computer_move(board, ROW, COL); //�������
//		DisplayBoard(board, ROW, COL);
//		
//		//�ж���Ӯ
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//		printf("���Ӯ\n");
//	else if (ret == '#')
//		printf("����Ӯ\n");
//	else
//		printf("ƽ��\n");
//
//}
//
//void test() 
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		srand((unsigned int)time(NULL));
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��Ϸʵ��
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//			
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//









#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
}

void game()
{
	//ɨ����Ϸ��ʵ��
	char mine[ROWS][COLS] = { 0 }; //'0'  ������
	char show[ROWS][COLS] = { 0 }; //'*'  �Ų���

	//��ʼ������
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//��ӡ����
	//show_board(mine, ROW, COL); //������
	//show_board(show, ROW, COL); //������

	//������
	set_mine(mine, ROW, COL);
	show_board(show, ROW, COL);

	//�Ų���
	fine_mine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("������:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������,����������!\n");
			break;
		}
	} while (input);
	return 0;
}













//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba
//#include <stdio.h>
//#include <string.h>
//void reverse_string_no_d(char* str)//���õݹ�
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = (str + len - 1);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string_d(char* str)//�ݹ�
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);    //��������ҵ��ַ�
//
//	*(str + len - 1) = '\0';    //�����ַ���'\0' ,������һ���ַ������㳤��
//	if (strlen(str + 1) >= 2)    //�ַ����������ϲż����ݹ�
//	{
//		reverse_string_d(str + 1); //�ݹ�
//	}
//
//	*(str + len - 1) = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string_no_d(arr);
//	reverse_string_d(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//#include <stdio.h>
//
//double Power(int n, int k)
//{
//	if (k > 0)
//		return n * Power(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Power(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//
//
