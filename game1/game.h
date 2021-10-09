#pragma once

#define ROW 3
#define COL 3

#include<stdio.h> //��ӡprintf
#include<stdlib.h> //���ֵsrand,rand
#include<time.h> //ʱ��ֵtime


//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//��������4����Ϸ��״̬:
//���Ӯ�� - '*'
//����Ӯ�� - '#'
//ƽ�� - 'Q'
//���� - 'C'

char IsWin(char board[ROW][COL], int row, int col);