/* ������.h */
/* ͷ�ļ��ṩ���� */
#include <stdio.h>
#include <ctype.h> /* �ṩisdigit���� */
#include <stdlib.h> /* �ṩ������� */ 
#include <time.h> /* �ṩʱ�亯�� */

#define ROWS 3
#define COLS 3

/* �ṩ�˵� */
void Menu(void);

/* ��Ϸ�߼� */
void Game(void); 

/* ��ʼ������ */
void Initial_Board(char board[][COLS], int rows, int cols);

/* ��ӡ���� */
void Display_Board(char board[][COLS], int rows, int cols);

/* �����һ�� */
void Player_Move(char board[][COLS], int rows, int cols);

/* ������һ�� */
void Computer_Move(char board[][COLS], int rows, int cols);

/* �ж���Ӯ */
int Is_Win(char board[][COLS], int rows, int cols);

/* �ж������Ƿ����� */
int Is_Full(char board[][COLS], int rows, int cols);
