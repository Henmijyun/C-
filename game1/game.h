#pragma once

#define ROW 3
#define COL 3

#include<stdio.h> //打印printf
#include<stdlib.h> //随机值srand,rand
#include<time.h> //时间值time


//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//告诉我们4种游戏的状态:
//玩家赢了 - '*'
//电脑赢了 - '#'
//平局 - 'Q'
//继续 - 'C'

char IsWin(char board[ROW][COL], int row, int col);