#define _CRE_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//����������Ԫ�ص�ַ
//	//1��sizeof(������)- ��������ʾ��������
//	//2��&������ - ��������ʾ��������
//	//
//	//һά����
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//sizeof(������)-���������ܴ�С-��λ�ֽ�-  16
//	//printf("%d\n", sizeof(a + 0));//4   - �����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ
//	//printf("%d\n", sizeof(*a));//4  - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ��
//	//printf("%d\n", sizeof(a + 1));//4
//	//printf("%d\n", sizeof(a[1]));//4  -�ڶ���Ԫ�صĴ�С
//	//printf("%d\n", sizeof(&a));//4  &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n", sizeof(*&a));//16  -   &a������ĵ�ַ������ĵ�ַ�����ã����ʵ������飬sizeof����ľ�������Ĵ�С����λ�ֽ�
//	//printf("%d\n", sizeof(&a + 1));//4  &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//	//printf("%d\n", sizeof(&a[0]));//4
//	//printf("%d\n", sizeof(&a[0] + 1));//4
//
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//	//��/0ʱֹͣ
//	printf("%d\n", strlen(arr));// ���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//
//	
//	//printf("%d\n", sizeof(arr));//6   sizeof������������С
//	//printf("%d\n", sizeof(arr + 0));//4/8  arr��ʾ������Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ  ��ַ�Ĵ�С��4/8�ֽ�
//	//printf("%d\n", sizeof(*arr));   // 1  arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��һ���ֽ�
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));// 4  &arr ��Ȼ������ĵ�ַ �����ǵ�ַ��
//	//printf("%d\n", sizeof(&arr + 1));// 4   &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 ���ǵ�ַ
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
	//printf("%d\n", strlen(&p));  //���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5


	//printf("%d\n", sizeof(p));// 4 ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));//4  p+1��������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));// 1  *p�����ַ����ĵ�һ���ַ�
	//printf("%d\n", sizeof(p[0]));//1  int arr[10];  arr[0]==*(arr+0)   p[0] == *(p+0) == 'a'
	//printf("%d\n", sizeof(&p));//4  ��ַ 
	//printf("%d\n", sizeof(&p + 1));//4   ����p�ĵ�ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4  b�ĵ�ַ


	//char arr[] = "abcdef";

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6    &arr - ȡ��������ĵ�ַ - ����ָ��char ��*��p[7] = &arr
	//printf("%d\n", strlen(&arr + 1));//���ֵ  
	//printf("%d\n", strlen(&arr[0] + 1));//5
	//printf("%d\n", sizeof(arr));//�����ʱ����Ĵ�С����λ�ֽڣ�7
	//printf("%d\n", sizeof(arr + 0));//4/8  ������ǵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(*arr));  // 1  *arr����Ԫ�أ����������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));//1������ǵڶ���Ԫ��
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8  �������������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8  �ڶ���Ԫ�صĵ�ַ


	return 0;
}