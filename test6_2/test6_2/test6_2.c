#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 100
int main()
{
    int a[N][N] = { 0 };
    int i, j, k, n = 3;
    //scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        a[i][1] = a[i][i] = 1;  /*1.��һ�кͶԽ��ߵ�������1*/
    }

    for (i = 3; i <= n; i++)
    {
        for (j = 2; j <= i - 1; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];/*2.�����ߵ�����, ����������/������֮��*/
        }
    }

    for (i = 1; i <= n; i++)
    {
        /*for(k=1;k<=n-i;k++){//����ո�����,  ȱ�����������������ͬ�еĹ�ϵ����
            printf("   ");
        }*/

        for (j = 1; j <= i; j++) {  /*j<=i��ԭ���ǲ��������������ֻ���������Ҫ����*/
            printf("%-6d", a[i][j]);
        }
        printf("\n");  /*��һ��������Ժ��м�����һ�е����*/
    }

    return 0;
}