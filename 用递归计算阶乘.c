/* �õݹ����׳� */
//n <  1 ʱ�� Fac = 1;
//n >= 1 ʱ�� Fac = n * Fac(n - 1); 

#include <stdio.h>

int main(void) 
{
	int num;
	
	puts("Enter the number:");
	scanf("%d", &num);
	
	printf("%d\n", Fac(num));
	
	return 0;
}

int Fac(int x)
{
	if (x < 1)
		return 1;
	else
		return x * Fac(x - 1); 
}
