/* ������.b */ 
/* ��Ϸ�߼� */
#include "������.h"

/* ��Ϸ�߼� */
void Game(void) 
{
	char board[ROWS][COLS]; /* ������������������ַ� */
	char ret; /* ����Is_Win�����ķ���ֵ���ж���Ӯ */
	
	Initial_Board(board, ROWS, COLS); /* ��ʼ������ */
	
	Display_Board(board, ROWS, COLS); /* ��Ϸ��ʼʱ����ӡ���� */
	
	while (1)
	{
		Player_Move(board, ROWS, COLS); /* �����һ�� */
		Display_Board(board, ROWS, COLS); /* ��ӡ���� */
		ret = Is_Win(board, ROWS, COLS);  /* �ж���Ӯ�����Ӯ����*������Ӯ����#��ƽ�ַ���D����ûӮ����C */
		if (ret != 'C') /* ���Is_Win���صĲ���C����ѭ������ */
			break; 
		
		Computer_Move(board, ROWS, COLS); /* ������һ�� */
		Display_Board(board, ROWS, COLS); /* ��ӡ���� */
		ret = Is_Win(board, ROWS, COLS);  /* �ж���Ӯ�����Ӯ����*������Ӯ����#��ƽ�ַ���D����ûӮ����C */
		if (ret != 'C') /* ���Is_Win���صĲ���C����ѭ������ */
			break; 
	} 
	 
	if (ret == '*')
	{
		puts("���Ӯ�ˣ�"); 
	}
	else if (ret == '#')
	{
		puts("����Ӯ�ˣ�"); 
	}
	else
	{
		puts("ƽ�֣�"); 
	} 
	
	Display_Board(board, ROWS, COLS); /* ��ӡ���� */
	
} 

int main(void)
{
	int input; /* ���������ѡ�� */
	
	srand((unsigned int) time(NULL));
	
	do
	{
		Menu();/* �ṩ�˵� */
		
		puts("Please choose:"); /* ����ѡ�� */
		scanf("%d", &input);
		
		switch(input) /* ����ѡ�� */
		{
			case 1: Game() ; break;
			case 0: break; /* break��������Switch������ʱinput = 0����ֱ���˳�do whileѭ�� */
			default: puts("WRONG INPUT! PLEASE ENTER <1/0>\n"); break;
		} 
		
	}while (input); /* ѭ�����������벻Ϊ0 */
	 
	puts("\nGOODBYE!"); 
	
	return 0;
} 


