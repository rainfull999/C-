/* 判断当期机器的字节序 */
// 大端字节序：把数据的低位字节序的内容放在高地址处，高位字节序的内容放在低地址处
// 小端字节序：把数据的低位字节序的内容放在低地址处，高位字节序的内容放在高地址处 
#include <stdio.h>
int main(void)
{
	int a = 0x11223344;
	
	char* p = (char*) &a;
	
	if (*p == 0x44)
	{
		printf("小端\n");
		printf("%x\n", *p);
	}
	if (*p == 0x11)
	{
		printf("大端\n");
		printf("%x\n", *p);
	}
	
	return 0;
}

//#include <stdio.h>
//int main(void)
//{
//	int a = 1;
//	
//	char* p = (char*) &a;
//	
//	if (*p == 1)
//	{
//		printf("小端\n");
//		printf("%x\n", *p);
//	}
//	else
//	{
//		printf("大端\n");
//		printf("%x\n", *p);
//	}
//	
//	return 0;
//}  
