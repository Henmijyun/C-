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



//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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



//�������
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <10; j++)
//		{
//			if (j == 0)  //��ֵ���������
//				arr[i][j] = 1;
//			if ((i == j) && (j != 0)) //��ֵ���ҵ�б��
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)  //��ֵ�м䲿��
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			if (arr[i][j] != 0)  //��ӡ��Ϊ0�Ĳ���
//				printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//








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
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)  //����
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//				*((*p + i) + j) = 1;
//			else if (i >= 2 && j >= 1)
//				*((*p + i) + j) = *((*p + i - 1) + j - 1) + *((*p + i - 1) + j);
//		}
//	}
//	for (i = 0; i < 10; i++) //��ӡ
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
//

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



//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//#include <stdio.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)//a��d�ģ�ASCIIֵ
//	{
//		//�ж�Ϊ����1������0����Ϊ3ʱ��֪������
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer == 'c') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//
//


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//ÿ���˶�������1��5��
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) )
//							if (a * b * c * d * e == 120) //ֻ���ֹ�һ�ε�ʱ��
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)  //����
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//				*((*p + i) + j) = 1;
//			else if (i >= 2 && j >= 1)
//				*((*p + i) + j) = *((*p + i - 1) + j - 1) + *((*p + i - 1) + j);
//		}
//	}
//	for (i = 0; i < 10; i++) //��ӡ
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//int NumberOf1(int n)
//{
//	unsigned int m = n;
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//			count++;
//		m /= 2;
//	}
//	return count;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include <stdio.h>
//void test(int(*p)[3])
//{
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//	}
//}
//int main()
//{
//	int arr[2][3] = { {1,2,3},{5,6,7} };
//	test(arr);
//	return 0;
//}
//




//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//
//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//void Spin(char* p, int k)
//{
//	assert(p);
//	int len = strlen(p); //Ԫ�ظ���
//	char* lift = p + k - 1; //�����꣺������ת���󡯵����ұ�
//	char* right = p + len - 1; //�����꣺��������ұ�
//	char tmp = 0;
//	while (k) //��תk��
//	{
//		tmp = *lift;
//		*lift = *right;
//		*right = tmp;
//		lift--;
//		right--;
//		k--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	Spin(arr, k);
//	printf("%s", arr);
//	return 0;
//}



//���Ͼ���
//��һ�����־���
//�����ÿ�д������ǵ����ģ�
//������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

//
//#include <stdio.h>
//#include <assert.h>
//
//#define ROW 3 //�������
//#define CRO 3 //�������
//
//int Find(int arr[ROW][CRO], int *const row, int* const cro,const int n)
//{
//	assert(row && cro && arr);
//	int x = 0;   //һ�е�����
//	int y = CRO - 1;  //һ�е�����
//	while (x < ROW && y >= 0)  //�������£�����ѭ����
//	{
//		if (arr[x][y] < n)  //�������£�һ�����ж�
//			x++;
//		else if (arr[x][y] > n) //��������һ�����ж�
//			y--;
//		else
//		{
//			*row = x;
//			*cro = y;
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int arr[ROW][CRO] = { {1,2,3},{4,5,6},{7,8,9} };
//	int num = 0;
//	int x = 0; //������
//	int y = 0; //������
//	scanf("%d", &num);
//	int ret = Find(arr, &x, &y, num);
//	if (1 == ret)
//		printf("�ҵ��ˣ��±��ǣ�%d,%d��\n", x, y);
//	else
//		printf("û�ҵ�.\n");
//	return 0;
//}


