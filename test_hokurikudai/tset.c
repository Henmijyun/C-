//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a[100] = { 0 };
//	int i, j;
//	int k = 1;
//	float h;
//	for (i = 0; i < 100; i++)
//	{
//
//		printf("����������:> ");
//		scanf(" %d", &a[i]);
//		k = a[i];
//		if (k == 0)
//		{
//			break;
//		}
//		else if (k < 0)
//		{
//			printf("�g�`���ޤ�������������0���ɣ��⤦һ���������Ƥ���������\n");
//			i--;
//		}
//	}
//	printf("����һ�E: ");
//	for (j = i-1; j >= 0; j--)
//	{
//		
//		printf("%d ",a[j]);
//		k = a[j] + k;
//	}
//	h = (float)k / i;
//	printf("\n��Ӌ: %d\nƽ��: %.2f", k,h);
//	return 0;
//}

//Hokuriku University

//��6��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char cs[20] = {'H','o','k','u','r','i','k','u',' ','U','n','i','v','e','r','s','i','t','y'};
//	char ch[20] = { 0 };
//	int i, j, v;
//	char c, d;
//	int b = 1;
//	int a = 0;
//	int len = strlen(cs);  //len��ch���L��
//	while (b)
//	{
//		for (v = 0; v < len; v++)
//		{
//			ch[v] = cs[v];
//			if (v == 20)
//			{
//				ch[v] = '\0';
//			}
//		}
//		printf("����ǰ�������У�");
//		puts(cs);
//		printf("�ɤ�λ�ä����֤�ǰ�˒��뤷�ޤ�����");
//		scanf("%d", &a);
//		if (a < 0 || a > len)
//		{
//			printf("λ��ָ��������������ޤ���\n---------------------------\n");
//		}
//		else if (a >= 0 && a <= len)
//		{
//			printf("������������У�");
//			for (i = 0; i < len; i++)
//			{
//				if (i == a)
//				{
//					c = ch[i];
//					ch[i] = '*';
//					printf("%c", ch[i]);
//					for (j = i+1; j < len + 1 ; j++)
//					{
//						d = ch[j];
//						ch[j] = c;
//						c = d;
//						printf("%c", ch[j]);
//					}
//					printf("\n\n---------------------------\n");
//					break;
//				}
//				printf("%c", ch[i]);
//			}
//			printf("�⤦һ�ؤ��ޤ��󤫣�1.�⤦һ�ء�0.�K��꣩��");
//			scanf("%d", &b);
//			printf("\n---------------------------\n");
//		}
//	}
//	return 0;
//}

//��7��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//float My_Flmax(float* arr,int num)
//{
//	int x = 0;
//	float max = arr[0];
//	for (x = 1; x < num; x++)
//	{
//		if (max < arr[x])
//		{
//			max = arr[x];
//		}
//	}
//	return max;
//}
//int main()
//{
//	int Num = 0;
//	int i = 0;
//	int a = 1;
//	float Arr[50] = { 0 };
//	while (a)
//	{
//		printf("����������������:");
//		scanf("%d", &Num);
//		for (i = 0; i < Num; i++)
//		{
//			printf("%d ��Ŀ������������:", i + 1);
//			scanf("%f", &Arr[i]);
//		}
//		printf("�����������ϡ�%.2f�Ǥ���\n------------\n�⤦һ�أ�(1\\0)", My_Flmax(Arr, Num));
//		scanf("%d", &a);
//		printf("\n\n");
//	}
//	return 0;
//}

//�ڰ˻�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 12;
	int* p_a = &a;
	float b = 3.45;
	float* p_b = &b;
	printf("a�Υ��ɥ쥹�ϡ�%p\na�΂��ϡ�%d\n", &a, a);

	printf("p_a�Υ��ɥ쥹�ϡ�%p\np_a�΂��ϡ�%p\n",&p_a, p_a);

	printf("b�Υ��ɥ쥹�ϡ�%p\nb�΂��ϡ�%.2f\n", &b, b);

	printf("p_b�Υ��ɥ쥹�ϡ�%p\np_b�΂��ϡ�%p\n",&p_b,p_b);
	return 0;
}