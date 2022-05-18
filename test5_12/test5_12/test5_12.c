#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <string.h>

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int* p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//
//	int* p = realloc(NULL, 40);
//	return 0;
//}


//int main()
//{
////{
////	int* p = (int*)malloc(40);
////	if (p == NULL)
////	{
////		return 0;
////	}
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		*p++ = i;
////	}
////	//回收空间
////	//4、错误：使用free没有释放全部的内存空间
////	free(p);
////	p = NULL;
//
////5、对同一块动态内存多次释放
//	//int* p = (int*)malloc(40);
//	//if (p = NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	//p = NULL;
//	////...
//	//free(p);
//
//	//6、动态开辟的内存忘记释放（内存泄露）
//
//	//while (1)
//	//{
//	//	malloc(1);
//	//	sleep(1000);
//
//	//}
//
//	return 0;
//}
// 
// 
//改正1
//void GetMemory(char** p)
//{
//	 *p = (char*)malloc(100);
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	//char* str = "abcdef";
//	//printf(str);
//	return 0;
//}

//char* GetMemory(char* p)
//{
//	return p = (char*)malloc(100);
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	//char* str = "abcdef";
//	//printf(str);
//	return 0;
//}


//返回栈空间地址的问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	//static int a=10; //静态区
//	int a = 10;//栈区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	* p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//忘记释放动态开辟内存，导致内存泄露
//	//改
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free释放str指向的空间后，并不会把str置为NULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}