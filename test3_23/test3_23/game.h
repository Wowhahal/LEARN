#define ROW 3
#define COL 3


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBorad(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//
//1. ���Ӯ�� - #
//2. ����Ӯ�� - *
//3. ƽ�� - Q
//4. ��Ϸ���� - C
char Iswin(char board[ROW][COL], int row, int col);