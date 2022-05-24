#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//时间复杂度：F(N)= N*N +2*N+ 10    O(N^2)
//void Func1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	} 
//	printf("%d\n", count);
//}
//
//int main()
//{
//	Func1(100);
//	return 0;
//}

//时间复杂度：2N+10   即O(N)
//void Func2(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//
//int main()
//{
//	Func2(100);
//	return 0;
//}

//时间复杂度 O(M+N)
//void Func3(int N, int M)
//{
//	int count = 0;
//	for (int k = 0; k < M; ++k)
//	{
//		++count;
//	}
//	for (int k = 0; k < N; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//int main()
//{
//	Func3(100,100);
//	return 0;
//}


//时间复杂度   100      O(1)不是代表算法运行1次，是常熟次
//void Func4(int N)
//{
//	int count = 0;
//	for (int k = 0; k < 100; ++k)
//	{
//		++count;
//	}
//	printf("%d\n", count);
//}
//
//int main()
//{
//	Func4(10);
//	return 0;
//}

//一个算法随着输入不同，时间复杂度不同，时间复杂度做悲观预期，看最坏的情况
#include <string.h>


//const char* strchr(const char* str, int character);
//即
//while (*str)
//{
//	if (*str == character)
//		return str;
//	else
//		++str;
//}

int main()
{
	const char arr[] = "hello world";
	char ret=strchr(arr, 'h');
	printf("%c\n", ret);
	return 0;
}

