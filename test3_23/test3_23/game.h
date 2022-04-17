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
//1. 玩家赢了 - #
//2. 电脑赢了 - *
//3. 平局 - Q
//4. 游戏继续 - C
char Iswin(char board[ROW][COL], int row, int col);