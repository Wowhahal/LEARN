#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <string.h>

//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int* p2 = realloc(p, 80);
//	//if (p2 != NULL)
//	//{
//	//	p = p2;
//	//}
//
//	int* p = realloc(NULL, 40);
//	return 0;
//}


//int main()
//{
////{
////	int* p = (int*)malloc(40);
////	if (p == NULL)
////	{
////		return 0;
////	}
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		*p++ = i;
////	}
////	//���տռ�
////	//4������ʹ��freeû���ͷ�ȫ�����ڴ�ռ�
////	free(p);
////	p = NULL;
//
////5����ͬһ�鶯̬�ڴ����ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p = NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	//p = NULL;
//	////...
//	//free(p);
//
//	//6����̬���ٵ��ڴ������ͷţ��ڴ�й¶��
//
//	//while (1)
//	//{
//	//	malloc(1);
//	//	sleep(1000);
//
//	//}
//
//	return 0;
//}
// 
// 
//����1
//void GetMemory(char** p)
//{
//	 *p = (char*)malloc(100);
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	//char* str = "abcdef";
//	//printf(str);
//	return 0;
//}

//char* GetMemory(char* p)
//{
//	return p = (char*)malloc(100);
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	//char* str = "abcdef";
//	//printf(str);
//	return 0;
//}


//����ջ�ռ��ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	//static int a=10; //��̬��
//	int a = 10;//ջ��
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	* p = 20;
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�����ͷŶ�̬�����ڴ棬�����ڴ�й¶
//	//��
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}