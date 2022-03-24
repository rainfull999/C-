/* 判断一个数是不是2的n次方 */
//2的n次方的数字，其二进制只有一个1 
#include <stdio.h>

int main(void)
{
	int n = 0;
	int count = 0;
	
	puts("Enter the number:");
	while (scanf("%d", &n) == 1)
	{
		if ((n & (n - 1)) == 0) 
			printf("是2的n次方\n");
		else
			printf("不是2的n次方\n");
		
		
		puts("\nEnter next number:");
	}
	
	puts("\nBYE!");
	
	return 0;
} 
