#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	return 0;
//}

//  栈区： 局部变量   默认使用：先使用高地址处的空间，再使用地址处的空间

//数组随着下标的增长，地址是由低到高变化

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//拷贝\0
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
	//字符串拷贝
	char arr1[] = "############";
	char arr2[] = "bit";
	my_strcpy(arr1, NULL);
	printf("%s\n", arr1);
	return 0;
}