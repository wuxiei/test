#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include<stdio.h>
//������
void menu()
{
	printf("***************************\n");
	printf("******1.play    0.exit *******\n");
	printf("***************************\n");
}

void game()
{
	//���鶨������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	char ret = 0;
	while (1)
	{
		
		//����ƶ�
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�˭Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		//�����ƶ�
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else 
		{
			printf("ƽ��\n");
		}
	
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������:> ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n ");
			break;
		}
	} while (input);

}
int main()
{
	test();
	return 0;
}