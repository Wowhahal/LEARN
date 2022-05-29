#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int a, b, c;
//    int count = 0;
//    for (int i = 100; i < 1000; i++)
//    {
//        a = i % 10;//提取整数的个位数字
//        b = (i / 10) % 10;//提取整数的十位数字
//        c = (i / 100) % 10;//提取整数的百位数字
//        //判断是否为水仙花数字
//        if (i == a * a * a + b * b * b + c * c * c)
//        {
//            count++;//个数
//            printf("%d\n", i);
//        }
//    }
//    printf("count=%d", count);
//
//    return 0;
//}

int main()
{
    int num, n;
    int sum = 0;
    int temp = 0;
    printf("所求数字：\n");
    scanf("%d", &num);//1
    printf("所求数字的前几项：\n");
    scanf("%d", &n);//3
    for (int i = 0; i < n; i++)
    {
        temp = temp * 10 + num;
        printf("%d+", temp);
        sum = sum + temp;
    }
    printf("\n");
    printf("sum=%d", sum);

    return 0;
}