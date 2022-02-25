//#define _CRT_SECURE_NO_WARNINGS 1
//
////”Œœ∑µƒ µœ÷
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
//		//¥Ú”° ˝æ›
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		//¥Ú”°∑÷∏˚Ï–
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
////ÕÊº“œ¬∆ÅE
//void player_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//
//	printf("ÕÊº“œ¬∆Â\n");
//	while (1)
//	{
//		printf("«ÅE‰»ÅE¯±ÅE>\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//œ¬∆ÅE
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//				printf("◊¯±ÅE«∑®,«ÅEÿ–¬ ‰»ÅEn");
//		}
//		else
//			printf("◊¯±ÅE«∑®,«ÅEÿ–¬ ‰»ÅEn");
//	}
//}
//
////µÁƒ‘œ¬∆ÅE
//void Computer_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("µÁƒ‘œ¬∆Â\n");
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
//static int if_full(char board[ROW][COL], int row, int col) //static–ﬁ Œ∫Ø ˝,»√∫Ø ˝÷ªƒ‹‘⁄’‚∏ˆŒƒº˛÷– π”√
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ') //√ª¬ÅE
//				return 0;
//		}
//	}
//	return 1; //¬˙¡À
//}
//
//char is_win(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	//≈–∂œ––
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//			return board[i][1];
//	}
//	//≈–∂œ¡–
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//			return board[1][i];
//	}
//	//≈–∂œ∂‘Ω«œﬂ
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
//		return board[1][1];
//	//≈–∂œ∆Ωæ÷
//	if (if_full(board, row, col) == 1)
//		return 'Q';
//	//ºÃ–ÅE
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
//	printf("-------…®¿◊--------\n");
//	for (i = 0; i <= col; i++) //¥Ú”°¡– ˝
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
//		printf("%d  ", i);    //¥Ú”°–– ˝
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------…®¿◊--------\n");
//}
//
////≤º÷√¿◊
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
//			mine[x][y] = '1';//≤º÷√¿◊
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
//	//Àƒ÷‹µƒASCII¬ÅEµµƒ∫Õ,ºı»•8∏ÅE0'µƒASCII¬ÅEµµƒ∫Õ,µ√µΩ÷‹Œß'1'µƒ∏ˆ ˝
//}
//
//void fine_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win < row * col - EASY_COUNT)
//	{
//		printf("«ÅE‰»ÅE™≈≈≤Èµƒ◊¯±ÅE>");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("∫‹“≈∫∂,±ª’®À¿¡À\n");
//				show_board(mine, ROW, COL); //¥Ú”°¿◊
//				break;
//			}
//			else
//			{
//				int count = get_mine_conut(mine, x, y);//∏ΩΩÅE–º∏∏ˆ¿◊
//				show[x][y] = count + '0'; //œ‡µ±”⁄∞—count±‰Œ™◊÷∑ÅE»Áπ˚countŒ™3,‘ÚΩ·π˚Œ™'0'µƒASCII¬ÅEµ,Õ˘∫Û ˝3Œªµƒ◊÷∑ÅE
//				show_board(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//			printf("◊¯±ÅE«∑®,«ÅEÿ–¬ ‰»ÅEn");
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("πßœ≤ƒÅE≈≈¿◊≥…π¶!\n");
//		show_board(mine, ROW, COL);
//	}
//}