//
//#include <stdio.h>
//void my_while(int arr[], int n, int* i)
//{
//    int a = 0;
//    while (n)
//    {
//        a = *i;
//        scanf("%d", &arr[a]);
//        *i += 1;
//        n--;
//    }
//}
//void Sequ(int arr[], int sz)
//{
//    //ð������
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int flag = 1;//������һ��Ҫ����������Ѿ�����
//        //ÿһ��ð������
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                flag = 0; //���������������ʵ����ȫ����
//            }
//        }
//        if (flag == 1)
//            break;//���Ż�����һ���Ѿ����������£����涼�������
//    }
//}
//void print(int* p, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int n = 0; //1
//    int m = 0;  //2
//    int i = 0;
//    int arr[1000] = { 0 }; //3 5 2
//    scanf("%d %d", &n, &m);
//    my_while(arr, n, &i);
//    my_while(arr, m, &i);
//    Sequ(arr, n + m);
//    print(arr, n + m);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int arr[50] = { 0 };
//    int num = 0;
//    int del = 0;
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    scanf("%d", &num); //��������
//    for (i = 0; i < num; i++)
//    {
//        scanf("%d", &arr[i]); //����
//    }
//    scanf("%d", &del); //ɾ������
//    for (i = 0; i < num; i++)
//    {
//        if (arr[i] == del) //�������Ҫɾ������
//        {
//            count++; //�ۼ�ɾ���ĸ���
//            continue; //��������ѭ��
//        }
//        arr[j] = arr[i]; //��ɾ����������ֵ��arr[j]
//        j++; //��0��ʼ��ÿ�θ�ֵ��++
//    }
//    for (i = 0; i < num - count; i++) //��ӡ������-�ۼ�ɾ����������
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    int i = 0;
//    while (~scanf("%d", &num))//��������
//    {
//        int x = 0; //������
//        int y = 0; //������
//        y = num - 1;
//        for (i = 0; i < num; i++) //ÿһ��
//        {
//            int j = 0;
//            for (j = 0; j < num; j++) //ÿһ�ж�Ӧ�����
//            {
//                if (j == x) //�������ӡ*
//                    printf("*");
//                else if (j == y) //�������ӡ*
//                    printf("*");
//                else
//                    printf(" "); //�м�λ�ô�ӡ�ո�
//            }
//            x++; //�����ƶ�
//            y--; //ͬ��
//            printf("\n"); //����
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//void menu()
//{
//    printf("*********************\n");
//    printf("****1.add   2.sub****\n");
//    printf("****3.mul   4.div****\n");
//    printf("****    0.exit   ****\n");
//    printf("*********************\n");
//}
//void Calc(int(*pf)(int, int))  //�� ����ָ�� ���մ������� ����
//{
//    int x = 0;
//    int y = 0;
//    printf("����������������>:");
//    scanf("%d %d", &x, &y);
//    int ret = pf(x, y);      //�ص�����
//    printf("���Ϊ %d\n", ret);
//}
//int main()
//{
//    //������ - �������ͱ����ļӣ������ˣ���
//    //a&b a^b a|b a<<b a>>b ....
//    int input = 0;
//    do
//    {
//        int ret = 0;
//        menu();
//        printf("��ѡ��>");
//        scanf("%d", &input);
//        switch (input) //�� �ص����� ��ʵ��������룬�����
//        {
//        case 1:
//            Calc(Add);
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("ѡ�����������ѡ��\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}





//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.

//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void revrs_arr (char* p, int sz)//ð������ָ�ԭ��
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				char tmp = *(p + j);
//				*(p + j ) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//	}
//}
//
//int jud_rot(char* p1, char* p2) //�жϼ���Ƿ���ͬ
//{
//	int len1 = strlen(p1);
//	int len2 = strlen(p2);
//	int i = 0;
//	if (len1 != len2)
//		return 0;
//	//����ת
//	for (i = 0; i < len1 - 1; i++)
//	{
//		int j = 0; //����ð������
//		for (j = 0; j < len1 - 1 - i; j++)//���գ�DCBAA
//		{
//			char tmp = *(p1 + j);
//			*(p1 + j) = *(p1 + j + 1);
//			*(p1 + j + 1) = tmp;
//			if (strcmp(p1, p2) == 0)//���ʱ����
//			{
//				//��ԭ
//				revrs_arr(p1, len1);
//				return 1;
//			}
//		}
//	}
//	//��ԭ
//	revrs_arr(p1, len1);
//	//����ת
//	for (i = 0; i < len1 - 1; i++)
//	{
//		int j = 0; //����ð������
//		for (j = len1 - 1 - i; j > 0; j--)//���գ�DCBAA
//		{
//			char tmp = *(p1 + j);
//			*(p1 + j) = *(p1 + j - 1);
//			*(p1 + j - 1) = tmp;
//			if (strcmp(p1, p2) == 0) //���ʱ����
//			{
//				//��ԭ
//				revrs_arr(p1, len1); 
//				return 1;
//			}
//		}
//	}
//	//��ԭ
//	revrs_arr(p1, len1);
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[20] = { 0 };
//	while (~scanf("%s", arr2))
//	{
// 		int ret = jud_rot(arr1, arr2);
//		if (1 == ret)
//			printf("arr2����arr1��ת����\n");
//		else if (0 == ret)
//			printf("arr2������arr1��ת����\n");
//	}
//	return 0;
//}





//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
//
//#include <stdio.h>
//
//int cmp_int(const void* e1, const void* e2)//�Ƚ�int���͵ĺ���
//{
//	return *(int*)e1 - *(int*)e2; //��������Ĳ�
//}
//
//void my_swap(char* p1, char* p2, int width)//��������
//{
//	int i = 0;
//	for (i = 0; i < width; i++) //ÿ��char���ͽ��н���
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//void print(int* base, int sz) //��ӡ
//{
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(base + i));
//	}
//}
//void my_qsort(void* base, int sz, int width, 
//	         int (*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width,
//				  (char*)base + (j + 1) * width) > 0) //����ֵ > 0 ���н���
//			{
//				//����
//				my_swap((char*)base + j * width, 
//					   (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp_int); //����
//	print(arr, sz); //��ӡ
//	return 0;
//}



//��ϰʹ�ÿ⺯����qsort����������͵�����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
	double result;
};

int cmp_char(const void* e1, const void* e2)//�Ƚ�char���͵ĺ���
{
	// ���������ַ����Ա�strcmp�����ķ���ֵ
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name); 
}

int cmp_int(const void* e1, const void* e2)//�Ƚ�int���͵ĺ���
{
	// ��������Ĳ�
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age; 
}

int cmp_double(const void* e1, const void* e2)//�Ƚ�double���͵ĺ���
{
	//��������Ĳ�
	return ((struct Stu*)e1)->result - ((struct Stu*)e2)->result;
}

void test_struct()
{
	struct Stu arr[3] = { {"wang", 22, 68.4},
				{"cao", 26, 60.0},{"zhang", 23, 77.5} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//char
	qsort(arr, sz, sizeof(arr[0]), cmp_char);
	printf("%s %s %s\n", arr[0].name, arr[1].name, arr[2].name);
	//int
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("%d %d %d\n", arr[0].age, arr[1].age, arr[2].age);
	//double
	qsort(arr, sz, sizeof(arr[0]), cmp_double);
	printf("%.2f %.2f %.2f\n", arr[0].result, arr[1].result, arr[2].result);
}

int main()
{
	test_struct();
	return 0;
} 