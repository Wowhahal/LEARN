#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 100
int main()
{
    int a[N][N] = { 0 };
    int i, j, k, n = 3;
    //scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        a[i][1] = a[i][i] = 1;  /*1.第一列和对角线的数都是1*/
    }

    for (i = 3; i <= n; i++)
    {
        for (j = 2; j <= i - 1; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];/*2.除两边的数外, 都等于左上/上两数之和*/
        }
    }

    for (i = 1; i <= n; i++)
    {
        /*for(k=1;k<=n-i;k++){//输出空格美观,  缺点是数与上面的数是同列的关系不清
            printf("   ");
        }*/

        for (j = 1; j <= i; j++) {  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
            printf("%-6d", a[i][j]);
        }
        printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
    }

    return 0;
}