#define _CRT_SECURE_NO_WARNINGS 1

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