#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"sl_game.h"

void menu()
{
	printf("*******************\n");
	printf("***** 1.play ******\n");
	printf("***** 0.exit ******\n");
	printf("*******************\n");
}

void game()
{
	//放雷棋盘的信息储存
	char mine[ROWS][COLS] = { 0 };
	//定义显示出来的棋盘--排查出雷的棋盘
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBord(mine,ROW,COL);
	DisplayBord(show, ROW, COL);
	//布雷
	SetMine(mine,ROW,COL);
	DisplayBord(mine, ROW, COL);
	//从雷盘上统计雷的个数显示到show盘上
	FindMine(mine,show,ROW,COL);

}
void text()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请输入选项> ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("error\n");
			break;
		}

	} while (input);
	
	

}
int main()
{

	text();

	return 0;
}