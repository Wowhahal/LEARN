#define  _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//��ӡ100~200֮�������


//��ӡ1000�굽2000��֮�������
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
//				printf("%d������\n", i);
//				a++;
//			}
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d������\n", i);
//			a++;
//		}
//		
//	}
//	printf("һ����%d��\n", a);
//	return 0;
//}



//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1. ��4���������ܱ�100����������
//		//2. �ܱ�400����������
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


//�����������������ǵ����Լ��
//շת�����
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

////д�����ӡ1-100������3�ı���
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



//д�����������Ӵ�С���
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
//	char arr1[] = "�Ų�������ЦȻ";
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
//		system("cls");//ִ��ϵͳ�����һ������ cls-�����Ļ
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