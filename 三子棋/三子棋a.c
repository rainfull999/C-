/* 三子棋.a*/
/* 相关函数定义 */
#include "三子棋.h"

/* 判断棋盘是否满了 */
int Is_Full(char board[][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (board[i][j] == ' ')
				return 0; /* 棋盘没满 */
		}
	}
	
	return 1; /* 棋盘满了 */
} 

/* 判断输赢 */
int Is_Win(char board[][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	int ret = 0; /* 储存 Is_Full 函数的返回值 */
	
	/* 判断每一行 */
	for (i = 0; i < rows; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	
	/* 判断每一列 */
	for (j = 0; j < cols; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	
	/* 判断2个对角线 */
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	
	/* 判断平局 */
	ret = Is_Full(board, ROWS, COLS); 
	if (ret == 1)
		return 'D';
		
	return 'C';	
}

/* 玩家走一步: * */
void Player_Move(char board[][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	
	puts("\n玩家走->");
	
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &x, &y);
		
		/* 判断坐标是否在 ROWS 和 COLS范围内 */
		if (x >= 1 && x <= rows && y >= 1 && y <= cols)
		{
			/* 首先看坐标是否被占用 */
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';	
				break;
			} 
			else
			{
				puts("坐标被占用， 请重新输入。");
			}
		}
		else
		{
			puts("非法坐标，请重新输入。"); 
		} 
	}
}

/* 电脑走一步: #*/
void Computer_Move(char board[][COLS], int rows, int cols)
{
	int x = 0; 
	int y = 0;
	
	puts("\n电脑走->"); 
	
	while (1)
	{
		x = rand() % rows; /* x = 0, 1, 2, ..., rows - 1 */
		y = rand() % cols; /* y = 0, 1, 2, ..., cols - 1 */
		
		if (board[x][y] == ' ') /* 判断坐标是否被占用 */
		{
			board[x][y] = '#';
			break;
		}
	}
}

/* 提供菜单 */
void Menu(void)
{
	printf("             三子棋\n");
	printf("***********************************\n"); 
	printf("  1) PLAY                0) QUIT\n");
	printf("***********************************\n");
}

/* 初始化棋盘 */
void Initial_Board(char board[][COLS], int rows, int cols)
{
	int i, j;
	
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			board[i][j] = ' ';	/* 保证游戏第一次运行时，棋盘上的字符不是乱码 */	
}

/* 打印棋盘 */
void Display_Board(char board[][COLS], int rows, int cols)
{
	int i, j;
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++) 
		{
			printf(" %c ", board[i][j]); /* 打印字符 */
			
			if (j < cols - 1) /* 打印字符间隔 | */
				printf(" | ");
		}
		
		printf("\n");
		
		if (i < rows - 1)
		{
			for (j = 0; j < cols; j++)
			{
				printf("---");
				
				if (j < cols - 1)
					printf(" | "); 
			}
		}
		
		printf("\n");
	}
}
