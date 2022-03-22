/* 三子棋.b */ 
/* 游戏逻辑 */
#include "三子棋.h"

/* 游戏逻辑 */
void Game(void) 
{
	char board[ROWS][COLS]; /* 储存在棋盘上输入的字符 */
	char ret; /* 储存Is_Win函数的返回值，判断输赢 */
	
	Initial_Board(board, ROWS, COLS); /* 初始化棋盘 */
	
	Display_Board(board, ROWS, COLS); /* 游戏开始时，打印棋盘 */
	
	while (1)
	{
		Player_Move(board, ROWS, COLS); /* 玩家走一步 */
		Display_Board(board, ROWS, COLS); /* 打印棋盘 */
		ret = Is_Win(board, ROWS, COLS);  /* 判断输赢：玩家赢返回*，电脑赢返回#，平局返回D，都没赢返回C */
		if (ret != 'C') /* 如果Is_Win返回的不是C，则循环结束 */
			break; 
		
		Computer_Move(board, ROWS, COLS); /* 电脑走一步 */
		Display_Board(board, ROWS, COLS); /* 打印棋盘 */
		ret = Is_Win(board, ROWS, COLS);  /* 判断输赢：玩家赢返回*，电脑赢返回#，平局返回D，都没赢返回C */
		if (ret != 'C') /* 如果Is_Win返回的不是C，则循环结束 */
			break; 
	} 
	 
	if (ret == '*')
	{
		puts("玩家赢了！"); 
	}
	else if (ret == '#')
	{
		puts("电脑赢了！"); 
	}
	else
	{
		puts("平局！"); 
	} 
	
	Display_Board(board, ROWS, COLS); /* 打印棋盘 */
	
} 

int main(void)
{
	int input; /* 储存输入的选项 */
	
	srand((unsigned int) time(NULL));
	
	do
	{
		Menu();/* 提供菜单 */
		
		puts("Please choose:"); /* 输入选项 */
		scanf("%d", &input);
		
		switch(input) /* 进入选项 */
		{
			case 1: Game() ; break;
			case 0: break; /* break跳出的是Switch，但此时input = 0，将直接退出do while循环 */
			default: puts("WRONG INPUT! PLEASE ENTER <1/0>\n"); break;
		} 
		
	}while (input); /* 循环条件：输入不为0 */
	 
	puts("\nGOODBYE!"); 
	
	return 0;
} 


