#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组-数组-存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针-指向数组
//	//int* p3;//整形指针-指向整形的指针
//	//char* p4;//字符指针-指向字符
//	int arr2[5];
//	int (*pa)[5] = &arr2;//pa就是一个数组指针
//	int(*parr3[10])[5];
//	return 0; 
//}

//void test(int arr[3][5])
//{
//
//}
//
//void test1(int arr[][5])
//{
//
//}
//
////void test2(int arr[3][])//列不能省略
////{
////
////}
//
////void tset(int arr[][])//列不能省略
////{
////
////}

//void test3(int* arr)//err
//{
//
//
//}

//void test4(int** arr)//err
//{
//
//}

//void test5(int(*arr)[5])
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	/*test3(arr);*/
//	//test4(arr);
//	test5(arr);
//	return 0;
//}

////void test1(int* p)
//{
//
//}
//
//void test2(char* p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char* p2 = &ch;
//	test2(&ch);
//	test2(p2);
//	return 0;
//}

//void test(int** p)
//{
//
//}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组也可以
//	return 0;
//}

//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针 - 存放函数地址的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;*/
//	//printf("%d\n", Add(a, b));
//	 
//	
//	//取地址函数名和函数名都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	int (*pa)(int ,int ) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	void (*p)(char*) = Print;
	(*p)("hello bit!");
	return 0;
}