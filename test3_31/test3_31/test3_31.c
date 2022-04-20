#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main()
//{
//	int a = 16;
//	//>>右移操作符1.算数移位：右边丢弃，左边补原符号位  2.逻辑移位：右边丢弃，左边补零
//	int b=a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//整数二进制数表示：原码、反码、补码
//	//存储到内存当中的是补码
//	//10000000000000000000000000000001   -原码
//	//11111111111111111111111111111110   -反码
//	//11111111111111111111111111111111   -补码
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
//	////& -按位与
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	////00000000000000000000000000000011
//	////00000000000000000000000000000101
//	//printf("%d\n", c);
//
//	//// |-按位或
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//printf("%d\n", c);
//
//	//^按位异或
//	//相同为0，相异为1
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
//	//加减法 -可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//异或法
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
//	//统计num的补码有几个1	
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
//	//printf("%d\n", ++a);//前置++，先++，再使用
//	printf("%d\n", a++);//后置++，先使用,再++
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