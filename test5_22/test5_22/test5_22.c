#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	//int ret = SQUARE(5);
//
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);
//	return 0;
//}


//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX+MAX);
//	printf("MAX=%d\n", MAX);
//	//int ret= 10 * 5 + 5
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the valud of a is %d\n", a);
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the valud of is %d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello" "world\n");
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int class84 = 2019;
//	printf("%d\n", class84);
//	printf("%d\n", CAT(class, 84));
//	//printf("%d"\n,class##84)
//	//printf("%d"\n,class84)
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a + 1;
//	int c = ++a;
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//#define MAX(X,Y)  (X)>(Y)?(X):(Y)  //带有副作用的宏参数
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max=((a++)>(b++)?(a++):(b++))
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//
//int MAX(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//
//#define MAX(x,y)  (x > y ? x : y)
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数在调用的时候会有函数调用和返回的开销
//
//	//int max = MAX(c, d);
//	//printf("max=%d\n", max);
//	float max = MAX(c, d);
//	printf("max=%lf\n", max);
//
//	//int max = MAX(a, b);
//	//printf("max=%d\n", max);
//	//max = MAX(a, b);
//	//printf("max=%d\n", max);
//
//	return 0;
//}




//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#define MALLOC(num,type)  (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//
//	return 0;
//}

#define MAX 100
int main()
{
	printf("%d\n", MAX);
#undef MAX
	printf("%d\n", MAX);
	return 0;
}