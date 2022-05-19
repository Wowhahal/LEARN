#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef struct {
//	int a;  //0-3  4
//	char b;//1  8  1  4
//	//5
//	short c;//2  8  2  6-7
//	short d;//2  8  2  8-9
//}AA_t;
////10   4
////12
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//
//	return 0;
//}

//4字节对齐

//struct A
//{
//	int a;///0-3  
//	short b;//2 4 2 4-5
//	//6-7
//	int c;//4 4 4  8-11
//	char d;//1 4 1 12
//	//13-15
//};
////13  4    16
//
//struct B
//{
//	int a;//0-3
//	short b;//4-5
//	char c;//6
//	//7
//	int d;//8-12
//};//12 4 12
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	return 0;
//}

//extern int ADD(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//1. 预处理 选项 gcc -E test.c -o test.i
//预处理完成之后就停下来，预处理之后产生的结果都放在test.i文件中。
//2. 编译 选项 gcc - S test.c
//编译完成之后就停下来，结果保存在test.s中。
//3. 汇编 gcc - c test.c
//汇编完成之后就停下来，结果保存在test.o中。