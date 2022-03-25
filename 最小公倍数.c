/* 最小公倍数 */
#include <stdio.h>
int main(void)
{
	int m = 5;
	int n = 7;
	int i = 0;
	
	for (i = 1; ; i++)
	{
		if (m * i % n == 0)
		{
			printf("%d\n", m * i);
			break;
		}
	}
	
	return 0;
}


//#include <stdio.h>
//int main(void)
//{
//	int m = 5;
//	int n = 7;
//	int min = 0;
//	
//	min = (m > n) ? m : n;/* 假设最小公倍数是min */
//	
//	while (1)
//	{
//		if (min % m == 0 && min % n == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}	
//		
//		min++; 
//	}
//	
//	return 0;
//}





//#include <stdio.h>
//int main(void)
//{
//	int m = 5;
//	int n = 7;
//	int r = 0;
//	int m1 = 0;
//	int n1 = 0;
//	
//	if (m < n)
//	{
//		m = m ^ n;
//		n = m ^ n;
//		m = m ^ n;
//	}
//	m1 = m;
//	n1 = n;
//	
//	//printf("m = %d, n = %d\n", m, n);
//	
//	if (m % n == 0)
//		printf("最小公倍数是%d\n", m);
//	else
//	{
//		while (m % n != 0)
//		{
//			r = m % n;
//			m = n;
//			n = r;
//		}
//		printf("最小公倍数是%d\n", m1 / n * n1);
//	}
//	
//	return 0;
//}
