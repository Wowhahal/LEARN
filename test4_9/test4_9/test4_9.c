#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;   
//	char* pc = &a;
//	*pc = 0;
//	//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʿռ�Ĵ�С  
//	// int* p; *p�ܹ�����4���ֽ�
//	// char* p; *p�ܹ�����1���ֽ�
//	// double* p; *p�ܹ�����8���ֽ�
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//
// 	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//	//int* p; p+1����>4
//	//char* p; p+1����>1
//	//double* p; p+1����>8
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p=arr;//������-��Ԫ�ص�ַ
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
////�ռ��Ѿ��ͷ�
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL -������ʼ��ָ��ģ���ָ�븳ֵ
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int** pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}

//int my_stylen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != 0)
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen-���ַ�������
//	//�ݹ顪ģ��ʵ����strlen-��ʱ�����ݹ�
//	char arr[] = "bit";
//	int len = my_stylen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1��&arr-&������-������������Ԫ�صĵ�ַ��-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//2��sizeof(arr)-sizeof(������)-��������ʾ��������,sizeof(������)���������������Ĵ�С
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  =====   %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;
//	**ppa = 30;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//ָ������-����-���ָ�������
//����ָ��-ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//��������-�������
	//�ַ�����-����ַ�
	//ָ������-���ָ��
	//int arr[10];
	int* arr2[3] = { &a ,&b ,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}