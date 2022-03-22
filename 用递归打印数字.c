/* ÓÃµİ¹é´òÓ¡Êı×Ö */
#include <stdio.h>
void print(int x);
int main(void)
{
	int num;
	
	puts("Enter the number:");
	scanf("%d", &num);
	
	print(num);
	
	return 0;
} 

void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	
	printf("%d ", x % 10);
}
