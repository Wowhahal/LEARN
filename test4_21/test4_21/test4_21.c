#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������-����-���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��-ָ������
//	//int* p3;//����ָ��-ָ�����ε�ָ��
//	//char* p4;//�ַ�ָ��-ָ���ַ�
//	int arr2[5];
//	int (*pa)[5] = &arr2;//pa����һ������ָ��
//	int(*parr3[10])[5];
//	return 0; 
//}

//void test(int arr[3][5])
//{
//
//}
//
//void test1(int arr[][5])
//{
//
//}
//
////void test2(int arr[3][])//�в���ʡ��
////{
////
////}
//
////void tset(int arr[][])//�в���ʡ��
////{
////
////}

//void test3(int* arr)//err
//{
//
//
//}

//void test4(int** arr)//err
//{
//
//}

//void test5(int(*arr)[5])
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//��ά���鴫��
//	//test1(arr);
//	//test2(arr);
//	/*test3(arr);*/
//	//test4(arr);
//	test5(arr);
//	return 0;
//}

////void test1(int* p)
//{
//
//}
//
//void test2(char* p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char* p2 = &ch;
//	test2(&ch);
//	test2(p2);
//	return 0;
//}

//void test(int** p)
//{
//
//}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ������Ҳ����
//	return 0;
//}

//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ�� - ��ź�����ַ��ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int arr[10] = { 0 };
//	int(*p)[10] = &arr;*/
//	//printf("%d\n", Add(a, b));
//	 
//	
//	//ȡ��ַ�������ͺ��������Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	int (*pa)(int ,int ) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

void Print(char* str)
{
	printf("%s\n", str);
}

int main()
{
	void (*p)(char*) = Print;
	(*p)("hello bit!");
	return 0;
}