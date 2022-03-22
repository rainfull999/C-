/* 用递归逆序显示字符串 */
//第一步：把数组首元素[0]放入temp中； 
//第二步：把书最后一个元素放入[0]中； 
//第三步：为了防止逆序函数把首元素加入第二次递归，此时不能把首元素放到最后一个元素的位置，而是应该放'\0'；
//第四步：设置递归条件；
//第五步：把temp中的首元素放入最后一个元素的位置。 
#include <stdio.h> 

int my_strlen(char *arr)
{
	int count = 0;
	
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	
	return count; 
}

void reverse_str(char * str)
{
	char temp;
	int len = my_strlen(str);
	
	if (my_strlen(str + 1) >= 2) /* 出口：中间的字符串至少得有2个字符才能继续递归 */
	{
		temp = *str;
		*str = *(str + len - 1);
		*(str + len - 1) = '\0';
		reverse_str(str + 1); /* 条件：由两边向中间移动 */
		*(str + len - 1) = temp;
	}
}

int main(void)
{
	char arr[] = "Hello!";
	
	reverse_str(arr);
	printf("%s ", arr);	
	
	return 0;
} 


//用循环的方法 
//int my_strlen(char arr[])
//{
//	int count = 0;
//	int i = 0;
//	
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	
//	return count; 
//}
//
//void reverse_str(char * str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	char temp;
//	
//	while (left < right)
//	{
//		temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main(void)
//{
//	char arr[] = "abcdef";
//	
//	reverse_str(arr);
//	printf("%s ", arr);	
//	
//	return 0;
//} 
