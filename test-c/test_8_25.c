#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}                           //{}���������
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	if (a == 0)   //����Ϊ�٣�����Ķ���ִ���ˡ������else���ڶ���ifƥ�䣬���Ը�����û�й�ϵ
	{
		if (b == 20)
			printf("hehe\n");
	}
	else
			printf("haha\n"); //else�Ǹ���������ģ�δƥ���if������ƥ�䡣��������ƥ����ǵڶ���if
	return 0;
}