/* 用递归计算组成一个非负数字的各位数之和 */
#include <stdio.h>

int DigitSum(int n)
{
	int r;
	
	if (n > 9) /* 出口 */
	{
		r = n % 10 + DigitSum(n / 10); /* 条件 */
	}
	else /* 注意：别忘了最后一位一定是小于10的，所以出口要 >9 */
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
