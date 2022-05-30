#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int x = 0;
//	int i = 0;
//	int arr1[9] = { 1,2,3,4,5,6,7,9 };
//	for (i = 0; i <= 9; i++)
//	{
//		x ^= i;
//	}
//	for (i = 0; i < 9; i++)
//	{
//		x ^= arr1[i];
//	}
//	printf("%d\n", x);
//	return 0;
//}

void Reverse(int* num, int left, int right)
{
	while (left < right)
	{
		int tmp = num[left];
		num[left] = num[right];
		num[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr1[7] = { 1,2,3,4,5,6,7 };
	int k = 3;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	if (k >= sz)
		k %= sz;
	//前n-k个数逆置
	Reverse(arr1, 0, sz - k - 1);
	//后n-k个数逆置
	Reverse(arr1, sz - k, sz - 1);
	//整体逆置
	Reverse(arr1, 0, sz - 1);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}

}