#define _CRT_SECURE_NO_WARNINGS 1
#include "ɨ��ͷ�ļ�.h"

/* ��Ϸ���� */
/* �ף��ַ���1���������ף��ַ���0�� */
void Game(void)
{
	char mine[ROWS][COLS]; /* ��Ų��úõ��� */
	char show[ROWS][COLS]; /* ����Ų�����׵���Ϣ,��ʾ����������� */

	/* ��ʼ������ */
	Initial_Board(mine, ROWS, COLS, '0');
	Initial_Board(show, ROWS, COLS, '*');

	/* ��ӡ���� */
	/* ֻ��ӡROWS - 2��COLS - 2���к��� */
	Display_Board(mine, ROW, COL);
	Display_Board(show, ROW, COL);

	/* ������ */
	Set_Mine(mine, ROW, COL);
	//Display_Board(mine, ROW, COL);

	/* �Ų��� */
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
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
			case 1: Game(); ;  break;
			case 0: break;
			default: puts("����������������룡");  break;
		}

	} while (input);

	puts("\n�ټ���");

	return 0;
}