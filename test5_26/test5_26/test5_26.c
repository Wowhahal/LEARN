#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ӡ100-200֮�������
//������ֻ�ܱ�1����������������

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
//	printf("һ����%d������\n", count);
//	return 0;
//}


//����˷��ھ���

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

//�ж�1000��---2000��֮�������
//���꣺�ܱ������������ܱ�100����

//int main()
//{
//	int i = 1000;
//	int count = 0;
//	printf("1000��-2000��֮��������У�\n");
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
//	printf("һ����%d��\n", count);
//	return 0;
//}

//�ݹ��㷨���ݹ����*ÿ�εݹ���õĴ���
//O(N)
//long long Factorial(size_t N)
//{
//	return N < 2 ? N : Factorial(N - 1) * N;
//}

// ����쳲������ݹ�Fibonacci��ʱ�临�Ӷ�
//FIB(N)=2^0+2^1+2^2+...+2^(N-1��-X
//O(2^N)
//��ȫ��һ��û�õ��㷨����Ϊ̫����
long long Fibonacci(size_t N)
{
	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}

int main()
{
	printf("%lld\n", Fibonacci(50));
	return  0;
}

