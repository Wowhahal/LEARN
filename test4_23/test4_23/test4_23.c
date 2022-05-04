#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int* arr[5];
//	//需要一个数组，这个数组可以存放四个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = {Add, Sub ,Mul ,Div};//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
//char (*pf)(char*, const char*);
////写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

void menu()
{
	printf("************************\n");
	printf("**   1.add     2.sub  **\n");
	printf("**   3.mul     4.div  **\n");
	printf("**        0.exit      **\n");
	printf("************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr是一个函数指针数组 - 转移表
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div ,Xor};
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//	return 0;
//
//}

Calc(int (*pf)(int ,int ))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数：");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}


int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);//回调函数
			/*printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add(x, y));*/
			break;
		case 2:
			Calc(Sub);
			/*printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y));*/
			break; 
		case 3:
			Calc(Mul);
			/*printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y));*/
				break;
		case 4:
			Calc(Div);
			/*printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y));*/
			break;
		case 0:
			printf("退出\n");
			break;
		dafaut:
			printf("选择错误\n");
		}
	} while (input);
}
