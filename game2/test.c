#define _CRT_SECURE_NO_WARNINGS 1

//1.布置雷  创建数组来存放雷的信息
//2.排查雷  创建数组来存放排查出来的雷数量信息


#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("****   扫    雷   ****\n");
	printf("*********************\n");
	printf("****   1. play   ****\n");
	printf("****             ****\n");
	printf("****   0. exit   ****\n");
	printf("*********************\n");
}

void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11

	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };//数组创建的时候是11*11,所以引用数组必须也是11*11,但是引用的数值可以不是11*11

	//初始化
	InitBoard(mine, ROWS, COLS, '0');//把要初始化的东西引入进去
	InitBoard(show, ROWS, COLS, '*');//所以加入'0'和'*';便于区分两个函数

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);//9*9  打印0
	DisplayBoard(show, ROW, COL);//     打印*

	//布置雷
	SetMine(mine,ROW,COL);
	//扫雷
	FindMine(mine, show, ROW, COL);//两个数组都要操作,而且是9*9


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//生成时间戳

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}