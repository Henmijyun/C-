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

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a == 0)   //����Ϊ�٣�����Ķ���ִ���ˡ������else���ڶ���ifƥ�䣬���Ը�����û�й�ϵ
//	{
//		if (b == 20)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n"); //else�Ǹ���������ģ�δƥ���if������ƥ�䡣��������ƥ����ǵڶ���if
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	if (5 == num)     //�ж����ʱ��������д����ȷ���������
//	{
//		printf("hehe\n");
//	}
//
//	//if (num = 5)    // = �Ǹ�ֵ��== �ж����
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int b = 0;
//	//while (b <= 100)
//	//{
//	//	if (1 == b % 2)
//	//	printf("%d\n", b);
//	//		b++;
//	//}
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;        //���ַ�ʽint aҪ=1������ѭ��������
//	}
//	if (1 == a % 2)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if(n==1)
//			printf("hehe\n");
//	case 2:
//	case 3:	
//	case 4:
//		printf("������\n");//����1~4������ʾ�����գ���������Ϊ�հ�
//		break;
//	case 5:
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	default:          //Ĭ�ϣ�����û�е�ѡ��ʱ������ÿ��case������default��break
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 9)
//			break;  //break����������ֹѭ����iѭ����5ʱ��ֹͣѭ����ֱ������ } ������û�о���printf����û�д�ӡ����
//		if (i == 5)
//			continue;//continue������ֹ����ѭ�����������printf���β���ӡ���ص�����while���¿�ʼѭ��
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int ch = 0;                    //ctrl + z
	while ((ch = getchar()) !=EOF) //EOF - end of file -> ֵΪ-1  ���ļ�������־��
	{
		putchar(ch);
	}
	//int ch = getchar();    //����
	//putchar(ch);           //�������printf����һ��

	return 0;
}