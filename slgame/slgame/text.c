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
	//�������̵���Ϣ����
	char mine[ROWS][COLS] = { 0 };
	//������ʾ����������--�Ų���׵�����
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBord(mine,ROW,COL);
	DisplayBord(show, ROW, COL);
	//����
	SetMine(mine,ROW,COL);
	DisplayBord(mine, ROW, COL);
	//��������ͳ���׵ĸ�����ʾ��show����
	FindMine(mine,show,ROW,COL);

}
void text()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("������ѡ��> ");
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