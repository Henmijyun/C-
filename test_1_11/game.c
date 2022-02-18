//#define _CRT_SECURE_NO_WARNINGS 1
//
////��Ϸ��ʵ��
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
//		//��ӡ����
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		//��ӡ�ָ���
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
////�������
//void player_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//
//	printf("�������\n");
//	while (1)
//	{
//		printf("����������:>\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//����
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//				printf("����Ƿ�,����������\n");
//		}
//		else
//			printf("����Ƿ�,����������\n");
//	}
//}
//
////��������
//void Computer_move(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("��������\n");
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
//static int if_full(char board[ROW][COL], int row, int col) //static���κ���,�ú���ֻ��������ļ���ʹ��
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ') //û��
//				return 0;
//		}
//	}
//	return 1; //����
//}
//
//char is_win(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	//�ж���
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//			return board[i][1];
//	}
//	//�ж���
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//			return board[1][i];
//	}
//	//�ж϶Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
//		return board[1][1];
//	//�ж�ƽ��
//	if (if_full(board, row, col) == 1)
//		return 'Q';
//	//����
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
//	printf("-------ɨ��--------\n");
//	for (i = 0; i <= col; i++) //��ӡ����
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
//		printf("%d  ", i);    //��ӡ����
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------ɨ��--------\n");
//}
//
////������
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
//			mine[x][y] = '1';//������
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
//	//���ܵ�ASCII��ֵ�ĺ�,��ȥ8��'0'��ASCII��ֵ�ĺ�,�õ���Χ'1'�ĸ���
//}
//
//void fine_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	while (win < row * col - EASY_COUNT)
//	{
//		printf("������Ҫ�Ų������:>");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("���ź�,��ը����\n");
//				show_board(mine, ROW, COL); //��ӡ��
//				break;
//			}
//			else
//			{
//				int count = get_mine_conut(mine, x, y);//�����м�����
//				show[x][y] = count + '0'; //�൱�ڰ�count��Ϊ�ַ�(���countΪ3,����Ϊ'0'��ASCII��ֵ,������3λ���ַ�)
//				show_board(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//			printf("����Ƿ�,����������\n");
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("��ϲ��,���׳ɹ�!\n");
//		show_board(mine, ROW, COL);
//	}
//}