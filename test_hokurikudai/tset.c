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

		printf("����������:> ");
		scanf(" %d", &a[i]);
		k = a[i];
		if (k == 0)
		{
			break;
		}
		else if (k < 0)
		{
			printf("�g�`���ޤ�������������0���ɣ��⤦һ���������Ƥ���������\n");
			i--;
		}
	}
	printf("����һ�E: ");
	for (j = i-1; j >= 0; j--)
	{
		
		printf("%d ",a[j]);
		k = a[j] + k;
	}
	h = (float)k / i;
	printf("\n��Ӌ: %d\nƽ��: %.2f", k,h);
	return 0;
}
