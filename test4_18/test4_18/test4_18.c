#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0;i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//
//	return 0;
//}

////unsigned char i = 0;//0-255 
////
////int main()
////{
////	for (i = 0; i <= 255; i++)//��Զ����
////	{
////		printf("hello world\n");
////	}
////	return 0;
////}


//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}


//9.0
//1001.0
//(-1)^0 *1.001*2^3
//(-1)^s *M   *2^e

int main()
{
	int n = 9;  //�������ڴ��д���ǲ��� 
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}
