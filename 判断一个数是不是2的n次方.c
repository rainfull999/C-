/* �ж�һ�����ǲ���2��n�η� */
//2��n�η������֣��������ֻ��һ��1 
#include <stdio.h>

int main(void)
{
	int n = 0;
	int count = 0;
	
	puts("Enter the number:");
	while (scanf("%d", &n) == 1)
	{
		if ((n & (n - 1)) == 0) 
			printf("��2��n�η�\n");
		else
			printf("����2��n�η�\n");
		
		
		puts("\nEnter next number:");
	}
	
	puts("\nBYE!");
	
	return 0;
} 
