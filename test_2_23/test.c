#define _CRT_SECURE_NO_WARNINGS 1


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int bottle = 0;//��ƿ
//	int soda = 0;//��ˮ
//	
//	scanf("%d", &money);
//	bottle = money;
//	soda = money;
//	while (bottle >= 2)
//	{
//		bottle = bottle / 2 + (bottle % 2);
//		 1
//	}
//	printf("%d\n", soda);
//	return 0;
//}



//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = (i / 100) % 10;
//		d = (i / 1000) % 10;
//		e = (i / 10000) % 10;
//		if (i >= 100 && i < 1000 && i == (a * a * a) + (b * b * b) + (c * c * c))
//		{
//			printf("%d ", i);
//		}
//		else if (i >= 1000 && i < 10000 
//			&& i == (a * a * a * a) + (b * b * b * b) + (c * c * c * c) + (d * d * d * d)
//			)
//		{
//			printf("%d ", i);
//		}
//		else if (i >= 10000 && i < 100000 
//			&& i == (a * a * a * a * a) + (b * b * b * b * b) + (c * c * c * c * c) 
//			+ (d * d * d * d * d) + (e * e * e * e * e)
//			)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ӡ����
//7��,ÿ��+2��*

//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++) //��ӡnum��
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < num - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//for (i = 0; i < num - 1; i++) 
//	//{
//
//	//	int j = 0;
//	//	//��ӡ�ո�
//	//	for (j = 1; j < i * 2 + 1; j++)
//	//	{
//	//		printf(" ");
//	//	}
//	//	//��ӡ*
//	//	for (j = 0; j < 2*(num-1) - i; j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//
//
//	return 0;
//}

//
//
////����  abc 123.  ==>  123. abc (���Ų���)
//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//    char tmp = 0;
//    while (left < right)
//    {
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    //���������
//    gets(arr); //���ո񲻻��������    ���ߣ�scanf("%[^\n]",arr);����д������\n�Ż�ֹͣ�����Զ��ո�
//    //������ת��
//    //1.�ַ������巭ת
//    int len = strlen(arr);//�ַ�������(Ԫ�ظ���)���������ַ������һλ
//    reverse(arr, arr + len - 1);//���������ַ���
//    //printf("%s\n", arr);
//
//    //2.ÿ����������
//    char* start = arr;
//    while (*start) //һֱ��\0Ϊֹ
//    {
//        char* end = start; //end��������һ�����ʵ����
//        while (*end != ' ' && *end != '\0')
//        {
//            end++;  //�������ұ�
//        }
//        reverse(start, end - 1);//����һ������
//        if (*end == ' ')
//            start = end + 1;  //��������һ�����ʵ����
//        else
//            start = end;
//    }
//    printf("%s\n", arr);
//    return 0;
//}


////�Ƚ������������Ĵ�С
//#include <stdio.h>
//#include <math.h>
//#include <float.h>
//
//#define EPSION 0.0000001
//
//int main()
//{
//	//double x = 1.0;
//	//double y = 0.1;
//	//printf("%.50f\n", x);
//	//printf("%.50f\n", y);
//	//printf("%.50f\n", x - 0.9);//�������ڴ洢��ʱ�򣬻ᷢ�����ȶ�ʧ
//	//printf("%.50f\n", y);
//
//	//if ((x - 0.9) == y) //err ���ֱȽϷ�ʽ�Ǵ����
//	//	printf("you can see me!\n");
//	//else
//	//	printf("oops!\n");  //���oops
//
//	//�ȽϷ�����
//	// 
//	//����1��  �� �Զ�����С���� ���Ƚ�
//	//����#define EPSION 0.0000001 �����ֵ���о��ȷ�Χ�Ƚϣ���ΧΪ������EPSION
//	//���: EPSION > ����ֵ�Ĳ� > -EPSION ,����Ϊ���������
//	//if (((x - 0.9) - y) > -EPSION && ((x - 0.9) - y) < EPSION)
//	//	printf("you can see me!\n"); //���you can see me!
//	//else
//	//	printf("oops!\n");
//
//	//����2��  �� �⺯��������С���� ���Ƚ�
//	//fabs()����:�����ֵ ; ͷ�ļ�: math.h
//	//DBL_EPSILON ��С����; �������͵�ȡֵ��Χ�� ͷ�ļ�: float.h
//	//if (fabs((x - 0.9) - y) < DBL_EPSILON)
//	//	printf("you can see me!\n");  //���you can see me!
//	//else
//		//printf("oops!\n");
//	//�Ƚ������������Ĺ�ʽΪ:
//	//if (fabs((x - y) < DBL_EPSILON) Ϊ��,(�����������Ĳ�,С����С����ֵ) �������������� ��ȵ�
//	//
//
//
//	double a1 = 0.000000000000000000001;
//	double a2 = 0.0000000000001;
//	double b = 0.0;
//	//fabs(a-b) < DBL_EPSILON   ��0.0�ȽϵĻ�,�൱��a-0.0
//	//fabs(a-0.0) < DBL_EPSILON  a-0.0 ,�൱�� a����
//	//��: fabs(a) < DBL_EPSILON
//	if (fabs(a1) < DBL_EPSILON)
//		printf("a1��0.0���\n");
//	else
//		printf("a1��0.0�����\n");
//	//
//	if (fabs(a2) < DBL_EPSILON)
//		printf("a2��0.0���\n");
//	else
//		printf("a2��0.0�����\n");
//
//	return 0;
//}


////�Ƚϸ�������0.0�Ĵ�С
//#include <stdio.h>
//#include <math.h>
//#include <float.h>
//
//int main()
//{
//	double a1 = 0.000000000000000000001;
//	double a2 = 0.0000000000001;
//	double b = 0.0;
//	//fabs(a-b) < DBL_EPSILON   ��0.0�ȽϵĻ�,�൱��a-0.0
//	//fabs(a-0.0) < DBL_EPSILON  a-0.0 ,�൱�� a����
//	//��: fabs(a) < DBL_EPSILON
//	if (fabs(a1) < DBL_EPSILON)
//		printf("a1��0.0���\n");
//	else
//		printf("a1��0.0�����\n");
//	//
//	if (fabs(a2) < DBL_EPSILON)
//		printf("a2��0.0���\n");
//	else
//		printf("a2��0.0�����\n");
//
//	return 0;
//}

//�Ƚϸ�������0.0�Ĵ�С
#include <stdio.h>
#include <math.h>
#include <float.h>

int main()
{
	double a1 = 0.000000000000000000001;
	double a2 = 0.0000000000001;
	double b = 0.0;
	//fabs(a-b) < DBL_EPSILON   ��0.0�ȽϵĻ�,�൱��a-0.0
	//fabs(a-0.0) < DBL_EPSILON  a-0.0 ,�൱�� a����
	//��: fabs(a) < DBL_EPSILON
	if (fabs(a1) < DBL_EPSILON)
		printf("a1��0.0���\n");
	else
		printf("a1��0.0�����\n");
	//
	if (fabs(a2) < DBL_EPSILON)
		printf("a2��0.0���\n");
	else
		printf("a2��0.0�����\n");

	return 0;
}