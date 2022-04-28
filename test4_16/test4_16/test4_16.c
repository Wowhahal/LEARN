#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//
//{
//	const int num = 10;
//	 int* const p = &num;
//	 // const 放在指针变量的*左边时，修饰的是*p,也就是说不能通过p来改变*p（num）的值
//	 // const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//把src指向的字符串拷贝到dest指向的空间，并且拷贝\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

int my_stylen(const char* str)
{
	int count = 0;
	assert(str != NULL);//断言 保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}