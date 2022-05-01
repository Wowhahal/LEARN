#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//int* p = NULL;//p是整形指针 - 指向整形的指针-可以存放整形的地址
//	//char* pc = NULL;//pc是字符指针- 指向字符的指针 - 可以存放字符的地址
//
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//p就是数组指针
//
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//数组指针
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;//数组指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa==arr
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}


void print1(int arr[3][5], int x, int y)//参数是数组的形式
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int x, int y)//参数是指针的形式
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
			////printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p + i))[j]);
			
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr,3,5 );//arr - 数组名 - 数组名就是首元素地址
	print2(arr, 3, 5);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = arr;
	//for (i = 0; i < 10; i++)
	//{
	//	//printf("%d ", *(p + i));
	//	//printf("%d ", *(arr + i));
	//	//printf("%d ", arr[i]);//arr[i] == *(arr+i)  == *(p+i) ==p[i]
	//	printf("%d ", p[i]);
	//}
	return 0;
}