//#define _CRT_SECURE_NO_WARNINGS 1
//
////游戏的实现
//#include "game.h"
//
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		//打印数据
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		//打印分割行
//		if (i < row - 1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < row - 1)
//					printf("|");
//			}
//		}
//		printf("\n");
//	}
//}
//
////玩家下棋
//void player_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//
//	printf("玩家下棋\n");
//	while (1)
//	{
//		printf("请输入坐标:>\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//下棋
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//				printf("坐标非法,请重新输入\n");
//		}
//		else
//			printf("坐标非法,请重新输入\n");
//	}
//}
//
////电脑下棋
//void Computer_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑下棋\n");
//	while (1)
//	{
//
//		x = rand() % row; //0~2
//		y = rand() % col; //0~2
//
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//
//static int if_full(char board[ROW][COL], int row, int col) //static修饰函数,让函数只能在这个文件中使用
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ') //没满
//				return 0;
//		}
//	}
//	return 1; //满了
//}
//
//char is_win(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	//判断行
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//			return board[i][1];
//	}
//	//判断列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//			return board[1][i];
//	}
//	//判断对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
//		return board[1][1];
//	//判断平局
//	if (if_full(board, row, col) == 1)
//		return 'Q';
//	//继续
//	return 'C';
//}
//





//#define _CRT_SECURE_NO_WARNINGS 1
//#include "game.h"
//
//void init_board(char arr[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			arr[i][j] = set;
//		}
//	}
//}
//
//void show_board(char arr[ROWS][COLS], int row, int col) 
//{
//	int i = 0;
//	int j = 0;
//	printf("-------扫雷--------\n");
//	for (i = 0; i <= col; i++) //打印列数
//	{	
//		if (i == 0)
//		{
//			printf("%d ", i);
//			continue;
//		}
//		printf(" %d", i);
//	}
//	printf("\n\n");
//
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d  ", i);    //打印行数
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------扫雷--------\n");
//}
//
////布置雷
//void set_mine(char mine[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;
//	int x = 0;
//	int y = 0;
//	while (count)
//	{
//		x = rand() % row + 1;
//		y = rand() % col + 1;
//		if (mine[x][y] == '0')
//		{
//			mine[x][y] = '1';//布置雷
//			count--;
//		}
//	}
//}
//
//int get_mine_conut(char mine[ROWS][COLS], int x, int y)
//{
//	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
//		mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1])
//		- 8 * '0';
//	//四周的ASCII码值的和,减去8个'0'的ASCII码值的和,得到周围'1'的个数
//}
//
//void fine_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win < row * col - EASY_COUNT)
//	{
//		printf("请输入要排查的坐标:>");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("很遗憾,被炸死了\n");
//				show_board(mine, ROW, COL); //打印雷
//				break;
//			}
//			else
//			{
//				int count = get_mine_conut(mine, x, y);//附近有几个雷
//				show[x][y] = count + '0'; //相当于把count变为字符(如果count为3,则结果为'0'的ASCII码值,往后数3位的字符)
//				show_board(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//			printf("坐标非法,请重新输入\n");
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("恭喜你,排雷成功!\n");
//		show_board(mine, ROW, COL);
//	}
//}