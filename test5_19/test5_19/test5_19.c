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

//4�ֽڶ���

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


//1. Ԥ���� ѡ�� gcc -E test.c -o test.i
//Ԥ�������֮���ͣ������Ԥ����֮������Ľ��������test.i�ļ��С�
//2. ���� ѡ�� gcc - S test.c
//�������֮���ͣ���������������test.s�С�
//3. ��� gcc - c test.c
//������֮���ͣ���������������test.o�С