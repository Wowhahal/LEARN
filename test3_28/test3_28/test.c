#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include "game.h"



void menu()
{
	printf("##########################\n");
	printf("#####1.play   0.exit######\n");
	printf("##########################\n");
}

void game()
{
	//需储存的信息
	//1、需布置雷的信息
	char mine[ROWS][COLS] = { 0 };

	//2、排查出的类的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'#');
	//打印出来显示
	DisplayBoard(mine, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//查找雷
	Findmine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("请选择：");
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
				printf("输入错误，请重新输入！\n");
				break;
			}
		} while (input);
}

int main()
{

	test();
	return 0;
}