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
//		printf("数値を入力:> ");
//		scanf(" %d", &a[i]);
//		k = a[i];
//		if (k == 0)
//		{
//			break;
//		}
//		else if (k < 0)
//		{
//			printf("間違えました。（数値＜0不可）もう一回入力してください。\n");
//			i--;
//		}
//	}
//	printf("数値一覧: ");
//	for (j = i-1; j >= 0; j--)
//	{
//		
//		printf("%d ",a[j]);
//		k = a[j] + k;
//	}
//	h = (float)k / i;
//	printf("\n合計: %d\n平均: %.2f", k,h);
//	return 0;
//}

//Hokuriku University

//第6回
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
//	int len = strlen(cs);  //lenはchの長さ
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
//		printf("挿入前の文字列：");
//		puts(cs);
//		printf("どの位置の文字の前に挿入しますか？");
//		scanf("%d", &a);
//		if (a < 0 || a > len)
//		{
//			printf("位置指定が正しくありません\n---------------------------\n");
//		}
//		else if (a >= 0 && a <= len)
//		{
//			printf("挿入後の文字列：");
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
//			printf("もう一回やりませんか（1.もう一回　0.終わり）：");
//			scanf("%d", &b);
//			printf("\n---------------------------\n");
//		}
//	}
//	return 0;
//}

//第7回
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
//		printf("入力する数値の数:");
//		scanf("%d", &Num);
//		for (i = 0; i < Num; i++)
//		{
//			printf("%d つ目の数値を入力:", i + 1);
//			scanf("%f", &Arr[i]);
//		}
//		printf("最大の入力値は、%.2fです。\n------------\nもう一回？(1\\0)", My_Flmax(Arr, Num));
//		scanf("%d", &a);
//		printf("\n\n");
//	}
//	return 0;
//}

//第八回
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 12;
//	int* p_a = &a;
//	float b = 3.45;
//	float* p_b = &b;
//	printf("aのアドレスは、%p\naの値は、%d\n", &a, a);
//
//	printf("p_aのアドレスは、%p\np_aの値は、%p\n",&p_a, p_a);
//
//	printf("bのアドレスは、%p\nbの値は、%.2f\n", &b, b);
//
//	printf("p_bのアドレスは、%p\np_bの値は、%p\n",&p_b,p_b);
//	return 0;
//}

//第九回　オプション課題
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define NUM 100
void reverse(char* pt);

int main()
{
	char ch[NUM] = { 0 };
	printf("文字列を入力して下さい：");
	gets(ch);                           //入力
	reverse(ch);
	printf("\n反転結果:");
	puts(ch);                          //出力
	return 0;
}

void reverse(char* pt)
{
	int len = strlen(pt);     //文字列の長さ（最終目のために）
	char* pa = pt + len - 1;
	while (pt < pa)           //文字列の一番目の領域 < 最終目領域
	{
		char tmp = *pa;
		*pa = *pt;
		*pt = tmp;       //交換
		pt++;           //次へ
		pa--;
	}
}
