#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = 0;
	int i = 0;
	int k = 0;
	scanf("%d", &k);
	sz = sizeof(arr) / sizeof(arr[0]);
	for (i ; i <= sz; i++)
	{
		if (arr[i] == k)
			printf("找到了下标为：%d", i);
	}

	if(k>sz)
	printf("找不到");
	return 0;
}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//1*2*3*4*5 = 120
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("计算n的阶乘：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)  //在for循环后面添加分号会直接运行完毕
//	{
//		ret *=i;
//	}
//	printf("n的阶乘为：%d\n", ret);
//	return 0;
//}