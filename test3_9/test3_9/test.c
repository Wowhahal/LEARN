#define  _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	double score;

};
int main()
{
	struct Stu s = {"����",20,85.5 };
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}




//�ṹ��


//��=����+����+���+....
//���Ӷ��󡪡��ṹ������
//����һ���ṹ������
//struct Book
//{
//	char name[20];
//	short price;
//
//};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	strcpy(b1.name,"C++");//strcpy�����ַ������� 
//	//.������  �ṹ�������Ա
//	//-> �ṹ��ָ��->��Ա
//	//printf("������%s\n", (*pb).name);
//	//printf("�۸�%d\n", (*pb).price);
//	//printf("������%s\n", pb->name);
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	return 0;
//}
//


//int main()
//{
//	double d = 3.14;
//	double* pd=&d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p=&a;//p��һ��ָ�����
//	printf("%p\n", p);
//	*p=20;//*�����ò�����
//	printf("a=%d\n", a);
//	return 0;
//}




//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}//ָ����������ַ�ģ� ָ����Ҫ���ռ䣬ȡ���ڶ��ռ�

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	printf("%p\n", p);
//	return 0;
//}

//#define ADD(X,Y) X+Y
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}

//extern int Add(int x, int y);//�����ⲿ����
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//extern int g_val;
//
////int main()
////{
////	printf("%d\n", g_val);
////	return 0;
////}

//
//void test()
//{
//	static int a = 1;  //���ξֲ��������ı�ľֲ��������������ڣ��������Ǹı��˱����Ĵ洢����
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//	//printf("hello world!\n");
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	printf("%d\n",~a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}