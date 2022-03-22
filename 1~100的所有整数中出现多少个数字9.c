/* 1~100的所有整数中出现多少个数字9 */
#include <stdio.h>
int main(void)
{
	int i;
	int count = 0;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9) /* 个位数是9 */
		{
			count++;
			printf("%5d ", i);
			
			if (count % 5 == 0)
			printf("\n");
		}
		if (i / 10 == 9) /* 十位数是9。但99中出现了2个9，所以要算2次，这里就不能用else if */
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
