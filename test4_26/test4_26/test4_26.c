#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//数组名是首元素地址
//	//1、sizeof(数组名)- 数组名表示整个数组
//	//2、&数组名 - 数组名表示整个数组
//	//
//	//一维数组
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//sizeof(数组名)-计算数组总大小-单位字节-  16
//	//printf("%d\n", sizeof(a + 0));//4   - 数组名治理表示首元素地址，a+0还是首元素地址
//	//printf("%d\n", sizeof(*a));//4  - 数组名表示首元素地址，*a就是首元素
//	//printf("%d\n", sizeof(a + 1));//4
//	//printf("%d\n", sizeof(a[1]));//4  -第二个元素的大小
//	//printf("%d\n", sizeof(&a));//4  &a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4/8个字节
//	//printf("%d\n", sizeof(*&a));//16  -   &a是数组的地址，数组的地址解引用，访问的是数组，sizeof计算的就是数组的大小，单位字节
//	//printf("%d\n", sizeof(&a + 1));//4  &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//	//printf("%d\n", sizeof(&a[0]));//4
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	//到/0时停止
//	printf("%d\n", strlen(arr));// 随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//
//	
//	//printf("%d\n", sizeof(arr));//6   sizeof计算的是数组大小
//	//printf("%d\n", sizeof(arr + 0));//4/8  arr表示的是首元素的地址，arr+0还是首元素的地址  地址的大小是4/8字节
//	//printf("%d\n", sizeof(*arr));   // 1  arr是首元素地址，*arr就是首元素，首元素是字符，大小是一个字节
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));// 4  &arr 虽然是数组的地址 但还是地址，
//	//printf("%d\n", sizeof(&arr + 1));// 4   &arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 还是地址
//
//	return 0;
//}

int main()
{

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));


	//char* p = "abcdef";
	//printf("%d\n", strlen(p));       //6
	//printf("%d\n", strlen(p + 1));  //5
	////printf("%d\n", strlen(*p));    //err
	////printf("%d\n", strlen(p[0])); //err
	//printf("%d\n", strlen(&p));  //随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5


	//printf("%d\n", sizeof(p));// 4 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));//4  p+1计算的是字符b的地址
	//printf("%d\n", sizeof(*p));// 1  *p就是字符串的第一个字符
	//printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0]==*(arr+0)   p[0] == *(p+0) == 'a'
	//printf("%d\n", sizeof(&p));//4  地址 
	//printf("%d\n", sizeof(&p + 1));//4   跳过p的地址
	//printf("%d\n", sizeof(&p[0] + 1));//4  b的地址


	//char arr[] = "abcdef";

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6    &arr - 取得是数组的地址 - 数组指针char （*）p[7] = &arr
	//printf("%d\n", strlen(&arr + 1));//随机值  
	//printf("%d\n", strlen(&arr[0] + 1));//5
	//printf("%d\n", sizeof(arr));//计算的时数组的大小，单位字节：7
	//printf("%d\n", sizeof(arr + 0));//4/8  计算的是地址的大小
	//printf("%d\n", sizeof(*arr));  // 1  *arr是首元素，计算的是首元素的大小
	//printf("%d\n", sizeof(arr[1]));//1计算的是第二个元素
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8  跳过整个数组后的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8  第二个元素的地址


	return 0;
}