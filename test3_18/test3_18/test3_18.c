#define  _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include<time.h>

int main()
{
	int a[] = { 0 };
	int right, left = 0;
	int sz = 0;
	scanf("%d", &a);
	sz = sizeof(a);
	right = sz - 2;
	for (i = right; i >0; i--)
	{
		for (j = right; j > 0; j--)
		{
			if(a[j]!=a)
		}
	}
	return 0;
}

//int main()
//{
//	double a = 0.0;
//	double b = 0;
//	scanf("%lf", &a);
//	b = a - (int)a;
//	if (b < 0.5)
//		a = (int)a;
//	else
//	{
//		a = a + 0.5;
//		a = (int)a;
//	}
//	printf("%lf", a);
//	return 0;
//}

//计算字符串最后一个单词的长度
//int main()
//{
//	char a[5000] = { 0 };
//	int b = 0;
//	scanf("%s", &a);
//	b=strlen(a);
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		printf("我爱王笑然%d\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

