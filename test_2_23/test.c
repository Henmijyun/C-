#define _CRT_SECURE_NO_WARNINGS 1


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int bottle = 0;//空瓶
//	int soda = 0;//汽水
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



//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

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

//打印菱形
//7行,每行+2个*

#include <stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++) //打印num行
	{
		//打印空格
		int j = 0;
		for (j = 0; j < num - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	//for (i = 0; i < num - 1; i++) 
	//{

	//	int j = 0;
	//	//打印空格
	//	for (j = 1; j < i * 2 + 1; j++)
	//	{
	//		printf(" ");
	//	}
	//	//打印*
	//	for (j = 0; j < 2*(num-1) - i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}



	return 0;
}