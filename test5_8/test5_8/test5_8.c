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

//λ��  - λ ������λ
//struct S
//{
//	int a : 2;//ð�ź����˼�Ǳ���λ
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit - 6���ֽ�
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


//ö������
//enum Sex//�Ա�
//{
//	//ö�ٵĿ���ȡֵ
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


//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE = 4
//};
//
//int main()
//{
//	enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
//	//clr = 5;
//	printf("%d\n", clr);
//	return 0;
//}

//������ - ������

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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	//int a = 0x11223344;
//	//�͵�ַ-----------------�ߵ�ַ
//	//[][][][][11][22][33][44][][][][][]-------����ֽ���
//	//[][][][][44][33][22][11][][][][][]-------С���ֽ���
//	//���۴�С���ֽ�������
//	return 0;
//}


enum Sex//�Ա�
{
	//ö�ٵĿ���ȡֵ
	MALE = 2,
	FEMALE = 9,
	SECRET = 8
};

int main()
{
	enum Sex s = MALE;
	printf("%d\n", sizeof(s));
}