#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include<stdio.h>
//三子棋
void menu()
{
	printf("***************************\n");
	printf("******1.play    0.exit *******\n");
	printf("***************************\n");
}

void game()
{
	//数组定义棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	char ret = 0;
	while (1)
	{
		
		//玩家移动
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断谁赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}

		//电脑移动
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
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else 
		{
			printf("平局\n");
		}
	
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入:> ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n ");
			break;
		}
	} while (input);

}
int main()
{
	test();
	return 0;
}