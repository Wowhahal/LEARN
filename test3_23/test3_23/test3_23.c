#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
//������������Ϸ

void menu()
{
	printf("##########################\n");
	printf("#####1.play   0.exit######\n");
	printf("##########################\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = {'0'};
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);

	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);

	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '#')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '*')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}