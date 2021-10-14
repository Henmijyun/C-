#define _CRT_SECURE_NO_WARNINGS 1

//1.������  ��������������׵���Ϣ
//2.�Ų���  ��������������Ų��������������Ϣ


#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("****   ɨ    ��   ****\n");
	printf("*********************\n");
	printf("****   1. play   ****\n");
	printf("****             ****\n");
	printf("****   0. exit   ****\n");
	printf("*********************\n");
}

void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11

	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//���鴴����ʱ����11*11,���������������Ҳ��11*11,�������õ���ֵ���Բ���11*11

	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');//��Ҫ��ʼ���Ķ��������ȥ
	InitBoard(show, ROWS, COLS, '*');//���Լ���'0'��'*';����������������

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);//9*9  ��ӡ0
	DisplayBoard(show, ROW, COL);//     ��ӡ*

	//������
	SetMine(mine,ROW,COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);//�������鶼Ҫ����,������9*9


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����ʱ���

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}