#include <stdio.h>

int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);
	return 0;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a + 3;
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 -a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 -b
//	char c = a + b;
//	//00000011
//	//��������00000000000000000000000000000011
//	//01111111 
//	//��������00000000000000000000000001111111 
//	//��Ӻ�00000000000000000000000010000010
//	//10000010 -c
//	//11111111111111111111111110000010 -����
//	//11111111111111111111111110000001 -����
//	//10000000000000000000000001111110 -ԭ��
//	printf("%d\n", c);
//
//	return 0;
//}

////ѧ��
////������һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20,"2019010305" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//�ṹ��ָ��->��Ա��
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

// 
// 
// 
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//
//	return 0;
// }

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	max = (a > b ? a : b);
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	//b = (a > 5 ? 3 : -3);
//
//	return 0;
//}

//int main()
//{
//    //int i = 0, a = 0, b = 2, c = 3, d = 4;
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;//a++��ʹ�ú�++��ֱ�����㣬���ֻҪ�Ǽ� �����ұ�
//    i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}////void test1(int arr[])
////{
////	printf("%d\n", sizeof(arr));//(2)
////}
////void test2(char ch[])
////{
////	printf("%d\n", sizeof(ch));//(4)
////}
////int main()
////{
////	int arr[10] = { 0 };
////	char ch[10] = { 0 };
////	printf("%d\n", sizeof(arr));//(1)
////	printf("%d\n", sizeof(ch));//(3)
////	test1(arr);
////	test2(ch);
////	return 0;
////}