#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main()
//{
//	int a = 16;
//	//>>���Ʋ�����1.������λ���ұ߶�������߲�ԭ����λ  2.�߼���λ���ұ߶�������߲���
//	int b=a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//��������������ʾ��ԭ�롢���롢����
//	//�洢���ڴ浱�е��ǲ���
//	//10000000000000000000000000000001   -ԭ��
//	//11111111111111111111111111111110   -����
//	//11111111111111111111111111111111   -����
//
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	////& -��λ��
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	////00000000000000000000000000000011
//	////00000000000000000000000000000101
//	//printf("%d\n", c);
//
//	//// |-��λ��
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//printf("%d\n", c);
//
//	//^��λ���
//	//��ͬΪ0������Ϊ1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*int tmp = 0;*/
//	printf("%d %d\n", a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	//�Ӽ��� -���ܻ����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ĳ����м���1	
//	//0101-5
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (1 == ((num >> i) & 1))
//	//	{
//	//		count++;
//	//	}
//	//}
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//			num /= 2;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//ǰ��++����++����ʹ��
//	printf("%d\n", a++);//����++����ʹ��,��++
//	return 0;
//}



//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}