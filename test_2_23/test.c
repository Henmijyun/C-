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


////��ӡ����
////����7��,����6��,ÿ��+2��* 
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	//��ӡ�ϰ������
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
//	//��ӡ�°������
//	for (i = 0; i < num - 1; i++) //��ӡ num ��
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < i + 2; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < (2 * num - 3) - i * 2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//// ���0~100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָ һ��nλ�������λ���ֵ�n�η�֮�ͣ�ǡ�õ��ڸ�������
////�磺153 = 1^3+ 5^3+ 3^3 ,�� 153 ��һ�� ��ˮ�ɻ�������
//
//#include<math.h> //pow������ͷ�ļ�
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i <= 100000; i++)
//    {
//        //�ж�i�Ƿ�Ϊ������
//        //1.����i��λ�� - n
//        int n = 1;
//        int tmp = i;
//        while (tmp / 10)
//        {
//            n++;
//            tmp = tmp / 10;
//        }
//        //2.����i��ÿһλ��n�η�֮��
//        tmp = i;
//        int sum = 0;
//        while (tmp)
//        {
//            //pow���������� ��η���
//            sum += pow(tmp % 10, n);    //pow(x, y); �������2��3�η�, x��2, y��3;
//            tmp = tmp / 10;
//        }
//        //�ж�
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//
//#include <stdio.h>
//int main()
//{
//	int cola = 0; //��ˮ1Ԫ1ƿ
//	scanf("%d", &cola); //����Ǯ��,�൱�������һ�ι������ˮ��
//	int empty = cola; //��ƿ��,20Ԫ��20����ƿ
//	while (empty / 2)
//	{
//		cola += empty / 2; //ÿ�λ�������ˮ�ۼ�
//		empty = empty / 2 + empty % 2; // %2�ǵ�ƿ��Ϊ����ʱ,���һ����ƿ
//	}
//	printf("%d\n", cola);
//	return 0;
//}



////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
//
//#include <stdio.h>
//#include <string.h>
//
//void Seque(int arr[], int sz)
//{
//	int* left = arr;    //������
//	int* right = &arr[sz - 1]; //������
//	while (left < right) //ѭ��
//	{
//		int* tmp = left; //tmpÿ��ѭ�������������
//		if (*tmp % 2 == 0) //�ж��Ƿ�Ϊż��
//		{
//			while (tmp < right) //��ż���ŵ�����
//			{
//				int a = *tmp;
//				*tmp = *(tmp + 1);
//				*(tmp + 1) = a;
//				tmp++;
//			}
//			right--; //�����������ƶ�һλ
//		}
//		else
//		{
//			left++; //�����жϲ���ż��,������������һλ
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Seque(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//char*(*p)[5] = &arr;
// 
// 



//
////ģ��ʵ�ֿ⺯��strlen
//#include <stdio.h>
//#include <assert.h>
//
//unsigned int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p) //*pΪ\0ʱ����ѭ��
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
////	return 0;
////}
//
//
//
////ģ��ʵ�ֿ⺯��strcpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "XXXXXXXXXXX";
//	char arr2[] = "abcdef";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//1100 1000
//0110 0100
//1 0010 1100


//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
#include <stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int(*p)[10] = &arr;
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)  //����
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
				*((*p + i) + j) = 1;
			else if (i >= 2 && j >= 1)
				*((*p + i) + j) = *((*p + i - 1) + j - 1) + *((*p + i - 1) + j);
		}
	}
	for (i = 0; i < 10; i++) //��ӡ
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", *((*p + i) + j));
		}
		printf("\n");
	}


	return 0;
}


//#include<stdio.h>
//int main()
//{
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}