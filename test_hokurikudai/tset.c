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

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char cs[20] = {'H','o','k','u','r','i','k','u',' ','U','n','i','v','e','r','s','i','t','y'};
	char ch[20] = { 0 };
	int i, j, v;
	char c, d;
	int b = 1;
	int a = 0;
	int len = strlen(cs);  //len��ch���L��
	while (b)
	{
		for (v = 0; v < len; v++)
		{
			ch[v] = cs[v];
			if (v == 20)
			{
				ch[v] = '\0';
			}
		}
		printf("����ǰ�������У�");
		puts(cs);
		printf("�ɤ�λ�ä����֤�ǰ�˒��뤷�ޤ�����");
		scanf("%d", &a);
		if (a < 0 || a > len)
		{
			printf("λ��ָ��������������ޤ���\n---------------------------\n");
		}
		else if (a >= 0 && a <= len)
		{
			printf("������������У�");
			for (i = 0; i < len; i++)
			{
				if (i == a)
				{
					c = ch[i];
					ch[i] = '*';
					printf("%c", ch[i]);
					for (j = i+1; j < len + 1 ; j++)
					{
						d = ch[j];
						ch[j] = c;
						c = d;
						printf("%c", ch[j]);
					}
					printf("\n\n---------------------------\n");
					break;
				}
				printf("%c", ch[i]);
			}
			printf("�⤦һ�ؤ��ޤ��󤫣�1.�⤦һ�ء�0.�K��꣩��");
			scanf("%d", &b);
			printf("\n---------------------------\n");
		}
	}
	return 0;
}