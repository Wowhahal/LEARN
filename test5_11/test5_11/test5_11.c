#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//ջ�����ֲ���������������ʽ����
//��������̬�ڴ����  //malloc  free  calloc  realloc 
//��̬����ȫ�ֱ�������̬������statint int a=10

//struct S
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	struct S arr[50];//�ܹ����50��struct S ���͵�����
//	return 0;
//}

//C�����ǿ��Դ����䳤���� -C99��������

 //malloc
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ�������ԭ��
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//��������ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ�ʹ����Ϻ�����ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//������̬��ƨ�ռ�Ĵ�С


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//������ʹ��malloc���ٵ�20���ֽ�
//	//��������ռ䲻������ ͨ��ʹ��realloc��������̬���ٵ�����
//	//reallocʹ������
//	//1�����pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2�����pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//3����Ҫ��һ���µı���������realloc�����ķ���ֵ
//	int*ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL; 
//	return 0;
//}

int main()
{
	//1���Կ�ָ����н����ò���
	//int* p = (int*)malloc(40);
	////��һmallocʧ�ܣ�p�ͱ���ֵΪNULL
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//2���Զ�̬���ٵ��ڴ�ռ�Խ�����
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	//free(p);
	//p = NULL;

	int a = 10;
	int* p = &a;
	*p = 20;
	//�ԷǶ�̬���ٵ��ڴ�����ͷ�
	free(p);
	p = NULL;
	return 0;
}