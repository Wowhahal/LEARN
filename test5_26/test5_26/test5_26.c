#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//打印100-200之间的素数
//素数：只能被1和他本身整除的数

//int main()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 2;
//		for (a = 2; a < i; a++)
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//			else if(a == i - 1)
//			{
//				printf("%d ", a+1);
//				count++;
//			}
//		}
//	}
//	printf("\n");
//	printf("一共有%d个素数\n", count);
//	return 0;
//}


//输出乘法口诀表

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (k = 1; k <= i; k++)
//		{
//
//			printf("%2d * %d = %-2d  ", i, k, i * k);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//判断1000年---2000年之间的闰年
//闰年：能被四整除但不能被100整除

//int main()
//{
//	int i = 1000;
//	int count = 0;
//	printf("1000年-2000年之间的闰年有：\n");
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i%400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\n");
//	printf("一共有%d个\n", count);
//	return 0;
//}

//递归算法：递归次数*每次递归调用的次数
//O(N)
//long long Factorial(size_t N)
//{
//	return N < 2 ? N : Factorial(N - 1) * N;
//}

// 计算斐波那契递归Fibonacci的时间复杂度
//FIB(N)=2^0+2^1+2^2+...+2^(N-1）-X
//O(2^N)
//完全是一个没用的算法，因为太慢了
long long Fibonacci(size_t N)
{
	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}

int main()
{
	printf("%lld\n", Fibonacci(50));
	return  0;
}

