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

#include <stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++) //��ӡnum��
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < num - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//for (i = 0; i < num - 1; i++) 
	//{

	//	int j = 0;
	//	//��ӡ�ո�
	//	for (j = 1; j < i * 2 + 1; j++)
	//	{
	//		printf(" ");
	//	}
	//	//��ӡ*
	//	for (j = 0; j < 2*(num-1) - i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}



	return 0;
}