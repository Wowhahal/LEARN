#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = 0;
	int i = 0;
	int k = 0;
	scanf("%d", &k);
	sz = sizeof(arr) / sizeof(arr[0]);
	for (i ; i <= sz; i++)
	{
		if (arr[i] == k)
			printf("�ҵ����±�Ϊ��%d", i);
	}

	if(k>sz)
	printf("�Ҳ���");
	return 0;
}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//1*2*3*4*5 = 120
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("����n�Ľ׳ˣ�");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)  //��forѭ��������ӷֺŻ�ֱ���������
//	{
//		ret *=i;
//	}
//	printf("n�Ľ׳�Ϊ��%d\n", ret);
//	return 0;
//}