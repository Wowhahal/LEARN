#define  _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include<time.h>

//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = get_max(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//void swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void swap2(int *x, int *y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap2(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//int sushu(int a)
//{
//	int i = 0;
//	for (i = 2; i <= a / 2; i++)
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int c = 0;
//	int a = 0;
//	scanf("%d", &a);
//	c = sushu(a);
//	if (c == 1)
//		printf("%d是素数\n", a);
//	else
//		printf("%d不是素数\n", a);
//	return 0;
//}

//int runnian(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int c = 0;
//	scanf("%d", &a);
//	c = runnian(a);
//		if (c == 1)
//		printf("%d是闰年\n", a);
//	else
//		printf("%d不是闰年\n", a);
//
//	return 0;
//}

//int binary_search(int *arr, int k,int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	int mid = 0;
//		while (left <= right)
//		{
//			mid = (right + left) / 2;
//		
//			if (k < arr[mid])
//			{
//				right = mid-1;
//			}
//			else if(k > arr[mid])
//			{
//				left = mid+1;
//			}
//			else
//			{
//				return mid;
//			}
//	     }
//		if (left > right)
//			return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int c = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	c=binary_search(arr,k,sz);
//	if (c != 0)
//		printf("找到了，下标是%d\n", c);
//	else
//		printf("找不到\n");
//
//	return 0;
//}
//void add(int *x)
//{
//	(*x)++;
//}
//
//int main()
//{
//	int nu= 0;
//	add(&nu);
//	printf("%d\n", nu);
//	add(&nu);
//	printf("%d\n", nu);
//	add(&nu);
//	printf("%d\n", nu);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x%10);
//}
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}

//不允许创建临时变量 求字符串的长度

//int str(char* xz)
//{
//	if (*xz != '\0')
//		return 1 + str(xz + 1);
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = str(arr);
//	printf("%d", len);
//	return 0;
//}

//int jiecheng(int x)
//[
//	
//
//]
//
//int main()
//{
//	int c = 0;
//	int a = 0;
//	scanf("%d", &a);
//	c = jiecheng(a);
//	printf("%d\n", c);
//	return 0;
//}