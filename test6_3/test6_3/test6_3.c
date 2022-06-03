#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a, b;
//
//	int avg = 0;
//
//	scanf("%d%d", &a, &b);
//
//	avg = (a+ b) >> 1;
//
//	//右移一位相当于除以2
//
//	printf("%d\n", avg);
//	return 0;
//}	


//int main()
//{
//	int a, b;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = a - (a - b) / 2;
//	printf("%d\n", c);
//	return 0;
//}

int main()
{
	int a, b;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = (a & b) + ((a ^ b) >> 1);
	printf("%d\n", c);
	return 0;
}