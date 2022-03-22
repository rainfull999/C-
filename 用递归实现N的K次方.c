/* �õݹ�ʵ��N��K�η� */
#include <stdio.h>

double Pow(int n, int k)
{
	int pow = 0;
	
	if (k > 0) /* ���� */
	{
		pow = n * Pow(n, k - 1);
	}
	else if (k == 0) /* k = 0ʱ��PowΪ1 */
		return 1; 
	else if (k < 0) /* kС��0ʱ����-k */
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
