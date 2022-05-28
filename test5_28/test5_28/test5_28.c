#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//    int arr1[] = { 1, 2, 3 }, arr2[] = { 4, 5, 6 }, i, t;
//    printf("arr1=");
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    printf("\n");
//    printf("arr2=");
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n");
//    for (i = 0; i < 3; i++)
//    {
//        t = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = t;
//    }
//    printf("new arr1=");
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    printf("\n");
//    printf("new arr2=");
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n");
//    system("pause");
//    return 0;
//}

// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//#include<math.h>
//int main()
//{
//    int i;
//    float sum = 0.0, temp = 0.0;
//    for (i = 1; i <= 100; i++)
//    {
//        temp = pow(-1, i + 1);
//        sum = sum + temp * 1 / i;
//    }
//    printf("sum is %f\n", sum);
//    system("pause");
//    return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
int main() {
    int num = 0;
    for (int i = 1; i <= 100; i++) {
        if (i / 10 == 9) {
            num++;
            if (i % 10 == 9) {
                num++;
            }
        }
        else if (i % 10 == 9) {
            num++;
        }
    }
    printf("一共有 %d 个9\n", num);
    return 0;
}