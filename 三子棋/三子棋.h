/* 三子棋.h */
/* 头文件提供声明 */
#include <stdio.h>
#include <stdlib.h> /* 提供随机函数 */ 
#include <time.h> /* 提供时间函数 */

#define ROWS 3
#define COLS 3

/* 提供菜单 */
void Menu(void);

/* 游戏逻辑 */
void Game(void); 

/* 初始化棋盘 */
void Initial_Board(char board[][COLS], int rows, int cols);

/* 打印棋盘 */
void Display_Board(char board[][COLS], int rows, int cols);

/* 玩家走一步 */
void Player_Move(char board[][COLS], int rows, int cols);

/* 电脑走一步 */
void Computer_Move(char board[][COLS], int rows, int cols);

/* 判断输赢 */
int Is_Win(char board[][COLS], int rows, int cols);

/* 判断棋盘是否满了 */
int Is_Full(char board[][COLS], int rows, int cols);
