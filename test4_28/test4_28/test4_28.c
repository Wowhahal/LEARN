#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>



//int main()
//{
//    int arr[10] = { 1,2,3,4,5 };
//    int* p = arr;
//    *(p + 2) == p[2] == *(arr + 2) == arr[2];
//    //int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    //int* ptr1 = (int*)(&aa + 1);
//    //int* ptr2 = (int*)(*(aa + 1));
//    //printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10    5
//    return 0;
//}

//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//a���ַ�ָ��
//	char** pa = a;//pa��������char**
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	return 0;
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };//first  point  new  first
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);  //point
//	printf("%s\n", *-- * ++cpp + 3);//er    ������
//	printf("%s\n", *cpp[-2] + 3);// st   *��*cpp-2��
//	printf("%s\n", cpp[-1][-1] + 1);// ew   *(*(cpp-1)-1)
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d ,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", &arr);
//	gets(arr);
//	//������
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	// 2  22  222   2222   22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
		//1.����i��λ����nλ��
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		//123/10 n++
		//12/10  n++
		//1/10   n++
		
		//2.����i��ÿһλ��n�η�֮�� sum
		tmp = i;
		while (tmp)
		{

			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.�Ƚ�i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}