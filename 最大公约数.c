/* ���Լ����շת������� */
#include <stdio.h>
int main(void)
{
	int x, y, r;
	int temp;
	
	puts("Enter two numebrs:");
	scanf("%d %d", &x, &y);
	
	if (x < y)/* ��x��y�Ӵ�С���� */
	{
		temp = x;
		x = y;
		y = temp;
	}
	
	if (x % y == 0)
		printf("���Լ�� = %d\n", y);
	else
	{
		while (x % y != 0)
		{
			r = x % y;
			x = y; 
			y = r;
		}
		printf("���Լ�� = %d\n", r);
	}
	
	puts("Bye!");
	return 0;
 } 
