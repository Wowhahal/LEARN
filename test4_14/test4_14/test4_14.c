#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	return 0;
//}

//  ջ���� �ֲ�����   Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ�ַ���Ŀռ�

//���������±����������ַ���ɵ͵��߱仯

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//����\0
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//
//	
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	}
//}
#include <assert.h>

void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

		while (*dest++ = *src++)
		{
			;
		}
	
}

int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "############";
	char arr2[] = "bit";
	my_strcpy(arr1, NULL);
	printf("%s\n", arr1);
	return 0;
}