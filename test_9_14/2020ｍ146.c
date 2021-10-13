//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	float c;
//	printf("############################\n1.りんご　    2.みかん\n3.ラズベリー　4.パイナップル\n############################\n好きな果物を選択して、番号を入力して下さい。\n");
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > 0 && a < 5)
//		{
//			switch (a)
//			{
//			case 1:
//				printf("りんごを選択しました。\nその量を入力して下さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("数量：%d\n", b);
//						c = (float)b * 140.5;
//						printf("りんご%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			case 2:
//				printf("みかんを選択しました。\nその量を入力して下さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("数量：%d\n", b);
//						c = (float)b * 45.25;
//						printf("みかん%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			case 3:
//				printf("ラズベリーを選択しました。\nその量を入力して下さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("数量：%d\n", b);
//						c = (float)b * 2.41;
//						printf("ラズベリー%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			case 4:
//				printf("パイナップルを選択しました。\nその量を入力して下さい。\n");
//				while (1)
//				{
//					scanf("%d", &b);
//					if (b > 0)
//					{
//						printf("数量：%d\n", b);
//						c = (float)b * 700.6;
//						printf("パイナップル%d個分の摂取カロリーは%f(Kcal)です。\n", b, c);
//						break;
//					}
//					else
//					{
//						printf("数量：%d\n数量が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", b);
//					}
//				}
//				break;
//			default:
//				break;
//			}
//			if (b > 0)
//			{
//				break;
//			}
//		}
//		else
//		{
//			printf("商品番号：%d\n商品番号が間違っています。\nもう一回入力して下さい。\n\n---------------------\n", a);
//		}
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//	int j = 0;
//	int i = 0;
//	while (c == 1)
//	{
//		printf("プログラム1：\n2つの数値を1つずつ入力してください。(2つの数値の大きさが違いように)\n");
//		scanf("%d%d", &a, &b);
//		if (a < b)
//		{
//			printf("1つ目の数値：%d\n2つ目の数値：%d\n\n大きい数値から順番は:", a, b);
//			while (a-1 < b)
//			{
//				printf("%d,", b);
//				b--;
//			}
//			printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.プログラム2へ　　 （1または2入力してください。）\n");
//			scanf("%d", &c);
//			break;
//		}
//		else if (b < a)
//		{
//			printf("1つ目の数値：%d\n2つ目の数値：%d\n\n大きい数値から順番は:", a, b);
//			while (b-1 < a)
//			{
//				printf("%d,", a);
//				a--;
//			}
//			printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.プログラム2へ　　 （1または2入力してください。）\n");
//			scanf("%d", &c);
//			break;
//		}
//		else
//		{
//			printf("入力した数値が間違っています。もう一回入力してください。\n");
//		}
//	}
//	while (1)
//	{
//		printf("プログラム2：\n2つの数値を1つずつ入力してください。(2つの数値の大きさが違いように)\n");
//		scanf("%d%d", &a, &b);
//			if (a < b)
//			{
//				printf("1つ目の数値：%d\n2つ目の数値：%d\n\n小さい数値から順番にプラスすると、\n%d", a, b, a);
//				for (i = 1; i <= (b-a); i++)
//				{
//					d = a + i;
//					j = j + d;
//					printf("+%d", d);
//				}
//				printf(" = %d\n", a+j);
//				printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.終わり　　 （1または2入力してください。）\n");
//				scanf("%d", &c);
//				if (c == 2)
//				{
//					break;
//				}
//			}
//			else if (b < a)
//			{
//				printf("1つ目の数値：%d\n2つ目の数値：%d\n\n小さい数値から順番にプラスすると、\n%d", a, b,b);
//				for (i = 1; i <= (a - b); i++)
//				{
//					d = b + i;
//					j = j + d;
//					printf("+%d", d);
//				}
//				printf(" = %d\n", b+j);
//				printf("\n\nもう一回入力しませんか。\n１.もう一回　　　　2.終わり　　 （1または2入力してください。）\n");
//				scanf("%d", &c);
//				if (c == 2)
//				{
//					break;
//				}
//			}
//			else
//			{
//				printf("入力した数値が間違っています。もう一回入力してください。\n");
//			}
//	}
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (1)
	{
		printf("数値を入力してください。\n");
		scanf("%d", &a);
		if (a >= 0)
		{
			printf("入力値（%d）の約数は、以下の通りです。\n", a);
			for (b = 0; b <= a; b++)
			{
				for (c = 0; c <= a; c++)
				{
					if (b * c == a)
					{
						printf("%d\n", c);
					}
				}
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}