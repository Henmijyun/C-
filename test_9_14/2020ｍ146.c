#define _CRT_SECURE_NO_WARNINGS 1
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
