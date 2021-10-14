#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1~9 这里用rand函数得出X和Y两个随机数
		int y = rand() % col + 1;//
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


//'1'-'0'= 1   字符'0'的ASCII值是48,字符'1'的ASCII值是49,所以'1'(49)-'0'(48)= 1
//'3'-'0'= 3   同理; 所以 '0'-'0'= 0 等于数字0
int get_mine_count(char mine[ROWS][COLS], int x,int y,int conut,char show[ROWS][COLS]) //计算玩家选中区域周围的雷
{
	//if ((mine[x - 1][y] +
	//	mine[x - 1][y - 1] +
	//	mine[x][y - 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] +
	//	mine[x][y + 1] +
	//	mine[x - 1][y + 1] - 8 * '0') == 0)
	//{
	//	show[x][y] = conut + '0';
	//}
	//if (mine[x - 1][y] == '0' || mine[x - 1][y - 1] == '0'
	//	|| mine[x][y - 1] == '0'
	//	|| mine[x + 1][y - 1] == '0'
	//	|| mine[x + 1][y] == '0'
	//	|| mine[x + 1][y + 1] == '0'
	//	|| mine[x][y + 1] == '0' || mine[x - 1][y + 1] == '0')
	//{
	//	get_mine_count(mine, x, y, conut, show);
	//}
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}

//void DiGui(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col,int win,int x,int y)
//{
//	int conut = get_mine_count(mine, x, y);
//	show[x][y] = conut + '0';
//	DisplayBoard(show, row, col);
//	if (conut == '0')
//	{
//		mine[x - 1][y] = '0';
//			mine[x - 1][y - 1] +
//			mine[x][y - 1] +
//			mine[x + 1][y - 1] +
//			mine[x + 1][y] +
//			mine[x + 1][y + 1] +
//			mine[x][y + 1] +
//			mine[x - 1][y + 1]
//		x++;
//		y++;
//		DiGui(mine, show, x, y, win, x, y);
//	}
//	
//}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0; //9*9-10=71
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//合法坐标
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你踩雷了哦,扫雷失败X﹏X\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else  //2.不是雷
			{
				//计算x,y坐标周围有几个雷
				int conut = 0;
				get_mine_count(mine, x, y,conut,show);
				show[x][y] = conut + '0';
				DisplayBoard(show, row, col);
				win++;
				//DiGui(mine,show,x,y,win,x,y);
				//win++;
			}
		}
		else
		{
			printf("输入坐标非法,请重新输入!\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你,排雷成功！♪(^∇^*)\n");
		DisplayBoard(mine, row, col);
	}
}


//展开功能的时候 - 递归