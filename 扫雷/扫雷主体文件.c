#define _CRT_SECURE_NO_WARNINGS 1
#include "扫雷头文件.h"

/* 游戏主体 */
/* 雷：字符‘1’，不是雷：字符‘0’ */
void Game(void)
{
	char mine[ROWS][COLS]; /* 存放布置好的雷 */
	char show[ROWS][COLS]; /* 存放排查出的雷的信息,显示的是这个棋盘 */

	/* 初始化棋盘 */
	Initial_Board(mine, ROWS, COLS, '0');
	Initial_Board(show, ROWS, COLS, '*');

	/* 打印棋盘 */
	/* 只打印ROWS - 2和COLS - 2的行和列 */
	Display_Board(mine, ROW, COL);
	Display_Board(show, ROW, COL);

	/* 布置雷 */
	Set_Mine(mine, ROW, COL);
	//Display_Board(mine, ROW, COL);

	/* 排查雷 */
	Find_Mine(mine, show, ROW, COL);
}

int main(void)
{
	int input;
	srand((unsigned int)time(NULL));

	do
	{
		printf("\n");
		Menu();
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
			case 1: Game(); ;  break;
			case 0: break;
			default: puts("输入错误！请重新输入！");  break;
		}

	} while (input);

	puts("\n再见！");

	return 0;
}