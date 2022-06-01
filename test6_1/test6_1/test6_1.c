#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;//0表示清白
//	int cd;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (i == 0)//A假
//		{
//			a = 1;
//			c = 1;
//			d = 0;
//			cd = 1;
//		}
//		if (i == 1)//B假
//		{
//			a = 0;
//			c = 0;
//			cd = 1;
//			d = 0;
//		}
//		if (i == 2)//C假
//		{
//			a = 0;
//			c = 1;
//			d = 0;
//			cd = 0;
//		}
//		if (i == 3)//D假
//		{
//			a = 0;
//			c = 1;
//			d = 1;
//			cd = 1;
//		}
//		if (a + b + c + d + cd == 1 && cd == 0)
//		{
//			printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//		}
//
//	}
//	return 0;
//}

int main()
{
	char killer;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("killer=%c", killer);
		}
	}
	return 0;
}

//在屏幕上打印杨辉三角。
//    1
//   1 1
//  1 2 1                a[2][1]=a[1][0]+a[1][1]
// 1 3 3 1    a[3][1]=a[2][0]+a[2][1]    a[3][2]=a[2][1]+a[2][2]
//1 4 6 4 1

int main()
{

}