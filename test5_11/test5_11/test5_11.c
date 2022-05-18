#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//栈区：局部变量、函数的形式参数
//堆区：动态内存分配  //malloc  free  calloc  realloc 
//静态区：全局变量、静态变量、statint int a=10

//struct S
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	struct S arr[50];//能够存放50个struct S 类型的数据
//	return 0;
//}

//C语言是可以创建变长数组 -C99中增加了

 //malloc
#include <string.h>
#include <errno.h>

//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//打印出错误的原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常进行使用
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
//	//当动态申请的空间使用完毕后进行释放
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
//	//释放空间
//	//free函数是用来释放动态开辟的空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc
//调整动态开屁空间的大小


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
//	//就是在使用malloc开辟的20个字节
//	//假设这里空间不够用了 通过使用realloc来调整动态开辟的内容
//	//realloc使用事项
//	//1、如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2、如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//3、需要用一个新的变量来接收realloc函数的返回值
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
//	//释放内存
//	free(p);
//	p = NULL; 
//	return 0;
//}

int main()
{
	//1、对空指针进行解引用操作
	//int* p = (int*)malloc(40);
	////万一malloc失败，p就被赋值为NULL
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//2、对动态开辟的内存空间越界访问
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
	//对非动态开辟的内存进行释放
	free(p);
	p = NULL;
	return 0;
}