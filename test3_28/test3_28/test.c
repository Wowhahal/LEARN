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
	//�财�����Ϣ
	//1���貼���׵���Ϣ
	char mine[ROWS][COLS] = { 0 };

	//2���Ų���������Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'#');
	//��ӡ������ʾ
	DisplayBoard(mine, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//������
	Findmine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("��ѡ��");
			scanf("%d", &input);
			switch(input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("����������������룡\n");
				break;
			}
		} while (input);
}

int main()
{

	test();
	return 0;
}