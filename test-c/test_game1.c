#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
//1.���Ի�����һ�������
//2.������


#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
void menu()
{
	printf("##########������Ϸ##########\n");
	printf("############################\n");
	printf("####  1.��ʼ    0.����  ####\n");
	printf("############################\n");
}
void game()
{
	//1.����һ��������� 
	int ret = 0;
	int guess = 0;//���ղµ�����
	// ��rand()��������һ��0 ~ 0x7fff����������������32767��һ����,ͷ�ļ�stdlib.h

	ret = rand()%100+1; //����1~100֮��������
	//printf("%d\n",ret);
	//2.������
	while (1)
	{
		printf("������֣�1~100��:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("��µ����е����\n\n");
		}
		else if (guess < ret)
		{
			printf("��µ����е�С��\n\n");
		}
		else
		{
			printf("\n\n��ϲ��¶���,�����!!\n\n\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	//��ʱ�����������������������
	//time_t time(time_t *timer)  ���time()������ͷ�ļ�time.h
	//time(NULL)��ָ��
	srand((unsigned int)time(NULL)); //srand()��������rand()���������ʱ����������ӡ�ͷ�ļ�stdlib.h  
	do
	{
		menu();
		char arr1[] = "!!!!!You are so strong!!!!!!";
		char arr2[] = "############################";
		int left = 0;
		printf("��ѡ��(1��0)>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();    //��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			goto aga;   //��������ѭ����ȥ������
		default:
			printf("�������,����������\n");
			break;
		}

		//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//����-1��errer����Ϊ���и����ص�\n,����Ҫ-2
		int right = strlen(arr1) - 1;             //����strlen�������鳤��,-1����Ϊ���ص�\n

		do
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);

			Sleep(250);
			//system("cls"); 
			left++;
			right--;

		} while (left <= right);
		right++;
		char arr3[] = "############################";
		do
		{
			arr2[left] = arr3[left];
			arr2[right] = arr3[right];
			printf("%s\n", arr2);
			Sleep(250);
			//system("cls"); 
			left++;
			right--;
			if (right < 0)
				break;
		} while (left > right);
		printf("\n\n �㻹��Ҫ����һ���𣿣�\n");
		
	} while (input);
aga:
	return 0;
}


//ʱ���:
//��ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0:0)=(xxxxx)��
