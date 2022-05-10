#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//打印菱形

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//7   输入一半的行数
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line - i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//喝汽水，一瓶汽水1元，两个空瓶子可以换一瓶汽水，问20块一共可以喝多少瓶

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回来的汽水喝掉
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//	//total = money;
//	//empty = money;
//	////换回来的汽水
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total=%d\n", total);
//
//	return 0;
//
//}

void print(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<right)
	{
		//从左边找偶数
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}

	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}