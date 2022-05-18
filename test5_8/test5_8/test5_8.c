#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'w';
//	tmp->d = 3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//void Print2(const struct S* tmp)
//{
//	printf("%d %c %lf\n", tmp->a, tmp->c, tmp->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//	//printf("%d\n", s.a);
//	return 0;
//}

//位段  - 位 二进制位
//struct S
//{
//	int a : 2;//冒号后的意思是比特位
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit - 6个字节
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


//枚举类型
//enum Sex//性别
//{
//	//枚举的可能取值
//	MALE = 2,
//	FEMALE = 9,
//	SECRET = 8
//};

//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//
//};

//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//
//	//enum Color c = 2;
//
//	int color = RED;
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE,FEMALE,SECRET);
//	return 0;
//}


//enum Color//颜色
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//
//int main()
//{
//	enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
//	//clr = 5;
//	printf("%d\n", clr);
//	return 0;
//}

//联合体 - 共用体

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.c));
//	return 0;
//}

//int check_sky(int* k)
//{
//	int x = *(char*)k;
//	return x;
//}

//int check_sky()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}

//int main()
//{
//	int a = 1;
//	int ret = check_sky(&a);
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//int a = 0x11223344;
//	//低地址-----------------高地址
//	//[][][][][11][22][33][44][][][][][]-------大端字节序
//	//[][][][][44][33][22][11][][][][][]-------小端字节序
//	//讨论大小端字节序问题
//	return 0;
//}


enum Sex//性别
{
	//枚举的可能取值
	MALE = 2,
	FEMALE = 9,
	SECRET = 8
};

int main()
{
	enum Sex s = MALE;
	printf("%d\n", sizeof(s));
}