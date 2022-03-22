/* 用递归模拟strlen函数 */
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
	if (*st != '\0') /* 这是出口：'\0' */
	{
		return (1 + my_strlen(st + 1)); /* 这是条件: st + 1 */
	}
	else
		return 0;
}

//注意，st + 1 不能改为 st++，也不推荐使用 ++st。 




//创建临时变量的方式 
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
