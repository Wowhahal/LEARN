#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//给定两个整形变量的值，将两个值的内容进行交换

//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//不允许创建临时变量，交换两个数的内容
//20 10100
//30 11110
//异或  01010
//20    10100
//异或  11110
//30    11110
//异或  10100

//void swap2(int* x, int* y)
//{
//	*x = *x ^ *y;  //01010
//	*y = *x ^ *y;  //
//	*x = *x ^ *y;  //01010  10100  11110
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap2(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//求10 个整数中最大值

//int main()
//{
//	int a[10] = { 0 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//将三个数按从大到小输出

//int main()
//{
//	int a[3] = { 0 };
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 1 - i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//求两个数的最大公约数

//30 15

int main()
{
	int a = 0;
	int b = 0;
	int tmp = 0;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	for(int i=b ; i>0 ; i--)
	{ 
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}