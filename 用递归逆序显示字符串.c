/* �õݹ�������ʾ�ַ��� */
//��һ������������Ԫ��[0]����temp�У� 
//�ڶ������������һ��Ԫ�ط���[0]�У� 
//��������Ϊ�˷�ֹ����������Ԫ�ؼ���ڶ��εݹ飬��ʱ���ܰ���Ԫ�طŵ����һ��Ԫ�ص�λ�ã�����Ӧ�÷�'\0'��
//���Ĳ������õݹ�������
//���岽����temp�е���Ԫ�ط������һ��Ԫ�ص�λ�á� 
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
	
	if (my_strlen(str + 1) >= 2) /* ���ڣ��м���ַ������ٵ���2���ַ����ܼ����ݹ� */
	{
		temp = *str;
		*str = *(str + len - 1);
		*(str + len - 1) = '\0';
		reverse_str(str + 1); /* ���������������м��ƶ� */
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


//��ѭ���ķ��� 
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
