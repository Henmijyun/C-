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

#include<stdio.h>
Swap1(int x, int y) //��ֵ���� ֻ��ȡ�����ֵ����,��Ӱ�������ֵ
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
Swap2(int* pa, int* pb)  //��ַ���� ȡ�����ַ,�Ӷ�Ӱ�������ֵ
{
	int tmp = 0;
	tmp = *pa;      //���ַ
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n",a,b); //��ӡ�ı�ǰ

	Swap1(a, b);
	//����Swap1���� - ��ֵ����
	printf("a=%d b=%d\n", a, b);  

	Swap2(&a, &b);
	//����Swap1���� - ��ַ����

	printf("a=%d b=%d",a,b);  //��ӡ�ı��
	return 0;
}