#include"sl_game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
		
	}
}

void DisplayBord(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <=col; i++)
	{
		printf("%d ", i);
		
	}
	printf("\n");
	
	for (i = 1; i <=row ; i++)
	{
		printf("%d ",i);
		
		int j = 0;
		for (j = 1; j <=col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}

	
	

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要排查的坐标:> ");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法

			//1.是雷
			if (mine[x][y] == '1')
			{
				printf("bang!你死了。\n");
				DisplayBord(mine, row, col);
				break;
			}
			else//非雷 
			{
				//统计周围雷个数 显示在show盘上
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				
				
				DisplayBord(show, ROW, COL);
			}

		}
		else
		{
			//坐标不合法
			printf("坐标不合法，请重新输入");
		}
	}
	
}