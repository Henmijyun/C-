#define _CRT_SECURE_NO_WARNINGS 1

//测试三子棋游戏
//第一步游戏框架：打完一把再一把


#include"game.h"


void menu()
{
	printf("******************************\n");
	printf("****** 1.play    0.exit ******\n");
	printf("******************************\n");
}


//第二步:游戏的整个算法实现
void game()
{
	char ret = 0;
	//数组-存放走出来的棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘(全部变空格)
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//先让玩家下棋
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);  //用ret接收返回值进行判断
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	//判断游戏结果
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//因为只能调用一次,所以放这里比较好(用于设置rand()产生随机数时的种子);时间戳设置随机值
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择-_-!\n");
			break;
		}
	} while (input);//switch里面,选0为假,非0则为真
}


int main()
{
	test();
	return 0;
}