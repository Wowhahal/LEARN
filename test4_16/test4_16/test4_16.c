#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//
//{
//	const int num = 10;
//	 int* const p = &num;
//	 // const ����ָ�������*���ʱ�����ε���*p,Ҳ����˵����ͨ��p���ı�*p��num����ֵ
//	 // const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//��srcָ����ַ���������destָ��Ŀռ䣬���ҿ���\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

int my_stylen(const char* str)
{
	int count = 0;
	assert(str != NULL);//���� ��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}