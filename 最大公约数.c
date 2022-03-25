/* 最大公约数（辗转相除法） */
#include <stdio.h>
int main(void)
{
	int x, y, r;
	int temp;
	
	puts("Enter two numebrs:");
	scanf("%d %d", &x, &y);
	
	if (x < y)/* 把x和y从大到小排列 */
	{
		temp = x;
		x = y;
		y = temp;
	}
	
	if (x % y == 0)
		printf("最大公约数 = %d\n", y);
	else
	{
		while (x % y != 0)
		{
			r = x % y;
			x = y; 
			y = r;
		}
		printf("最大公约数 = %d\n", r);
	}
	
	puts("Bye!");
	return 0;
 } 
