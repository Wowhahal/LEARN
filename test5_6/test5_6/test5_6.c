#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//void* my_memcpy(void* dest,const void* src,size_t count)
//{
//	char* ret = dest;
//	assert(dest && src);
//
//
//	int i = count;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest<src||dest>(char*)src +count)
//	{
//		//��ǰ����
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ
//		while (count--)
//				{
//					*(((char*)dest + count)) = *(((char*)src + count));
//				}
//	}
//
//	//if (dest < src)
//	//{
//	//	//��ǰ���
//	//	while (count--)
//	//	{
//	//		*(char*)dest = *(char*)src;
//	//		++(char*)dest;
//	//		++(char*)src;
//	//	}
//	//}
//	//else
//	//{
//	//	//�Ӻ���ǰ
//	//	while (count--)
//	//	{
//	//		*(((char*)dest + count)) = *(((char*)src + count));
//	//	}
//	//}
//	return ret;
//}
//
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[10] = { 0 };
//	//my_memcpy(arr2, arr1,sizeof(arr1));
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//memmove(arr3 + 2, arr3, 20);
//
//	my_memmove(arr3 , arr3+2, 20);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset-- �ڴ�����

//int main()
//{
//	/*char arr[10] = "";
//	memset(arr, '#', 10);*/
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);
//	//10���ֽڵ���˼
//
//	return 0;
//}

//�Զ������ͣ��ṹ�塢ö�١�������

//����һ���ṹ������
//����һ��ѧ�����ͣ������ѧ������������ѧ������������
//����ѧ��������- ����+�绰+�Ա�+����
//struct stu
//{
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;
//} s4,s5,s6;//ȫ�ֱ���
//
//struct stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����ṹ�����(�ֲ�)
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}*psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}

struct Node
{
	int data;//4
	struct Node* next;//4
};
int main()
{
	int sz=sizeof(struct Node);
	printf("%d\n", sz);
	return 0;
}