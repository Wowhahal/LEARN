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
	struct Stu s = {"张三",20,85.5 };
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量，成员变量

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}




//结构体


//人=名字+年龄+身高+....
//复杂对象——结构体描述
//创建一个结构体类型
//struct Book
//{
//	char name[20];
//	short price;
//
//};
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	strcpy(b1.name,"C++");//strcpy——字符串拷贝 
//	//.操作符  结构体变量成员
//	//-> 结构体指针->成员
//	//printf("书名：%s\n", (*pb).name);
//	//printf("价格：%d\n", (*pb).price);
//	//printf("书名：%s\n", pb->name);
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d元\n", b1.price);
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
//	int* p=&a;//p是一个指针变量
//	printf("%p\n", p);
//	*p=20;//*解引用操作符
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
//}//指针是用来地址的！ 指针需要多大空间，取决于多大空间

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

//extern int Add(int x, int y);//声明外部符号
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
//	static int a = 1;  //修饰局部变量，改变的局部变量的生命周期，本质上是改变了变量的存储类型
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