#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define MINE_NUMBER 10

/* ͳ��һ�����긽���м����� */
int get_mine_count(char mine[ROWS][COLS], int x, int y);

/* �Ų��� */
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

/* ������ */
void Set_Mine(char mine[ROWS][COLS], int row, int col);

/* ��ʾ���� */
void Display_Board(char board[ROWS][COLS], int row, int col);

/* ��ʼ������ */
void Initial_Board(char board[ROWS][COLS], int row, int col, char set);

/* �˵� */
void Menu(void);
