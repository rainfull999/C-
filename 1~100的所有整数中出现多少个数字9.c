/* 1~100�����������г��ֶ��ٸ�����9 */
#include <stdio.h>
int main(void)
{
	int i;
	int count = 0;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9) /* ��λ����9 */
		{
			count++;
			printf("%5d ", i);
			
			if (count % 5 == 0)
			printf("\n");
		}
		if (i / 10 == 9) /* ʮλ����9����99�г�����2��9������Ҫ��2�Σ�����Ͳ�����else if */
		{
			count++;
			printf("%5d ", i);
			
			if (count % 5 == 0)
			printf("\n");
		}
	}
	printf("\ncount = %d\n", count); 
	
	return 0;	
}
