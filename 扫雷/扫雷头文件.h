#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define MINE_NUMBER 10

/* 统计一个坐标附近有几个雷 */
int get_mine_count(char mine[ROWS][COLS], int x, int y);

/* 排查雷 */
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

/* 布置雷 */
void Set_Mine(char mine[ROWS][COLS], int row, int col);

/* 显示棋盘 */
void Display_Board(char board[ROWS][COLS], int row, int col);

/* 初始化棋盘 */
void Initial_Board(char board[ROWS][COLS], int row, int col, char set);

/* 菜单 */
void Menu(void);
