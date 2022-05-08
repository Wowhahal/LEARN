#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0])); //16  相当于第一行作为一维数组的数组名，a[0]单独放在sizeof中计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));// 4  第一行第二个元素的地址  a[0]是第一行的数组名，是首元素的地址，其实就是第一行第一个元素的地址
//									//		所以a[0]+1就是第一行第二个元素的地址：地址的大小是4/8个字节
//	printf("%d\n", sizeof(*(a[0] + 1)));//4  *(a[0] + 1)  是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1));//  4   a是二维数组的数组名，没有sizeof（数组名），也没有&（数组名）所以a是首元素地址
//									// 而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址
//									// a+1就是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16  sizeof（a[1]）计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));//4  第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));// 16  计算第二行的大小 单位是字节
//	printf("%d\n", sizeof(*a));//16  a是首元素地址 - 第一行的地址，*a就是第一行，sizeof（*a）就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}

//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}


//struct Test
//{
//	int Num;  
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//  %p 表示的是地址   0x100000+20=0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//  整形加1 就是加一
//	printf("%p\n", (unsigned int*)p + 0x1);//  0x00100004  加1相当于加了一个无符号的字节 相当于加4
//	return 0;
//}


//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1]  ==  *(p+(-1))  ==  *(p-1)
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//{1,3,5}
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);//  1
//    return 0;
//}


int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;  //   int (*)[4]             int (*) [5]
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); // p[4][2] - *(*(p+4)+2)
    return 0;
}
