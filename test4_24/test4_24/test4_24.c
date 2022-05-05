#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取数数组的地址
//	
//	int (*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//函数指针的数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int（*）（int ,int)
//
//	return 0;
//}


//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void (*p)(char*))
//{ 
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

void BubbleSort(int arr[], int sz)
{
	//...
}

int main()
{
	//冒泡排序函数
	//只能排序整形数组
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}