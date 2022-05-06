#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int,int) = Add;
//	///*int sum = (*pAdd)(1, 2);*/
//	//int sum = pAdd(1, 2);
//	//		//Add(1,2);
//	//printf("%d\n", sum);
//	//����ָ�������
//	int (*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int (*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}




//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz -1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[ j + 1 ] = tmp;
//			}
//		}
//	}
//
//}
//
struct Stu
{
	char name[20];
	int age;
};


int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ
	return *(int*)e1 - *(int*)e2;

}


int cmp_float(const void* e1, const void* e2)
{
	/*if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;*/
	return ((int)*(float*)e1 - *(float*)e2);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;

}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ��ַ���
	//�Ƚ��ַ���������><=���Ƚϣ�Ӧ����strcmp
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);


	

	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ط����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
	//            ����ָ������������ǣ����Ƚ�����Ԫ�صĵ�ַ
	//				


	/*bubble_sort(arr, sz);*/
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

//
//
//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void* e1, const* e2)
//);

void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1 ,void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱Ƚϵ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
		if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);

			}

		}
	}
}

test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}
void test5()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age );
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	/*test1();
	test2();
	test3();*/
	//test4();
	test5();
	return 0;
}

//int main()
//{
//	int a = 10;
//	/*int* pa = &a;
//	char* pc = &a;
//
//	char ch = 'w';*/
//	void* p = &a;
//	*p = 0;
//	p++;
//	//p = &ch;
//	//void* ���͵�ָ����Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�벻�ܽ��н����ò���
//	//void* ���͵�ָ�벻�ܽ���+-�����Ĳ���
//	return 0;
//}