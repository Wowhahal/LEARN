#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;   
//	char* pc = &a;
//	*pc = 0;
//	//指针类型决定了指针进行解引用操作时，能够访问空间的大小  
//	// int* p; *p能够访问4个字节
//	// char* p; *p能够访问1个字节
//	// double* p; *p能够访问8个字节
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//
// 	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	//指针类型决定了：指针走一步走多远（指针的步长）
//	//int* p; p+1——>4
//	//char* p; p+1——>1
//	//double* p; p+1——>8
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p=arr;//数组名-首元素地址
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a;//局部变量部初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
////空间已经释放
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//NULL -用来初始化指针的，给指针赋值
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int** pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p-=2;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}

//int my_stylen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != 0)
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen-求字符串长度
//	//递归—模拟实现了strlen-计时器、递归
//	char arr[] = "bit";
//	int len = my_stylen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1、&arr-&数组名-数组名不是首元素的地址，-数组名表示整个数组-&数组名 取出的是整个数组的地址
//	//2、sizeof(arr)-sizeof(数组名)-数组名表示整个数组,sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  =====   %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	//int*** pppa = &ppa;
//	**ppa = 30;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	return 0;
//}

//指针数组-数组-存放指针的数组
//数组指针-指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整形数组-存放整形
	//字符数组-存放字符
	//指针数组-存放指针
	//int arr[10];
	int* arr2[3] = { &a ,&b ,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}