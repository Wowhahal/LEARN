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
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//	
//	int (*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//����ָ�������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr��һ��ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int��*����int ,int)
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
	//ð��������
	//ֻ��������������
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}