#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int Add(int x, int y)  //��Ϊreturn z�е�z��int���ͣ�����������ֵ��Addǰ��ҲҪ��int��
//	{
//		int z = 0;
//		z = x + y;
//		return z;
//	}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//} ��


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";  //���ص�/0Ҳ�ᱻ����
//	char arr2[] = "#######";
//	char arr3[20];
//	strcpy(arr2, arr1);    //strcpy()���� �����ֵ ������ ǰ���ֵ ��:arr1-->arr2
//	strcpy(arr3, "11111111111");
//	printf("%s\n%s\n", arr2,arr3);
//	//strcpy - string copy - �ַ�������
//	//strlen - string length - �ַ��������й�
//	//memset
//	//memory - �ڴ�  set - ����
//	memset(arr3, '0', 5);   //memset()�����޸��ڴ��е���Ϣ,memset( �޸ĵ�Ŀ��, �޸ĵ�����, �޸ĵ�����)
//	printf("%s\n", arr3);
//	return 0;
//}

//#include<stdio.h>
//Swap1(int x, int y) //��ֵ���� ֻ��ȡ�����ֵ����,��Ӱ�������ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//Swap2(int* pa, int* pb)  //��ַ���� ȡ�����ַ,�Ӷ�Ӱ�������ֵ
//{
//	int tmp = 0;
//	tmp = *pa;      //���ַ
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n",a,b); //��ӡ�ı�ǰ
//
//	Swap1(a, b);
//	//����Swap1���� - ��ֵ����
//	printf("a=%d b=%d\n", a, b);  
//
//	Swap2(&a, &b);
//	//����Swap1���� - ��ַ����
//
//	printf("a=%d b=%d",a,b);  //��ӡ�ı��
//	return 0;
//}

//����������1,������������0

//int is_prime(int n)
//{
//	//2 ->n-1
//	int a = 0;
//	for (a = 2; a <=sqrt(n); a++)
//	{
//		if (n % a == 0)
//			return 0;
//	}
//	return 1;
//}
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	//��ӡ100~200֮�������
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����(ֻ�ܱ�1����������)
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
//		return 1;
//	else 
//		return 0;   //��Ҫ�ں���������д�ӡ
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d ", year);   //�ں����ⲿ��ӡ
//	}
//	return 0;
//}


//            ����������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨ʵ��
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;  //�м�Ԫ���±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//#include<stdio.h>
//int main()
//{
//	//���ֲ���:��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷���,��������±�,�Ҳ����ķ���-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]); //����Ԫ�ظ���
//	//              ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���:%d\n",ret);
//	}
//	return 0;
//}

////�ı亯�������ֵ���ô�ַ���õķ�ʽ
//void Add(int* p)
//{
//	(*p)++;
//}
//#include<stdio.h>
//int main()  //���ú�����ʹ��numÿ������1
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//	Add(&num);
//	printf("num=%d\n", num);//2
//	Add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}

//#include<stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int len = 0;
//	//1
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	//2
//	printf("%d", printf("%d",printf("%d",43))); //43 2 1  �ȴ�ӡ43��Ȼ���ӡ43�ķ���ֵ��printf�����ķ���ֵ������ӡ��ֵ�ĸ���-->2 �������������ӡ1
//	return 0;
//}

//
// #include<stdio.h>
//
//int main()
//
//{
//	
//		int len = 0;
//	
//		//1
//		
//		len = strlen("abc");
//	
//		printf("%d\n", len);
//	
//		//2
//	
//		printf("%d\n", strlen("abc"));
//	
//		return 0;
//	
//}
 
//�����ں���ʱ,ǰ��Ҫ����:����������
//#include<stdio.h>
//int Add(int, int);  //��β��;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////�������ڣ������Ķ���
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
////�Ѻ���д��int main()ǰ��Ϳ��Բ�������

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