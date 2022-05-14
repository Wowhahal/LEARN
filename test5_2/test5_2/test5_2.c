#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>


//1、计数器的方法
//2、递归的方法   不创建临时变量
//3、指针-指针

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////size_t = unsigned int 
//int main()
//{
// //  int len = my_strlen("abcdef");
//	///*char arr[] = { 'a','b','c','d','e','f' };
//	//int len = strlen(arr);*/
//	//printf("%d\n", len);
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//	/**dest = *src;
//	//	dest++;
//	//	src++;*/
//	//}
//	//*dest = *src;
//	//拷贝src指向的字符串到dest指向的空间，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回自己空间的地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找到dest中的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30]= "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret=strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else 
//		return -1;
//
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//
//}
//
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "bit";
//	char* p1 = "cde";
//	char* p2 = "cde";
//	strncpy(arr1, arr2, 4);
//	return 0;
//}

int main()
{
	char arr1[30] = "hello\0xxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}