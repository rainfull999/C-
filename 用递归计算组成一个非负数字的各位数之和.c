/* �õݹ�������һ���Ǹ����ֵĸ�λ��֮�� */
#include <stdio.h>

int DigitSum(int n)
{
	int r;
	
	if (n > 9) /* ���� */
	{
		r = n % 10 + DigitSum(n / 10); /* ���� */
	}
	else /* ע�⣺���������һλһ����С��10�ģ����Գ���Ҫ >9 */
		return n;
	
	return r;
}

int main(void)
{
	int num;
	int sum;
	
	puts("Enter the number:");
	scanf("%d", &num);
	
	sum = DigitSum(num);
	printf("%d", sum);
	
	return 0;
}
