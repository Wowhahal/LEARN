#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


//冒泡排序的时间复杂度  精确：N*(N-1)/2   O(N^2）

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void BubbleSort(int* a, int n)
{
	assert(a);
	for (size_t end = n; end > 0; --end)
	{
		int exchange = 0;
		for (size_t i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}
//
//int main()
//{
//	int arr[10] = { 1,3,5,6,2,4,8,9,7,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (int i = 0; i < 10; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


int BinarySearch(int* a, int n, int x)
{
	assert(a);
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[10] = { 1,3,5,6,2,4,8,9,7,10 };
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr, sz);
	int ret = BinarySearch(arr, sz, k);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}

	return 0;
}
