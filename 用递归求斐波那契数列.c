/* �õݹ���쳲���������Fibonacci Sequence */
//1 1 2 3 5 8 13 21 34 55 ...
//ע�ⲻ����̫������֣�����ջ��� 



//ѭ���ķ���,Ч�ʽϸ� 
#include <stdio.h>

int Fib(int x);

int main(void) 
{
	int num;
	
	puts("Enter the number:");
	scanf("%d", &num);
	
	printf("%d\n", Fib(num));
	
	
	return 0;
}

int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;	
	} 
	
	return c;
}








//����˫�ݹ�ķ���Ч�ʷǳ��� 
//#include <stdio.h>
//
//int Fib(int x);
//int count = 0;
//
//int main(void) 
//{
//	int num;
//	
//	puts("Enter the number:");
//	scanf("%d", &num);
//	
//	printf("%d\n", Fib(num));
//	printf("count = %d\n", count);
//	
//	return 0;
//}
//
//int Fib(int x)
//{
//	if (x == 3) /* ͳ�Ƶ�3��쳲��������ļ������ */
//		count++;
//
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}
