#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//void* my_memcpy(void* dest,const void* src,size_t count)
//{
//	char* ret = dest;
//	assert(dest && src);
//
//
//	int i = count;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest<src||dest>(char*)src +count)
//	{
//		//从前到后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前
//		while (count--)
//				{
//					*(((char*)dest + count)) = *(((char*)src + count));
//				}
//	}
//
//	//if (dest < src)
//	//{
//	//	//从前向后
//	//	while (count--)
//	//	{
//	//		*(char*)dest = *(char*)src;
//	//		++(char*)dest;
//	//		++(char*)src;
//	//	}
//	//}
//	//else
//	//{
//	//	//从后向前
//	//	while (count--)
//	//	{
//	//		*(((char*)dest + count)) = *(((char*)src + count));
//	//	}
//	//}
//	return ret;
//}
//
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[10] = { 0 };
//	//my_memcpy(arr2, arr1,sizeof(arr1));
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//memmove(arr3 + 2, arr3, 20);
//
//	my_memmove(arr3 , arr3+2, 20);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset-- 内存设置

//int main()
//{
//	/*char arr[10] = "";
//	memset(arr, '#', 10);*/
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);
//	//10是字节的意思
//
//	return 0;
//}

//自定义类型：结构体、枚举、联合体

//声明一个结构体类型
//声明一个学生类型，是想过学生类型来创建学生变量（对象）
//描述学生：属性- 名字+电话+性别+年龄
//struct stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;
//} s4,s5,s6;//全局变量
//
//struct stu s3;//全局变量
//
//int main()
//{
//	//创建结构体变量(局部)
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}*psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}

struct Node
{
	int data;//4
	struct Node* next;//4
};
int main()
{
	int sz=sizeof(struct Node);
	printf("%d\n", sz);
	return 0;
}