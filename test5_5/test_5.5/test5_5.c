#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>




//int main()
//{
//	/*char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);*/
//
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
//
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三",20},{"李四",30 } };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	
//	//my_memcpy(arr1, arr2,sizeof(arr1));
//
//	// char* dest , const char* src
//	//strcpy(arr2, arr1);
//
//	memcpy(arr2, arr1, sizeof(arr1));
//
//
//
//	return 0;
//}


//C语言标准：
//memcopy 只要处理不重叠的内容拷贝就可以
//memmove 处理重叠内存的拷贝

void* my_memmove(void* dest, void* src, size_t)
{

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	/*my_memcpy(arr + 2, arr, 20);*/
	my_memmove(arr + 2, arr, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}