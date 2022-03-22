#define _CRT_SECURE_NO_WARNINGS 1
#include "ɨ��ͷ�ļ�.h"

/* ͳ��һ�����긽���м����� */
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

/* �Ų��� */
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	/* �����Ų�����*/
	/* ��������ǲ����ס�����ǣ�ը���ˡ�������ǣ�ͳ�Ƹ�������Χ�м����ף��������Ϣ���浽show */
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;

	while (win < row * col - MINE_NUMBER)
	{
		printf("������Ҫ�Ų�����꣺");
		scanf("%d %d", &x, &y);

		/* �ж�����Ϸ��� */
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("BOOM! �㱻ը���ˣ�\n");
				Display_Board(mine, row, col);
				break;
			}
			else
			{
				/* �����׵Ļ���ͳ��x�� y������Χ�м����� */
				count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Display_Board(show, row, col);
				win++;
			}
		}
		else
		{
			puts("���겻�Ϸ������������롣");
		}
	}

	if (win == row * col - MINE_NUMBER)
	{
		printf("��ϲ�㣡���׳ɹ���\n");
	}
}

/* ������ */
void Set_Mine(char mine[ROWS][COLS], int row, int col)
{
	/* ����10���� */
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

/* ��ʾ���� */
void Display_Board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	puts("--------------ɨ��---------------");
	
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
	puts("--------------ɨ��---------------");
}

/* ��ʼ������ */
/* ͨ�����õ��ĸ�������ʵ��һ��������䲻ͬ���ַ� */
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

/* �˵� */
void Menu(void)
{
	puts("                   ɨ��");
	puts("******************************************");
	puts("   1) PLAY               0��QUIT");
	puts("******************************************");
}
