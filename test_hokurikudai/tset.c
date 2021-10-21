#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[100] = { 0 };
	int i, j;
	int k = 1;
	float h;
	for (i = 0; i < 100; i++)
	{

		printf("数値を入力:> ");
		scanf(" %d", &a[i]);
		k = a[i];
		if (k == 0)
		{
			break;
		}
		else if (k < 0)
		{
			printf("間違えました。（数値＜0不可）もう一回入力してください。\n");
			i--;
		}
	}
	printf("数値一覧: ");
	for (j = i-1; j >= 0; j--)
	{
		
		printf("%d ",a[j]);
		k = a[j] + k;
	}
	h = (float)k / i;
	printf("\n合計: %d\n平均: %.2f", k,h);
	return 0;
}
