/* �õݹ�ģ��strlen���� */
//  my_strlen("Hello!")
//= 1 + my_strlen("ello!")
//= 1 + 1 + my_strlen("llo!")
//= 1 + 1 + 1 + my_strlen("lo!")
//= 1 + 1 + 1 + 1 + my_strlen("o!")
//= 1 + 1 + 1 + 1 + 1 + my_strlen("!") 
//= 1 + 1 + 1 + 1 + 1 + 1 + my_strlen("")
//= 6 + 0 = 6

#include <stdio.h>
int my_strlen(char * st);

int main(void)
{
	char arr[] = "Hello!";
	
	printf("%d\n", my_strlen(arr));
	
	return 0;
} 

int my_strlen(char * st)
{
	if (*st != '\0') /* ���ǳ��ڣ�'\0' */
	{
		return (1 + my_strlen(st + 1)); /* ��������: st + 1 */
	}
	else
		return 0;
}

//ע�⣬st + 1 ���ܸ�Ϊ st++��Ҳ���Ƽ�ʹ�� ++st�� 




//������ʱ�����ķ�ʽ 
//#include <stdio.h>
//int my_strlen(char * st);
//
//int main(void) 
//{
//	char arr[] = "Hello!";
//	
//	printf("%d\n", my_strlen(arr));
//	
//	return 0;
//}
//
//int my_strlen(char * st)
//{
//	int count = 0;
//	
//	while (*st != '\0')
//	{
//		count++;
//		st++;
//	}
//	return count;
//} 
