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
//	//��Ҫһ�����飬���������Դ���ĸ������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = {Add, Sub ,Mul ,Div};//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
//char (*pf)(char*, const char*);
////дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
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
//	//pfArr��һ������ָ������ - ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div ,Xor};
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
	printf("������������������");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);//�ص�����
			/*printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add(x, y));*/
			break;
		case 2:
			Calc(Sub);
			/*printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y));*/
			break; 
		case 3:
			Calc(Mul);
			/*printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y));*/
				break;
		case 4:
			Calc(Div);
			/*printf("������������������");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y));*/
			break;
		case 0:
			printf("�˳�\n");
			break;
		dafaut:
			printf("ѡ�����\n");
		}
	} while (input);
}
