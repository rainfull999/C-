/* �жϵ��ڻ������ֽ��� */
// ����ֽ��򣺰����ݵĵ�λ�ֽ�������ݷ��ڸߵ�ַ������λ�ֽ�������ݷ��ڵ͵�ַ��
// С���ֽ��򣺰����ݵĵ�λ�ֽ�������ݷ��ڵ͵�ַ������λ�ֽ�������ݷ��ڸߵ�ַ�� 
#include <stdio.h>
int main(void)
{
	int a = 0x11223344;
	
	char* p = (char*) &a;
	
	if (*p == 0x44)
	{
		printf("С��\n");
		printf("%x\n", *p);
	}
	if (*p == 0x11)
	{
		printf("���\n");
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
//		printf("С��\n");
//		printf("%x\n", *p);
//	}
//	else
//	{
//		printf("���\n");
//		printf("%x\n", *p);
//	}
//	
//	return 0;
//}  
