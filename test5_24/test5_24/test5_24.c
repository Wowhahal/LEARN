#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ʱ�临�Ӷȣ�F(N)= N*N +2*N+ 10    O(N^2)
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

//ʱ�临�Ӷȣ�2N+10   ��O(N)
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

//ʱ�临�Ӷ� O(M+N)
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


//ʱ�临�Ӷ�   100      O(1)���Ǵ����㷨����1�Σ��ǳ����
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

//һ���㷨�������벻ͬ��ʱ�临�ӶȲ�ͬ��ʱ�临�Ӷ�������Ԥ�ڣ���������
#include <string.h>


//const char* strchr(const char* str, int character);
//��
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

