#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>

//void Print()
//{
//	printf("%s\n",str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}


//void(*signal(int, void (*)(int)))(int);
//
////signal是一个函数声明
////signal函数的参数有两个，第一个是int,第二个是指针，该函数指针指向的函数的参数市int，返回类型是void
////signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//
//typedef void(* pfun_t)(int);//重命名
//
//pfun_t signal(int, pfun_t);
//
//
//
//
//typedef  unsigned int unit;//对unsignal重命名

//int  Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//指针数组
	int* arr[5];

	return 0;
}