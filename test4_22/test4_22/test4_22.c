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
////signal��һ����������
////signal�����Ĳ�������������һ����int,�ڶ�����ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
////signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//
//typedef void(* pfun_t)(int);//������
//
//pfun_t signal(int, pfun_t);
//
//
//
//
//typedef  unsigned int unit;//��unsignal������

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
	//ָ������
	int* arr[5];

	return 0;
}