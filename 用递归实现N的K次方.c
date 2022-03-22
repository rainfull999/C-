/* 用递归实现N的K次方 */
#include <stdio.h>

double Pow(int n, int k)
{
	int pow = 0;
	
	if (k > 0) /* 出口 */
	{
		pow = n * Pow(n, k - 1);
	}
	else if (k == 0) /* k = 0时，Pow为1 */
		return 1; 
	else if (k < 0) /* k小于0时，用-k */
		return 1.0 / (Pow(n, -k));
	
	return pow;
}

int main(void)
{
	int x, y;
	
	puts("Enter two numbers:");
	scanf("%d %d", &x, &y);
	
	if (y >= 0)
		printf("%d\n", (int)Pow(x, y));
	if (y < 0)
		printf("%f\n", Pow(x, y));
	
	return 0;
} 
