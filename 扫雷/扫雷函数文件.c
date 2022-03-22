#define _CRT_SECURE_NO_WARNINGS 1
#include "扫雷头文件.h"

/* 统计一个坐标附近有几个雷 */
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

/* 排查雷 */
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	/* 输入排查坐标*/
	/* 检查坐标是不是雷。如果是，炸死了。如果不是，统计改坐标周围有几个雷，把这个信息储存到show */
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;

	while (win < row * col - MINE_NUMBER)
	{
		printf("请输入要排查的坐标：");
		scanf("%d %d", &x, &y);

		/* 判断坐标合法性 */
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("BOOM! 你被炸死了！\n");
				Display_Board(mine, row, col);
				break;
			}
			else
			{
				/* 不是雷的话，统计x， y坐标周围有几个雷 */
				count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Display_Board(show, row, col);
				win++;
			}
		}
		else
		{
			puts("坐标不合法，请重新输入。");
		}
	}

	if (win == row * col - MINE_NUMBER)
	{
		printf("恭喜你！排雷成功！\n");
	}
}

/* 布置雷 */
void Set_Mine(char mine[ROWS][COLS], int row, int col)
{
	/* 布置10个雷 */
	int count = MINE_NUMBER;

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

/* 显示棋盘 */
void Display_Board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	puts("--------------扫雷---------------");
	
	for (j = 0; j <= col; j++)
		printf("%d ", j);

	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}

		printf("\n");
	}
	puts("--------------扫雷---------------");
}

/* 初始化棋盘 */
/* 通过设置第四个参数，实现一个函数填充不同的字符 */
void Initial_Board(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

/* 菜单 */
void Menu(void)
{
	puts("                   扫雷");
	puts("******************************************");
	puts("   1) PLAY               0）QUIT");
	puts("******************************************");
}
