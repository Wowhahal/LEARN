#define  _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//打印100~200之间的素数


//打印1000年到2000年之间的闰年
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4== 0)
//		{
//			if (i % 100 != 0)
//
//			{
//				printf("%d是闰年\n", i);
//				a++;
//			}
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d是闰年\n", i);
//			a++;
//		}
//		
//	}
//	printf("一共有%d个\n", a);
//	return 0;
//}



//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1. 被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
//		if (((y%4==0) && (y%100!=0)) || (y%400==0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//给定两个数，求他们的最大公约数
//辗转相除法
//int main()
//{
//	int a, b = 0;
//	int r = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

////写代码打印1-100中所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//写代码三个数从大到小输出
//int main()
//{
//	int a, b, c = 0;
//	int tep = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tep = a;
//		a = b;
//		b = tep;
//	}
//	if (a < c)
//	{
//		tep = a;
//		a = c;
//		c = tep;
//	}
//	if (b < c)
//	{
//		tep = b;
//		b = c;
//		c = tep;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int  main()
//{
//	char arr1[] = "张博涵爱王笑然";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//int right=strlen(arr1)-1;
//	right = sz - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数 cls-清空屏幕
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



//int  main()
//{
//	char arr1[] = "welcome to world!!!";
//	char arr2[] = "###################" ;
//	int left = 0;
//	int right = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	//int right=strlen(arr1)-1;
//	right = sz-2;
//
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while(r=m%n)
//	{
//
//		m = n;
//		n = r;
//		//printf("%d", n);
//	}
//	printf("%d", n);
//	return 0;
//}