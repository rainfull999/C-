/* 判断整数的二进制中有几个1 */
//n = 15;
//	            n = 1111;
//          n - 1 = 1110;
//n = n & (n - 1) = 1110;
//count++;
//	 
//	            n = 1110;
//		    n - 1 = 1101;
//n = n & (n - 1) = 1100;
//count++;
//
//	            n = 1100;
//          n - 1 = 1011;
//n = n & (n - 1) = 1000;	
//count++;
//
//		        n = 1000;
//          n - 1 = 0111;
//n = n & (n - 1) = 0000;	
//count++;
//
//count = 4;		


#include <stdio.h>
int main(void)
{
	int count = 0;
	int n = 0;
	
	puts("Enter the number:");
	while (scanf("%d", &n) == 1)
	{
		count = 0;
		
		while (n)
		{
			n = n & (n - 1);
			count++;
		}
		printf("count = %d\n", count);
		
		puts("\nEnter next number:");
	}
	
	puts("BYE!");
	
	return 0;
}




//int main(void)
//{
//	int flag;
//	int mask = 1;
//	int count = 0;
//	
//	puts("Enter the number:");
//	scanf("%d", &flag);
//	
//	printf("Decimal: flag = %d\n", flag);
//	
//	do
//	{
//		if ((flag & mask) == mask) /* 比较 flag 的最后一位是否为 1，如果是，计数器加1 */ 
//			count++;
//			
//		flag >>= 1; /* 比较完成后，flag右移一位 */
//		
//	}while (flag); /* flag不为0时，循环继续 */
//	
//	printf("count = %d\n", count);
//	
//	return 0;
//}



//明确要求计算32位的二进制时用这种方法 
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	
//	puts("Enter the number:");
//	while (scanf("%d", &n) == 1)
//	{
//		for (i = 0, count = 0; i < 32; i++)
//		{
//			if ((n >> i) & 1 == 1)
//				count++;
//		}
//		
//		printf("有%d个1。\n", count);
//		
//		puts("\nEnter next number:");
//	}
//	
//	puts("BYE!");
//	
//	return 0;
//} 
