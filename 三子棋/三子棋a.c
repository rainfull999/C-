/* ������.a*/
/* ��غ������� */
#include "������.h"

/* �ж������Ƿ����� */
int Is_Full(char board[][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (board[i][j] == ' ')
				return 0; /* ����û�� */
		}
	}
	
	return 1; /* �������� */
} 

/* �ж���Ӯ */
int Is_Win(char board[][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	int ret = 0; /* ���� Is_Full �����ķ���ֵ */
	
	/* �ж�ÿһ�� */
	for (i = 0; i < rows; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	
	/* �ж�ÿһ�� */
	for (j = 0; j < cols; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	
	/* �ж�2���Խ��� */
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	
	/* �ж�ƽ�� */
	ret = Is_Full(board, ROWS, COLS); 
	if (ret == 1)
		return 'D';
		
	return 'C';	
}

/* �����һ��: * */
void Player_Move(char board[][COLS], int rows, int cols)
{
	int x = 0;
	int y = 0;
	
	puts("\n�����->");
	
	while (1)
	{
		printf("���������꣺");
		scanf("%d %d", &x, &y);
		
		/* �ж������Ƿ��� ROWS �� COLS��Χ�� */
		if (x >= 1 && x <= rows && y >= 1 && y <= cols)
		{
			/* ���ȿ������Ƿ�ռ�� */
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';	
				break;
			} 
			else
			{
				puts("���걻ռ�ã� ���������롣");
			}
		}
		else
		{
			puts("�Ƿ����꣬���������롣"); 
		} 
	}
}

/* ������һ��: #*/
void Computer_Move(char board[][COLS], int rows, int cols)
{
	int x = 0; 
	int y = 0;
	
	puts("\n������->"); 
	
	while (1)
	{
		x = rand() % rows; /* x = 0, 1, 2, ..., rows - 1 */
		y = rand() % cols; /* y = 0, 1, 2, ..., cols - 1 */
		
		if (board[x][y] == ' ') /* �ж������Ƿ�ռ�� */
		{
			board[x][y] = '#';
			break;
		}
	}
}

/* �ṩ�˵� */
void Menu(void)
{
	printf("             ������\n");
	printf("***********************************\n"); 
	printf("  1) PLAY                0) QUIT\n");
	printf("***********************************\n");
}

/* ��ʼ������ */
void Initial_Board(char board[][COLS], int rows, int cols)
{
	int i, j;
	
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			board[i][j] = ' ';	/* ��֤��Ϸ��һ������ʱ�������ϵ��ַ��������� */	
}

/* ��ӡ���� */
void Display_Board(char board[][COLS], int rows, int cols)
{
	int i, j;
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++) 
		{
			printf(" %c ", board[i][j]); /* ��ӡ�ַ� */
			
			if (j < cols - 1) /* ��ӡ�ַ���� | */
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
